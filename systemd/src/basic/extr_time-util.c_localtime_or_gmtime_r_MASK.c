
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int const*,struct tm*) ;
 struct tm* FUNC_1 (int const*,struct tm*) ;

struct tm *FUNC_2(const time_t *VAR_0, struct tm *VAR_1, bool VAR_2) {
        return VAR_2 ? FUNC_0(VAR_0, VAR_1) : FUNC_1(VAR_0, VAR_1);
}
