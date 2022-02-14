
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; int ai_socktype; int ai_flags; } ;
typedef int hints ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (scalar_t__,int *,char*,size_t) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;

int FUNC_6(char *VAR_8, char *VAR_9, char *VAR_10, size_t VAR_11,
                       int VAR_12)
{
    struct addrinfo VAR_13, *VAR_14;
    int VAR_15;

    FUNC_5(&VAR_13,0,sizeof(VAR_13));
    if (VAR_12 & VAR_5) VAR_13.ai_flags = VAR_3;
    VAR_13.ai_family = VAR_2;
    VAR_13.ai_socktype = VAR_7;

    if ((VAR_15 = FUNC_3(VAR_9, ((void*)0), &VAR_13, &VAR_14)) != 0) {
        FUNC_0(VAR_8, "%s", FUNC_2(VAR_15));
        return VAR_4;
    }
    if (VAR_14->ai_family == VAR_0) {
        struct sockaddr_in *VAR_16 = (struct sockaddr_in *)VAR_14->ai_addr;
        FUNC_4(VAR_0, &(VAR_16->sin_addr), VAR_10, VAR_11);
    } else {
        struct sockaddr_in6 *VAR_17 = (struct sockaddr_in6 *)VAR_14->ai_addr;
        FUNC_4(VAR_1, &(VAR_17->sin6_addr), VAR_10, VAR_11);
    }

    FUNC_1(VAR_14);
    return VAR_6;
}
