
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* style_test_t ) (int *) ;
typedef int ULONG ;
typedef int MSG ;
typedef int IUnknown ;
typedef int IHTMLDocument2 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static void FUNC_8(const char *VAR_3, style_test_t VAR_4)
{
    IHTMLDocument2 *VAR_5;
    ULONG VAR_6;
    MSG VAR_7;

    VAR_5 = FUNC_5(VAR_3);
    if(!VAR_5)
        return;

    FUNC_6((IUnknown*)VAR_5, &VAR_0, (IUnknown*)&VAR_1);

    while(!VAR_2 && FUNC_1(&VAR_7, ((void*)0), 0, 0)) {
        FUNC_3(&VAR_7);
        FUNC_0(&VAR_7);
    }

    VAR_4(VAR_5);

    VAR_6 = FUNC_2(VAR_5);
    FUNC_7(!VAR_6 || FUNC_4(VAR_6 == 1),
       "ref = %d\n", VAR_6);
}
