
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int evutil_socket_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;

evutil_socket_t
FUNC_3 (const struct sockaddr *VAR_4, int VAR_5)
{
    evutil_socket_t VAR_6;
    int VAR_7;

    if( (VAR_6 = FUNC_1(VAR_4->sa_family, VAR_5)) < 0 )
        return -1;


    if (VAR_4->sa_family == VAR_0)
        VAR_7 = sizeof (struct sockaddr_in);
    else
        VAR_7 = sizeof (struct sockaddr_in6);
    if( (FUNC_0(VAR_6, VAR_4, VAR_7) < 0)



        && (VAR_3 != VAR_1) )
    {
        FUNC_2(VAR_6);
        VAR_6 = -1;
    }

    return VAR_6;
}
