
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IMimeMessage ;
typedef int IMimeBody ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,void**) ;
 int FUNC_2 (int *,int ,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    HRESULT VAR_4;
    IMimeMessage *VAR_5;
    IMimeBody *VAR_6;
    ULONG VAR_7;

    VAR_4 = FUNC_4(((void*)0), &VAR_5);
    FUNC_5(VAR_4 == VAR_2, "ret %08x\n", VAR_4);

    VAR_4 = FUNC_2(VAR_5, VAR_0, VAR_3, &VAR_7);
    FUNC_5(VAR_4 == VAR_2, "ret %08x\n", VAR_4);
    FUNC_5(VAR_7 == 1, "got %d\n", VAR_7);

    VAR_4 = FUNC_1(VAR_5, VAR_0, &VAR_1, (void**)&VAR_6);
    FUNC_5(VAR_4 == VAR_2, "ret %08x\n", VAR_4);
    FUNC_0(VAR_6);

    FUNC_3(VAR_5);
}
