
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lcid; } ;
typedef TYPE_1__ TLIBATTR ;
typedef int ITypeLib ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int,int ,int **) ;
 int FUNC_2 (int *,TYPE_1__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int,int,int ,int **) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (int ,int (*) (int *,int,int,int ,int **)) ;

__attribute__((used)) static void FUNC_10(void)
{
    ITypeLib *VAR_4;
    HRESULT VAR_5;
    TLIBATTR *VAR_6;

    VAR_5 = FUNC_5(&VAR_1, 2, 5, VAR_2, &VAR_4);
    FUNC_9(VAR_5, FUNC_5);
    if (FUNC_0(VAR_5))
        return;

    VAR_5 = FUNC_2(VAR_4, &VAR_6);
    FUNC_9(VAR_5, FUNC_1);
    if (FUNC_7(VAR_5))
    {
        FUNC_8(VAR_6->lcid == FUNC_6(VAR_0, VAR_3), "lcid %x\n", VAR_6->lcid);

        FUNC_4(VAR_4, VAR_6);
    }

    FUNC_3(VAR_4);
}
