
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_pattern {scalar_t__ mode; struct simple_pattern* next; int * match; } ;
typedef int SIMPLE_PATTERN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct simple_pattern*,int*,int*,int*) ;

extern int FUNC_1(SIMPLE_PATTERN *VAR_1)
{
    int VAR_2=0, VAR_3=0, VAR_4=0;
    struct simple_pattern *VAR_5 = (struct simple_pattern*)VAR_1;
    while (VAR_5 != ((void*)0)) {
        if (VAR_5->match != ((void*)0)) {
            FUNC_0(VAR_5, &VAR_2, &VAR_3, &VAR_4);
        }
        if (VAR_5->mode != VAR_0)
            VAR_4 = 1;
        VAR_5 = VAR_5->next;
    }
    return (VAR_2 || VAR_4) && !VAR_3;
}
