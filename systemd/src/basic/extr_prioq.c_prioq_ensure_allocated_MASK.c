
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int compare_func_t ;
typedef int Prioq ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int * FUNC_1 (int ) ;

int FUNC_2(Prioq **VAR_1, compare_func_t VAR_2) {
        FUNC_0(VAR_1);

        if (*VAR_1)
                return 0;

        *VAR_1 = FUNC_1(VAR_2);
        if (!*VAR_1)
                return -VAR_0;

        return 0;
}
