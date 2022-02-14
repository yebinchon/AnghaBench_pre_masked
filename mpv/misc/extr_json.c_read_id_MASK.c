
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* string; } ;
struct mpv_node {TYPE_1__ u; int format; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char) ;
 char* FUNC_2 (void*,char*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct mpv_node *VAR_2, char **VAR_3)
{
    char *VAR_4 = *VAR_3;
    if (!FUNC_1(**VAR_3) && **VAR_3 != '_')
        return -1;
    while (FUNC_0(**VAR_3) || **VAR_3 == '_')
        *VAR_3 += 1;
    if (**VAR_3 == ' ') {
        **VAR_3 = '\0';
        *VAR_3 += 1;
    } else {
        VAR_4 = FUNC_2(VAR_1, VAR_4, *VAR_3 - VAR_4);
    }
    VAR_2->format = VAR_0;
    VAR_2->u.string = VAR_4;
    return 0;
}
