
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int errno_t ;


 struct tm* FUNC_0 (int const*) ;
 int FUNC_1 (struct tm*,struct tm*,int) ;
 int FUNC_2 (struct tm*,int ,int) ;

errno_t FUNC_3(struct tm* VAR_0, const time_t *VAR_1)
{
    struct tm *VAR_2;

    VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 == ((void*)0)) {
        FUNC_2(VAR_0, 0, sizeof(*VAR_0));
        return -1;
    }
    FUNC_1(VAR_0, VAR_2, sizeof(*VAR_0));

    return 0;
}
