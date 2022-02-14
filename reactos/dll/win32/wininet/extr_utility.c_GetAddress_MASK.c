
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {void* sin6_port; int sin6_addr; } ;
struct sockaddr_in {void* sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int hints ;
typedef int WCHAR ;
struct TYPE_6__ {int ai_family; int ai_addrlen; int ai_addr; } ;
typedef int INTERNET_PORT ;
typedef int BOOL ;
typedef TYPE_1__ ADDRINFOW ;




 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const*,int *,TYPE_1__*,TYPE_1__**) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int const*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int,void*,char*,int ) ;
 int FUNC_7 (struct sockaddr*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

BOOL FUNC_9(const WCHAR *VAR_3, INTERNET_PORT VAR_4, struct sockaddr *VAR_5, int *VAR_6, char *VAR_7)
{
    ADDRINFOW *VAR_8, VAR_9;
    void *VAR_10 = ((void*)0);
    int VAR_11;

    FUNC_2("%s\n", FUNC_4(VAR_3));

    FUNC_8( &VAR_9, 0, sizeof(VAR_9) );



    VAR_9.ai_family = 129;

    VAR_11 = FUNC_1(VAR_3, ((void*)0), &VAR_9, &VAR_8);
    if (VAR_11 != 0)
    {
        FUNC_2("failed to get IPv4 address of %s, retrying with IPv6\n", FUNC_4(VAR_3));
        VAR_9.ai_family = 128;
        VAR_11 = FUNC_1(VAR_3, ((void*)0), &VAR_9, &VAR_8);
    }
    if (VAR_11 != 0)
    {
        FUNC_2("failed to get address of %s\n", FUNC_4(VAR_3));
        return VAR_0;
    }
    if (*VAR_6 < VAR_8->ai_addrlen)
    {
        FUNC_3("address too small\n");
        FUNC_0(VAR_8);
        return VAR_0;
    }
    *VAR_6 = VAR_8->ai_addrlen;
    FUNC_7( VAR_5, VAR_8->ai_addr, VAR_8->ai_addrlen );

    switch (VAR_8->ai_family)
    {
    case 129:
        VAR_10 = &((struct sockaddr_in *)VAR_5)->sin_addr;
        ((struct sockaddr_in *)VAR_5)->sin_port = FUNC_5(VAR_4);
        break;
    case 128:
        VAR_10 = &((struct sockaddr_in6 *)VAR_5)->sin6_addr;
        ((struct sockaddr_in6 *)VAR_5)->sin6_port = FUNC_5(VAR_4);
        break;
    }

    if(VAR_7)
        FUNC_6(VAR_8->ai_family, VAR_10, VAR_7, VAR_1);
    FUNC_0(VAR_8);
    return VAR_2;
}
