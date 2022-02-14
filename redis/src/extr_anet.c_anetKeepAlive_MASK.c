
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_8 ;
 int FUNC_1 (int,int ,int ,int*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(char *VAR_9, int VAR_10, int VAR_11)
{
    int VAR_12 = 1;

    if (FUNC_1(VAR_10, VAR_3, VAR_4, &VAR_12, sizeof(VAR_12)) == -1)
    {
        FUNC_0(VAR_9, "setsockopt SO_KEEPALIVE: %s", FUNC_2(VAR_8));
        return VAR_0;
    }







    VAR_12 = VAR_11;
    if (FUNC_1(VAR_10, VAR_2, VAR_6, &VAR_12, sizeof(VAR_12)) < 0) {
        FUNC_0(VAR_9, "setsockopt TCP_KEEPIDLE: %s\n", FUNC_2(VAR_8));
        return VAR_0;
    }




    VAR_12 = VAR_11/3;
    if (VAR_12 == 0) VAR_12 = 1;
    if (FUNC_1(VAR_10, VAR_2, VAR_7, &VAR_12, sizeof(VAR_12)) < 0) {
        FUNC_0(VAR_9, "setsockopt TCP_KEEPINTVL: %s\n", FUNC_2(VAR_8));
        return VAR_0;
    }



    VAR_12 = 3;
    if (FUNC_1(VAR_10, VAR_2, VAR_5, &VAR_12, sizeof(VAR_12)) < 0) {
        FUNC_0(VAR_9, "setsockopt TCP_KEEPCNT: %s\n", FUNC_2(VAR_8));
        return VAR_0;
    }




    return VAR_1;
}
