
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int cParams; int elemdescFunc; int * lprgelemdescParam; } ;
typedef int ITypeInfo ;
typedef int HRESULT ;
typedef TYPE_1__ FUNCDESC ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,TYPE_1__**) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,unsigned char*,size_t*,unsigned char*,size_t*,int *,int ,unsigned short*) ;
 int FUNC_5 (int *,TYPE_1__*,int,unsigned char*,size_t*) ;

__attribute__((used)) static HRESULT FUNC_6(ITypeInfo *VAR_3, WORD VAR_4, WORD VAR_5,
        unsigned char *VAR_6, size_t *VAR_7, unsigned char *VAR_8,
        size_t *VAR_9, unsigned short *VAR_10)
{
    unsigned short VAR_11;
    WORD VAR_12, VAR_13;
    FUNCDESC *VAR_14;
    HRESULT VAR_15;

    for (VAR_12 = 3; VAR_12 < VAR_5; VAR_12++)
    {
        if (VAR_10)
            VAR_10[VAR_12 - 3] = -1;
    }

    for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
    {
        FUNC_3("Writing procedure %d.\n", VAR_12);

        VAR_15 = FUNC_1(VAR_3, VAR_12, &VAR_14);
        if (FUNC_0(VAR_15)) return VAR_15;

        if (VAR_10)
            VAR_10[VAR_12 + VAR_5 - 3] = *VAR_9;

        FUNC_5(VAR_3, VAR_14, VAR_12 + VAR_5, VAR_8, VAR_9);

        VAR_11 = sizeof(void *);
        for (VAR_13 = 0; VAR_13 < VAR_14->cParams; VAR_13++)
        {
            FUNC_3("Writing parameter %d.\n", VAR_13);
            VAR_15 = FUNC_4(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9,
                    &VAR_14->lprgelemdescParam[VAR_13], VAR_0, &VAR_11);
            if (FUNC_0(VAR_15))
            {
                FUNC_2(VAR_3, VAR_14);
                return VAR_15;
            }
        }

        VAR_15 = FUNC_4(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9,
                &VAR_14->elemdescFunc, VAR_2, &VAR_11);
        FUNC_2(VAR_3, VAR_14);
        if (FUNC_0(VAR_15)) return VAR_15;
    }

    return VAR_1;
}
