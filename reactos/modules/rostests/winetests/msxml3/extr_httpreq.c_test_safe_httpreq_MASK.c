
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLHttpRequest ;
typedef int IUnknown ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char*,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    IXMLHttpRequest *VAR_2;

    VAR_2 = FUNC_1();

    FUNC_3((IUnknown*)VAR_2, VAR_1, -1);
    FUNC_4(VAR_2);


    FUNC_5(VAR_2, "GET", "https://test.winehq.org/tests/hello.html", VAR_0);


    FUNC_5(VAR_2, "GET", "http://tests.winehq.org/tests/hello.html", VAR_0);
    FUNC_5(VAR_2, "GET", "http://www.test.winehq.org/tests/hello.html", VAR_0);

    FUNC_0(VAR_2);
    FUNC_2();
}
