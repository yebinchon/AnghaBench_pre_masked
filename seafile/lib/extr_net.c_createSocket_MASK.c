
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nodelay ;
typedef scalar_t__ evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ,char*,int) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;

__attribute__((used)) static evutil_socket_t
FUNC_5 (int VAR_3, int VAR_4)
{
    evutil_socket_t VAR_5;
    int VAR_6;

    VAR_5 = FUNC_4 (VAR_3, VAR_1, 0);

    if (VAR_5 < 0) {
        FUNC_0("create Socket failed %d\n", VAR_5);
    } else if (VAR_4) {
        int VAR_7 = 1;

        VAR_5 = FUNC_2( VAR_5 );

        VAR_6 = FUNC_3 (VAR_5, VAR_0, VAR_2,
                          (char *)&VAR_7, sizeof(VAR_7));
        if (VAR_6 < 0) {
            FUNC_0("setsockopt failed\n");
            FUNC_1(VAR_5);
            return -1;
        }
    }

    return VAR_5;
}
