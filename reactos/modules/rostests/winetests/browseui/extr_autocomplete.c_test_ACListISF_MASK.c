
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IEnumString ;
typedef int IACList ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    IEnumString *VAR_5;
    IACList *VAR_6, *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_2, (void**)&VAR_6);
    FUNC_5(VAR_8 == VAR_4, "failed to create ACListISF instance, 0x%08x\n", VAR_8);

    VAR_8 = FUNC_1(VAR_6, &VAR_3, (void**)&VAR_5);
    FUNC_5(VAR_8 == VAR_4, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_3(VAR_5, &VAR_2, (void**)&VAR_7);
    FUNC_5(VAR_8 == VAR_4, "got 0x%08x\n", VAR_8);
    FUNC_5(VAR_6 == VAR_7, "got %p, %p\n", VAR_6, VAR_7);
    FUNC_2(VAR_7);

    FUNC_4(VAR_5);
    FUNC_2(VAR_6);
}
