
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_family; int ai_addrlen; int ai_addr; } ;
typedef int serv_buf ;
typedef int host_buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*,int,char*,int,int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(int VAR_5, const struct addrinfo *VAR_6)
{
    if (FUNC_3(VAR_5, FUNC_1()) < 0)
        FUNC_5("listen");

    char VAR_7[VAR_1], VAR_8[VAR_2];
    int VAR_9 = FUNC_2(VAR_6->ai_addr, VAR_6->ai_addrlen, VAR_7,
                          sizeof(VAR_7), VAR_8, sizeof(VAR_8),
                          VAR_3 | VAR_4);
    if (VAR_9)
        FUNC_4("getnameinfo: %s", FUNC_0(VAR_9));

    if (VAR_6->ai_family == VAR_0)
        FUNC_6("Listening on http://[%s]:%s", VAR_7, VAR_8);
    else
        FUNC_6("Listening on http://%s:%s", VAR_7, VAR_8);

    return FUNC_7(VAR_5);
}
