
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;
typedef struct passwd* FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct passwd**) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 struct passwd* FUNC_2 (struct passwd**) ;

int FUNC_3(FILE *VAR_3, struct passwd **VAR_4) {
        struct passwd *VAR_5;

        FUNC_0(VAR_4);
        FUNC_0(VAR_3);

        VAR_2 = 0;
        VAR_5 = FUNC_2(VAR_3);
        if (!VAR_5 && VAR_2 != VAR_1)
                return FUNC_1(VAR_0);

        *VAR_4 = VAR_5;
        return !!VAR_5;
}
