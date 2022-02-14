
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {void* sin6_port; void* sin6_family; int sin6_addr; } ;
struct sockaddr_in {void* sin_port; void* sin_family; int sin_addr; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (void*,char const*,int *) ;
 void* FUNC_1 (int ) ;

int
FUNC_2 (const char *VAR_2, uint16_t VAR_3, struct sockaddr_storage *VAR_4)
{
    struct sockaddr_in *VAR_5 = (struct sockaddr_in *) VAR_4;


    struct sockaddr_in6 *VAR_6 = (struct sockaddr_in6 *) VAR_4;


    if (FUNC_0 (VAR_0, VAR_2, &VAR_5->sin_addr) == 1 ) {
        VAR_5->sin_family = VAR_0;
        VAR_5->sin_port = FUNC_1 (VAR_3);
        return 0;
    }

    else if (FUNC_0 (VAR_1, VAR_2, &VAR_6->sin6_addr) == 1)
    {
        VAR_6->sin6_family = VAR_1;
        VAR_6->sin6_port = FUNC_1 (VAR_3);
        return 0;
    }


    return -1;
}
