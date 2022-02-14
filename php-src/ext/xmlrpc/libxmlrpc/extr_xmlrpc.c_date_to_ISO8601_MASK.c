
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (char*,int,char*,struct tm*) ;

__attribute__((used)) static int FUNC_2 (time_t VAR_0, char *VAR_1, int VAR_2) {
   struct tm *VAR_3, VAR_4;
   VAR_3 = FUNC_0(&VAR_0, &VAR_4);
   if (!VAR_3) {
    return 0;
   }



   return FUNC_1(VAR_1, VAR_2, "%Y%m%dT%H:%M:%SZ", VAR_3);

}
