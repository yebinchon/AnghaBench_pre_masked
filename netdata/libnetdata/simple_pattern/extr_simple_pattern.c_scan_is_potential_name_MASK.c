
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_pattern {char* match; scalar_t__ mode; struct simple_pattern* child; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(struct simple_pattern *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
    while (VAR_1) {
        if (VAR_1->match) {
            if(VAR_1->mode == VAR_0 && !FUNC_0("localhost", VAR_1->match)) {
                VAR_1 = VAR_1->child;
                continue;
            }
            char const *VAR_5 = VAR_1->match;
            while (*VAR_5 != 0) {
                if ((*VAR_5 >= 'a' && *VAR_5 <= 'z') || (*VAR_5 >= 'A' && *VAR_5 <= 'Z'))
                    *VAR_2 = 1;
                if (*VAR_5 == ':')
                    *VAR_3 = 1;
                VAR_5++;
            }
            if (VAR_1->mode != VAR_0)
                *VAR_4 = 1;
            VAR_1 = VAR_1->child;
        }
    }
}
