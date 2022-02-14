
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dStage; int frameInfo; } ;
typedef int LZ4F_frameInfo_t ;
typedef size_t const LZ4F_errorCode_t ;
typedef TYPE_1__ LZ4F_dctx ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_1__*,void const*,size_t const) ;
 size_t const FUNC_2 (TYPE_1__*,int *,size_t*,int *,size_t*,int *) ;
 size_t FUNC_3 (void const*,size_t) ;
 scalar_t__ FUNC_4 (size_t const) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t const FUNC_5 (int ) ;

LZ4F_errorCode_t FUNC_6(LZ4F_dctx* VAR_5,
                                   LZ4F_frameInfo_t* VAR_6,
                             const void* VAR_7, size_t* VAR_8)
{
    FUNC_0(VAR_3 < VAR_4);
    if (VAR_5->dStage > VAR_4) {

        size_t VAR_9=0, VAR_10=0;
        *VAR_8 = 0;
        *VAR_6 = VAR_5->frameInfo;

        return FUNC_2(VAR_5, ((void*)0), &VAR_9, ((void*)0), &VAR_10, ((void*)0));
    } else {
        if (VAR_5->dStage == VAR_4) {

            *VAR_8 = 0;
            return FUNC_5(VAR_1);
        } else {
            size_t const VAR_11 = FUNC_3(VAR_7, *VAR_8);
            if (FUNC_4(VAR_11)) { *VAR_8=0; return VAR_11; }
            if (*VAR_8 < VAR_11) {
                *VAR_8=0;
                return FUNC_5(VAR_2);
            }

            { size_t VAR_12 = FUNC_1(VAR_5, VAR_7, VAR_11);
                if (FUNC_4(VAR_12)) {
                    *VAR_8 = 0;
                } else {
                    *VAR_8 = VAR_12;
                    VAR_12 = VAR_0;
                }
                *VAR_6 = VAR_5->frameInfo;
                return VAR_12;
    } } }
}
