
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {int is_banners; scalar_t__ echo; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_2);
    if (VAR_1->echo) {
        return 0;
    }
    VAR_1->is_banners = !FUNC_1(VAR_3);
    return VAR_0;
}
