
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int evutil_socket_t ;


 int FUNC_0 (int ,struct sockaddr*,int *) ;
 int FUNC_1 (int ) ;

evutil_socket_t
FUNC_2 (evutil_socket_t VAR_0, struct sockaddr_storage *VAR_1,
                  socklen_t *VAR_2, int VAR_3)
{
    evutil_socket_t VAR_4;


    VAR_4 = FUNC_0 (VAR_0, (struct sockaddr *)VAR_1, VAR_2);


    if (VAR_3)
        FUNC_1(VAR_4);

    return VAR_4;
}
