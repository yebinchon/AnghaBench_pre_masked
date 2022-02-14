
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IHTMLDocument2 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_2 ;
 int FUNC_4 (int,char*,int) ;
 int * VAR_3 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(IHTMLDocument2 *VAR_4)
{
    ULONG VAR_5;

    FUNC_5(VAR_4, VAR_0);
    VAR_5 = FUNC_1(VAR_4);
    FUNC_4(!VAR_5 || FUNC_3(VAR_5 == 1) , "ref = %d\n", VAR_5);

    if(VAR_2) {
        FUNC_2(VAR_2);
        VAR_2 = ((void*)0);
    }

    if(VAR_3) {
        FUNC_0(VAR_3);
        VAR_3 = ((void*)0);
    }

    FUNC_4(!VAR_1, "activex_refcnt = %d\n", VAR_1);
}
