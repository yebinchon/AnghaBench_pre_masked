
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int) ;
 int FUNC_2 (int,unsigned char*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int,...) ;

__attribute__((used)) static void FUNC_5(int VAR_0, int VAR_1, const char *VAR_2) {
        FUNC_4 (VAR_1, VAR_2, FUNC_3 (VAR_2) + 1);
        FUNC_4 (VAR_1, "\n", 1);
        int VAR_3 = (1024 * 64);
        unsigned char *VAR_4 = FUNC_1 (VAR_3);
        if (!VAR_4) {
                return;
        }
        while (1) {
                int VAR_5 = FUNC_2 (VAR_0, VAR_4, VAR_3);
                int VAR_6 = FUNC_3 ((const char *)VAR_4);
                VAR_5 = VAR_6;
                if (VAR_5 < 1) {
                        break;
                }
                FUNC_4 (1, VAR_4, VAR_5);
  if (VAR_5 != VAR_3) {
   break;
  }
        }
        FUNC_0 (VAR_4);
        FUNC_4 (1, "\n", 1);
}
