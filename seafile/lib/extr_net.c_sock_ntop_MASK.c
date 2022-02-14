
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {char* sun_path; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;
typedef int str ;
typedef int socklen_t ;





 int * FUNC_0 (int const,int *,char*,int) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*,char*) ;

char *
FUNC_3(const struct sockaddr *VAR_0, socklen_t VAR_1)
{
    static char VAR_2[128];

    switch (VAR_0->sa_family) {
    case 130: {
        struct sockaddr_in *VAR_3 = (struct sockaddr_in *) VAR_0;

        if (FUNC_0(130, &VAR_3->sin_addr, VAR_2, sizeof(VAR_2)) == ((void*)0))
            return(((void*)0));
        return(VAR_2);
    }
    case 128: {
        struct sockaddr_un *VAR_4 = (struct sockaddr_un *) VAR_0;



        if (VAR_4->sun_path[0] == 0)
            FUNC_2(VAR_2, "(no pathname bound)");
        else
            FUNC_1(VAR_2, sizeof(VAR_2), "%s", VAR_4->sun_path);
        return(VAR_2);
    }



    default:
        FUNC_1(VAR_2, sizeof(VAR_2), "sock_ntop: unknown AF_xxx: %d, len %d",
                 VAR_0->sa_family, VAR_1);
        return(VAR_2);
    }
    return (((void*)0));
}
