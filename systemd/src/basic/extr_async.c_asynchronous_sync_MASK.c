
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 () ;

int FUNC_3(pid_t *VAR_3) {
        int VAR_4;






        VAR_4 = FUNC_1("(sd-sync)", VAR_2|VAR_1, VAR_3);
        if (VAR_4 < 0)
                return VAR_4;
        if (VAR_4 == 0) {

                (void) FUNC_2();
                FUNC_0(VAR_0);
        }

        return 0;
}
