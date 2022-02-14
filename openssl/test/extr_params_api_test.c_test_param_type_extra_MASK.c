
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int s ;
typedef size_t int64_t ;
typedef size_t int32_t ;
typedef int i64 ;
typedef int i32 ;
struct TYPE_10__ {int data_size; scalar_t__ data_type; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t*) ;
 int FUNC_1 (TYPE_1__*,size_t*) ;
 int FUNC_2 (TYPE_1__*,size_t*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (unsigned char*,size_t,unsigned char const*,size_t) ;
 int FUNC_8 (size_t,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned char*,size_t*,int) ;

__attribute__((used)) static int FUNC_11(OSSL_PARAM *VAR_2, const unsigned char *VAR_3,
                                 size_t VAR_4)
{
    int32_t VAR_5;
    int64_t VAR_6;
    size_t VAR_7, VAR_8;
    unsigned char VAR_9[VAR_0];
    const int VAR_10 = VAR_2->data_size == sizeof(int32_t);
    const int VAR_11 = VAR_10 && sizeof(size_t) > sizeof(int32_t);
    const int VAR_12 = VAR_2->data_type == VAR_1;

    if (VAR_12) {
        if ((VAR_10 && !FUNC_9(FUNC_0(VAR_2, &VAR_5)))
            || !FUNC_9(FUNC_1(VAR_2, &VAR_6)))
            return 0;
    } else {
        if ((VAR_10
             && !FUNC_9(FUNC_3(VAR_2, (uint32_t *)&VAR_5)))
            || !FUNC_9(FUNC_4(VAR_2, (uint64_t *)&VAR_6))
            || (VAR_11 && !FUNC_9(FUNC_2(VAR_2, &VAR_7))))
            return 0;
    }


    if (VAR_10) {
        FUNC_10(VAR_9, &VAR_5, sizeof(VAR_5));
        VAR_8 = sizeof(VAR_5) < VAR_4 ? sizeof(VAR_5) : VAR_4;
        if (!FUNC_7(VAR_9, VAR_8, VAR_3, VAR_8))
            return 0;
    }
    FUNC_10(VAR_9, &VAR_6, sizeof(VAR_6));
        VAR_8 = sizeof(VAR_6) < VAR_4 ? sizeof(VAR_6) : VAR_4;
    if (!FUNC_7(VAR_9, VAR_8, VAR_3, VAR_8))
        return 0;
    if (VAR_11 && !VAR_12) {
        FUNC_10(VAR_9, &VAR_7, sizeof(VAR_7));
        VAR_8 = sizeof(VAR_7) < VAR_4 ? sizeof(VAR_7) : VAR_4;
        if (!FUNC_7(VAR_9, VAR_8, VAR_3, VAR_8))
            return 0;
    }


    if (sizeof(size_t) > VAR_4) {
        if (VAR_12) {
            if (!FUNC_9(FUNC_5(VAR_2, 12345))
                || !FUNC_9(FUNC_1(VAR_2, &VAR_6))
                || !FUNC_8((size_t)VAR_6, 12345))
                return 0;
        } else {
            if (!FUNC_9(FUNC_6(VAR_2, 12345))
                || !FUNC_9(FUNC_4(VAR_2, (uint64_t *)&VAR_6))
                || !FUNC_8((size_t)VAR_6, 12345))
                return 0;
        }
    }
    return 1;
}
