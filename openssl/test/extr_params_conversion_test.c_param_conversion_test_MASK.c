
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ i32; scalar_t__ i64; scalar_t__ u32; scalar_t__ u64; double d; int size; int ref; int datum; int param; int valid_d; int valid_u64; int valid_u32; int valid_i64; int valid_i32; } ;
typedef TYPE_1__ PARAM_CONVERSION ;


 int FUNC_0 (int ,double*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,double) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int,int ) ;

__attribute__((used)) static int FUNC_15(const PARAM_CONVERSION *VAR_0, int VAR_1)
{
    int32_t VAR_2;
    int64_t VAR_3;
    uint32_t VAR_4;
    uint64_t VAR_5;
    double VAR_6;

    if (!VAR_0->valid_i32) {
        if (!FUNC_10(FUNC_1(VAR_0->param, &VAR_2))) {
            FUNC_12("unexpected valid conversion to int32 on line %d", VAR_1);
            return 0;
        }
    } else {
        if (!FUNC_13(FUNC_1(VAR_0->param, &VAR_2))
            || !FUNC_13(VAR_2 == VAR_0->i32)) {
            FUNC_12("unexpected conversion to int32 on line %d", VAR_1);
            return 0;
        }
        FUNC_14(VAR_0->datum, 44, VAR_0->size);
        if (!FUNC_13(FUNC_6(VAR_0->param, VAR_2))
            || !FUNC_11(VAR_0->datum, VAR_0->size, VAR_0->ref, VAR_0->size)) {
            FUNC_12("unexpected valid conversion from int32 on line %d",
                      VAR_1);
            return 0;
        }
    }

    if (!VAR_0->valid_i64) {
        if (!FUNC_10(FUNC_2(VAR_0->param, &VAR_3))) {
            FUNC_12("unexpected valid conversion to int64 on line %d", VAR_1);
            return 0;
        }
    } else {
        if (!FUNC_13(FUNC_2(VAR_0->param, &VAR_3))
            || !FUNC_13(VAR_3 == VAR_0->i64)) {
            FUNC_12("unexpected conversion to int64 on line %d", VAR_1);
            return 0;
        }
        FUNC_14(VAR_0->datum, 44, VAR_0->size);
        if (!FUNC_13(FUNC_7(VAR_0->param, VAR_3))
            || !FUNC_11(VAR_0->datum, VAR_0->size, VAR_0->ref, VAR_0->size)) {
            FUNC_12("unexpected valid conversion from int64 on line %d",
                      VAR_1);
            return 0;
        }
    }

    if (!VAR_0->valid_u32) {
        if (!FUNC_10(FUNC_3(VAR_0->param, &VAR_4))) {
            FUNC_12("unexpected valid conversion to uint32 on line %d", VAR_1);
            return 0;
        }
    } else {
        if (!FUNC_13(FUNC_3(VAR_0->param, &VAR_4))
            || !FUNC_13(VAR_4 == VAR_0->u32)) {
            FUNC_12("unexpected conversion to uint32 on line %d", VAR_1);
            return 0;
        }
        FUNC_14(VAR_0->datum, 44, VAR_0->size);
        if (!FUNC_13(FUNC_8(VAR_0->param, VAR_4))
            || !FUNC_11(VAR_0->datum, VAR_0->size, VAR_0->ref, VAR_0->size)) {
            FUNC_12("unexpected valid conversion from uint32 on line %d",
                      VAR_1);
            return 0;
        }
    }

    if (!VAR_0->valid_u64) {
        if (!FUNC_10(FUNC_4(VAR_0->param, &VAR_5))) {
            FUNC_12("unexpected valid conversion to uint64 on line %d", VAR_1);
            return 0;
        }
    } else {
        if (!FUNC_13(FUNC_4(VAR_0->param, &VAR_5))
            || !FUNC_13(VAR_5 == VAR_0->u64)) {
            FUNC_12("unexpected conversion to uint64 on line %d", VAR_1);
            return 0;
        }
        FUNC_14(VAR_0->datum, 44, VAR_0->size);
        if (!FUNC_13(FUNC_9(VAR_0->param, VAR_5))
            || !FUNC_11(VAR_0->datum, VAR_0->size, VAR_0->ref, VAR_0->size)) {
            FUNC_12("unexpected valid conversion from uint64 on line %d",
                      VAR_1);
            return 0;
        }
    }

    if (!VAR_0->valid_d) {
        if (!FUNC_10(FUNC_0(VAR_0->param, &VAR_6))) {
            FUNC_12("unexpected valid conversion to double on line %d", VAR_1);
            return 0;
        }
    } else {
        if (!FUNC_13(FUNC_0(VAR_0->param, &VAR_6))
            || !FUNC_13(VAR_6 == VAR_0->d)) {
            FUNC_12("unexpected conversion to double on line %d", VAR_1);
            return 0;
        }
        FUNC_14(VAR_0->datum, 44, VAR_0->size);
        if (!FUNC_13(FUNC_5(VAR_0->param, VAR_6))
            || !FUNC_11(VAR_0->datum, VAR_0->size, VAR_0->ref, VAR_0->size)) {
            FUNC_12("unexpected valid conversion from double on line %d",
                      VAR_1);
            return 0;
        }
    }

    return 1;
}
