
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(void) {

        if (!VAR_4) {
                VAR_5 = VAR_3;
                return 0;
        }

        if (VAR_5 < 3) {
                int VAR_6;

                VAR_6 = FUNC_1("/dev/console", VAR_2|VAR_1|VAR_0);
                if (VAR_6 < 0)
                        return VAR_6;

                VAR_5 = FUNC_0(VAR_6);
        }

        return 0;
}
