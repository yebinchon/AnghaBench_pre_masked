
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {struct addrinfo* ai_next; TYPE_1__* ai_addr; } ;
typedef int socklen_t ;
typedef int sadr ;
struct TYPE_2__ {int sa_family; } ;
typedef int SIMPLE_PATTERN ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (char*,char const*,char*,...) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int *,int *,struct addrinfo**) ;
 int FUNC_5 (struct sockaddr*,int,char*,int,int *,int ,int ) ;
 int FUNC_6 (int,struct sockaddr*,int*) ;
 int FUNC_7 (int const,int *,char*,int) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;

extern int FUNC_11(int VAR_3, char *VAR_4, char *VAR_5, size_t VAR_6, SIMPLE_PATTERN *VAR_7,
                              const char *VAR_8, int VAR_9)
{
    FUNC_0(VAR_0,"checking %s... (allow_dns=%d)", VAR_8, VAR_9);
    if (!VAR_7)
        return 1;
    if (FUNC_8(VAR_7, VAR_4))
        return 1;


    if (VAR_5[0]==0 && VAR_9)
    {
        struct sockaddr_storage VAR_10;
        socklen_t VAR_11 = sizeof(VAR_10);
        int VAR_12 = FUNC_6(VAR_3, (struct sockaddr*)&VAR_10, &VAR_11);
        if (VAR_12 != 0 ||
            (VAR_12 = FUNC_5((struct sockaddr *)&VAR_10, VAR_11, VAR_5, (socklen_t)VAR_6,
                              ((void*)0), 0, VAR_2)) != 0) {
            FUNC_1("Incoming %s on '%s' does not match a numeric pattern, and host could not be resolved (err=%s)",
                  VAR_8, VAR_4, FUNC_3(VAR_12));
            if (VAR_6 >= 8)
                FUNC_10(VAR_5,"UNKNOWN");
            return 0;
        }
        struct addrinfo *VAR_13 = ((void*)0);
        if (FUNC_4(VAR_5, ((void*)0), ((void*)0), &VAR_13) !=0 ) {
            FUNC_1("LISTENER: cannot validate hostname '%s' from '%s' by resolving it",
                  VAR_5, VAR_4);
            if (VAR_6 >= 8)
                FUNC_10(VAR_5,"UNKNOWN");
            return 0;
        }
        struct addrinfo *VAR_14 = VAR_13;
        int VAR_15 = 0;
        while (VAR_14) {
            char VAR_16[VAR_1];
            VAR_16[0] = 0;
            switch (VAR_14->ai_addr->sa_family) {
                case 129:
                    FUNC_7(129, &((struct sockaddr_in*)(VAR_14->ai_addr))->sin_addr, VAR_16, VAR_1);
                    break;
                case 128:
                    FUNC_7(128, &((struct sockaddr_in6*)(VAR_14->ai_addr))->sin6_addr, VAR_16, VAR_1);
                    break;
            }
            FUNC_0(VAR_0, "Incoming ip %s rev-resolved onto %s, validating against forward-resolution %s",
                  VAR_4, VAR_5, VAR_16);
            if (!FUNC_9(VAR_4, VAR_16)) {
                VAR_15 = 1;
                break;
            }
            VAR_14 = VAR_14->ai_next;
        }
        if (!VAR_15) {
            FUNC_1("LISTENER: Cannot validate '%s' as ip of '%s', not listed in DNS", VAR_4, VAR_5);
            if (VAR_6 >= 8)
                FUNC_10(VAR_5,"UNKNOWN");
        }
        if (VAR_13!=((void*)0))
            FUNC_2(VAR_13);
    }
    if (!FUNC_8(VAR_7, VAR_5)) {
        FUNC_0(VAR_0, "Incoming connection on '%s' (%s) does not match allowed pattern for %s",
              VAR_4, VAR_5, VAR_8);
        return 0;
    }
    return 1;
}
