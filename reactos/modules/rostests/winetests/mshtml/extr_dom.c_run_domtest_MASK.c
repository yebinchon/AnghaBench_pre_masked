
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* domtest_t ) (int *) ;
typedef int ULONG ;
typedef int MSG ;
typedef int IUnknown ;
typedef int IHTMLDocument2 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (int *,int *,int *) ;
 int VAR_4 ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(const char *VAR_5, domtest_t VAR_6)
{
    IHTMLDocument2 *VAR_7;
    ULONG VAR_8;
    MSG VAR_9;

    VAR_7 = FUNC_5(VAR_5);
    if(!VAR_7)
        return;

    FUNC_8(VAR_7, VAR_3);
    FUNC_6((IUnknown*)VAR_7, &VAR_1, (IUnknown*)&VAR_2);

    while(!VAR_4 && FUNC_1(&VAR_9, ((void*)0), 0, 0)) {
        FUNC_3(&VAR_9);
        FUNC_0(&VAR_9);
    }

    VAR_6(VAR_7);

    FUNC_8(VAR_7, VAR_0);
    VAR_8 = FUNC_2(VAR_7);
    FUNC_7(!VAR_8 || FUNC_4(VAR_8 == 1),
       "ref = %d\n", VAR_8);
}
