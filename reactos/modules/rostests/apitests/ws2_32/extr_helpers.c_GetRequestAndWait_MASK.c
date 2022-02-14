
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_set {int dummy; } ;
typedef int SOCKET ;


 int FUNC_0 (int ,struct fd_set*) ;
 int FUNC_1 (struct fd_set*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ,struct fd_set*,int *,int *,int *) ;
 int FUNC_5 (int ,char const*,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char const*) ;

int FUNC_8(SOCKET VAR_1)
{
    const char VAR_2[] = "GET / HTTP/1.0\r\n\r\n";
    int VAR_3;
    struct fd_set VAR_4;


    FUNC_2(FUNC_5(VAR_1, VAR_2, FUNC_7(VAR_2), 0));
    FUNC_3(VAR_3 == FUNC_7(VAR_2), "iResult = %d\n", VAR_3);





    FUNC_1(&VAR_4);
    FUNC_0(VAR_1, &VAR_4);

    FUNC_2(FUNC_4(0, &VAR_4, ((void*)0), ((void*)0), ((void*)0)));

    return 1;
}
