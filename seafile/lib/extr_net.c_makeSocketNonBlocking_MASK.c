
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ evutil_socket_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static evutil_socket_t
FUNC_5 (evutil_socket_t VAR_0)
{
    if (VAR_0 >= 0)
    {
        if (FUNC_3(VAR_0))
        {
            FUNC_1 ("Couldn't make socket nonblock: %s",
                           FUNC_4(FUNC_0()));
            FUNC_2(VAR_0);
            VAR_0 = -1;
        }
    }
    return VAR_0;
}
