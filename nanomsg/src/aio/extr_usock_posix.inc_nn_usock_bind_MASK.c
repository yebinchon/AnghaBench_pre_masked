
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct nn_usock {int s; } ;
typedef int socklen_t ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sockaddr const*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nn_usock*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,int*,int) ;

int FUNC_5 (struct nn_usock *VAR_4, const struct sockaddr *VAR_5,
    size_t VAR_6)
{
    int VAR_7;
    int VAR_8;


    FUNC_2 (VAR_4, VAR_0);





    VAR_8 = 1;
    VAR_7 = FUNC_4 (VAR_4->s, VAR_1, VAR_2, &VAR_8, sizeof (VAR_8));
    FUNC_1 (VAR_7 == 0);


    VAR_7 = FUNC_0 (VAR_4->s, VAR_5, (socklen_t) VAR_6);
    if (FUNC_3 (VAR_7 != 0))
        return -VAR_3;

    return 0;
}
