
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rsa; } ;
typedef TYPE_1__ KEY_CONTEXT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;
typedef int ALG_ID ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int,int,int *) ;

BOOL FUNC_2(ALG_ID VAR_4, KEY_CONTEXT *VAR_5, DWORD VAR_6)
{
    switch (VAR_4)
    {
        case 129:
        case 128:
            if (FUNC_1((int)VAR_6, 65537, &VAR_5->rsa) != VAR_0) {
                FUNC_0(VAR_2);
                return VAR_1;
            }
            return VAR_3;
    }

    return VAR_3;
}
