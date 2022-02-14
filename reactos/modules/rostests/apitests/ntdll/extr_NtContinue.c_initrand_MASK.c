
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void)
{
    unsigned int VAR_4;
    unsigned int VAR_5;
    time_t VAR_6;

    VAR_4 = VAR_1;
    for(VAR_5 = 0; VAR_4 != 0; VAR_4 >>= 1, ++ VAR_5);
    VAR_3 = VAR_5 / VAR_0;

    FUNC_0((unsigned)(FUNC_1(&VAR_6) & VAR_2));
    return 1;
}
