
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;
typedef int IUnknown ;
typedef int IHTMLDocument2 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static IHTMLDocument2 *FUNC_7(const char *VAR_4)
{
    IHTMLDocument2 *VAR_5;
    MSG VAR_6;

    VAR_5 = FUNC_3();
    FUNC_6(VAR_5, VAR_2);
    FUNC_5(VAR_5, VAR_4);
    FUNC_4((IUnknown*)VAR_5, &VAR_0, (IUnknown*)&VAR_1);

    while(!VAR_3 && FUNC_1(&VAR_6, ((void*)0), 0, 0)) {
        FUNC_2(&VAR_6);
        FUNC_0(&VAR_6);
    }

    return VAR_5;
}
