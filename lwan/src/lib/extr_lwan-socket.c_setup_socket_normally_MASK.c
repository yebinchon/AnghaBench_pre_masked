
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reuse_port; int listener; } ;
struct lwan {TYPE_1__ config; } ;
struct addrinfo {scalar_t__ ai_family; int ai_flags; int ai_socktype; } ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct addrinfo*,int ) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (char*,char**,char**) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct lwan *VAR_3)
{
    char *VAR_4, *VAR_5;
    char *VAR_6 = FUNC_6(VAR_3->config.listener);
    sa_family_t VAR_7 = FUNC_5(VAR_6, &VAR_4, &VAR_5);
    if (VAR_7 == VAR_0)
        FUNC_4("Could not parse listener: %s",
                             VAR_3->config.listener);

    struct addrinfo *VAR_8;
    struct addrinfo VAR_9 = {.ai_family = VAR_7,
                             .ai_socktype = VAR_2,
                             .ai_flags = VAR_1};

    int VAR_10 = FUNC_3(VAR_4, VAR_5, &VAR_9, &VAR_8);
    if (VAR_10)
        FUNC_4("getaddrinfo: %s", FUNC_2(VAR_10));

    int VAR_11 = FUNC_0(VAR_8, VAR_3->config.reuse_port);
    FUNC_1(VAR_8);
    return VAR_11;
}
