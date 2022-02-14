
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 double VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (double) ;
 int FUNC_3 (int *,double) ;
 double FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5()
{
    json_t *VAR_1 = FUNC_2(VAR_0);
    if (VAR_1 != ((void*)0))
       FUNC_0("could construct a real from Inf");

    VAR_1 = FUNC_2(1.0);
    if (FUNC_3(VAR_1, VAR_0) != -1)
     FUNC_0("could set a real to Inf");

    if (FUNC_4(VAR_1) != 1.0)
       FUNC_0("real value changed unexpectedly");

    FUNC_1(VAR_1);



}
