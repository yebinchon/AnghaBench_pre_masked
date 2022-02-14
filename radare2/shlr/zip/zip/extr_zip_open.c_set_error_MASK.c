
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_error {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct zip_error const*,int*,int*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(int *VAR_2, const struct zip_error *VAR_3, int VAR_4)
{
    int VAR_5;

    if (VAR_3) {
 FUNC_0(VAR_3, &VAR_4, &VAR_5);
 if (FUNC_1(VAR_4) == VAR_0)
     VAR_1 = VAR_5;
    }

    if (VAR_2)
 *VAR_2 = VAR_4;
}
