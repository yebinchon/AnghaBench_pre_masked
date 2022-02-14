
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int *,int ,struct sockaddr const*,int ,int) ;

int FUNC_2(
                int VAR_0,
                int VAR_1,
                const struct sockaddr *VAR_2, socklen_t VAR_3,
                int VAR_4) {

        FUNC_0(VAR_1 >= 0);

        return (int) FUNC_1(VAR_0, VAR_1, ((void*)0), 0, VAR_2, VAR_3, VAR_4);
}
