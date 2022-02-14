
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_socktype; int ai_protocol; int ai_family; } ;
typedef int in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static struct addrinfo *FUNC_5(const char *VAR_6, in_port_t VAR_7)
{
    struct addrinfo *VAR_8 = 0;
    struct addrinfo VAR_9 = { .ai_family = VAR_0,
                              .ai_protocol = VAR_2,
                              .ai_socktype = VAR_4 };
    char VAR_10[VAR_3];
    int VAR_11;

    (void)FUNC_4(VAR_10, VAR_3, "%d", VAR_7);
    if ((VAR_11 = FUNC_2(VAR_6, VAR_10, &VAR_9, &VAR_8)) != 0) {
       if (VAR_11 != VAR_1) {
          FUNC_0(VAR_5, "getaddrinfo(): %s\n", FUNC_1(VAR_11));
       } else {
          FUNC_3("getaddrinfo()");
       }
    }

    return VAR_8;
}
