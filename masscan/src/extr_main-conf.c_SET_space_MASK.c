
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {scalar_t__ echo; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_2(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    if (VAR_1->echo) {
        FUNC_1(VAR_1->echo, "\n");
        return 0;
    }
    return VAR_0;
}
