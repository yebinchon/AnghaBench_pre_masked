
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;
typedef struct group* FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct group**) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 struct group* FUNC_2 (struct group**) ;

int FUNC_3(FILE *VAR_3, struct group **VAR_4) {
        struct group *VAR_5;

        FUNC_0(VAR_4);
        FUNC_0(VAR_3);

        VAR_2 = 0;
        VAR_5 = FUNC_2(VAR_3);
        if (!VAR_5 && VAR_2 != VAR_1)
                return FUNC_1(VAR_0);

        *VAR_4 = VAR_5;
        return !!VAR_5;
}
