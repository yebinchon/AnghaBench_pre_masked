
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int RCore ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9 (RCore *VAR_0, ut64 VAR_1) {
        FUNC_6 (VAR_0);
        char *VAR_2 = FUNC_1 (VAR_0, VAR_1);
 char *VAR_3 = VAR_2;
        FUNC_3 (((void*)0), ((void*)0));
        if (VAR_3) {
                for (;;) {
                        if (FUNC_4 ()) {
                                break;
                        }
                        char *VAR_4 = FUNC_7 (VAR_2, '\n');
                        if (VAR_4) {
                                *VAR_4 = '\0';
                        }
                        if (*VAR_2) {
                                char *VAR_5 = FUNC_8 (VAR_2);
                                if (!VAR_5) {
                                        FUNC_0 (VAR_3);
                                        return;
                                }
                                FUNC_5 (VAR_0, VAR_5);
                                FUNC_0 (VAR_5);
                        }
                        if (!VAR_4) {
                                break;
                        }
                        VAR_2 = VAR_4 + 1;
                }
  FUNC_0 (VAR_3);
        }
        FUNC_2 ();
}
