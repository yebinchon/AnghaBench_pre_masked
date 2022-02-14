
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_usock {scalar_t__ state; int s; } ;
typedef int socklen_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int,int,void const*,int ) ;

int FUNC_3 (struct nn_usock *VAR_4, int VAR_5, int VAR_6,
    const void *VAR_7, size_t VAR_8)
{
    int VAR_9;


    FUNC_0 (VAR_4->state == VAR_2 ||
        VAR_4->state == VAR_1);






    VAR_9 = FUNC_2 (VAR_4->s, VAR_5, VAR_6, VAR_7, (socklen_t) VAR_8);




    if (FUNC_1 (VAR_9 != 0))
        return -VAR_3;


    return 0;
}
