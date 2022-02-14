
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_usock {int s; } ;
typedef int socklen_t ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int*,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (struct nn_usock *VAR_3)
{
    int VAR_4;
    int VAR_5;



    socklen_t VAR_6;


    VAR_5 = 0;
    VAR_6 = sizeof (VAR_5);
    VAR_4 = FUNC_1 (VAR_3->s, VAR_0, VAR_1, &VAR_5, &VAR_6);


    if (VAR_4 == -1)
        return VAR_2;
    FUNC_0 (VAR_4 == 0);
    FUNC_2 (VAR_6 == sizeof (VAR_5));
    return VAR_5;
}
