
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int j ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,int ,void*,int*) ;

int FUNC_2(int VAR_2)
{
    int VAR_3 = 0, VAR_4;
    socklen_t VAR_5 = sizeof(VAR_3);







    VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_1, (void *)&VAR_3, &VAR_5);
    if (VAR_4 < 0)
        return FUNC_0();
    else
        return VAR_3;
}
