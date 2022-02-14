
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int guid; } ;
typedef TYPE_1__ TYPEATTR ;
typedef int * REFIID ;
typedef int ITypeInfo ;
typedef int IDispatch ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,int ,int **) ;
 int FUNC_1 (int *,int*) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(IDispatch *VAR_3, REFIID *VAR_4)
{
    ITypeInfo *VAR_5;
    TYPEATTR *VAR_6;
    UINT VAR_7;
    HRESULT VAR_8;

    VAR_7 = 10;
    VAR_8 = FUNC_1(VAR_3, &VAR_7);
    FUNC_6(VAR_8 == VAR_2, "got 0x%08x\n", VAR_8);
    FUNC_6(VAR_7 == 1, "got %u\n", VAR_7);

    VAR_8 = FUNC_0(VAR_3, 0, VAR_1, &VAR_5);
    FUNC_6(VAR_8 == VAR_2, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_2(VAR_5, &VAR_6);
    FUNC_6(VAR_8 == VAR_2, "got 0x%08x\n", VAR_8);
    while (!FUNC_5(*VAR_4, &VAR_0)) {
        if (FUNC_5(&VAR_6->guid, *VAR_4))
            break;
        VAR_4++;
    }
    FUNC_6(FUNC_5(&VAR_6->guid, *VAR_4), "unexpected type guid %s\n", FUNC_7(&VAR_6->guid));

    FUNC_4(VAR_5, VAR_6);
    FUNC_3(VAR_5);
}
