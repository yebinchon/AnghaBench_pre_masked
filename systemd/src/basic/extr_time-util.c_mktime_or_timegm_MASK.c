
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (struct tm*) ;
 int FUNC_1 (struct tm*) ;

time_t FUNC_2(struct tm *VAR_0, bool VAR_1) {
        return VAR_1 ? FUNC_1(VAR_0) : FUNC_0(VAR_0);
}
