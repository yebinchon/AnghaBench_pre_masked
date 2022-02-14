
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spwd {int dummy; } ;
typedef struct spwd const FILE ;


 int VAR_0 ;
 int FUNC_0 (struct spwd const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct spwd const*,struct spwd const*) ;

int FUNC_3(const struct spwd *VAR_2, FILE *VAR_3) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_1 = 0;
        if (FUNC_2(VAR_2, VAR_3) != 0)
                return FUNC_1(VAR_0);

        return 0;
}
