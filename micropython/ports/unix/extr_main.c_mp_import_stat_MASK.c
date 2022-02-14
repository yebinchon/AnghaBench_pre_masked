
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

uint FUNC_3(const char *VAR_3) {
    struct stat VAR_4;
    if (FUNC_2(VAR_3, &VAR_4) == 0) {
        if (FUNC_0(VAR_4.st_mode)) {
            return VAR_0;
        } else if (FUNC_1(VAR_4.st_mode)) {
            return VAR_1;
        }
    }
    return VAR_2;
}
