
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int opts ;
struct TYPE_4__ {int stableDst; } ;
typedef TYPE_1__ LZ4F_decompressOptions_t ;
typedef int LZ4F_dctx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int **,int ) ;
 size_t FUNC_2 (int *,void*,size_t*,void const*,size_t*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (size_t const) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

size_t FUNC_6(void* VAR_1, const size_t VAR_2,
                            const void* VAR_3, const size_t VAR_4)
{
    LZ4F_decompressOptions_t VAR_5;
    FUNC_5(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.stableDst = 1;
    LZ4F_dctx* VAR_6;
    FUNC_1(&VAR_6, VAR_0);
    FUNC_0(*VAR_6);

    size_t VAR_7 = VAR_2;
    size_t VAR_8 = VAR_4;
    size_t const VAR_9 =
            FUNC_2(VAR_6, VAR_1, &VAR_7, VAR_3, &VAR_8, &VAR_5);
    FUNC_0(!FUNC_4(VAR_9));
    FUNC_0(VAR_9 == 0);
    FUNC_0(VAR_8 == VAR_4);

    FUNC_3(VAR_6);

    return VAR_7;
}
