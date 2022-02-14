
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,struct sockaddr_storage*,size_t*) ;
 int FUNC_2 (char const*,size_t,int,struct sockaddr_storage*,size_t*) ;

int FUNC_3 (const char *VAR_2, size_t VAR_3, int VAR_4,
    struct sockaddr_storage *VAR_5, size_t *VAR_6)
{
    int VAR_7;


    if (VAR_3 == 1 && VAR_2 [0] == '*') {
        FUNC_1 (VAR_4, VAR_5, VAR_6);
        return 0;
    }

    VAR_7 = FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_7 == -VAR_0)
        return -VAR_1;
    FUNC_0 (VAR_7 == 0, -VAR_7);
    return 0;
}
