
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwan_request {TYPE_1__* helper; } ;
typedef int name ;
struct TYPE_2__ {size_t n_header_start; char** header_start; } ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 int FUNC_2 (char const*,char*,size_t) ;

const char *FUNC_3(struct lwan_request *VAR_1,
                                    const char *VAR_2)
{
    char VAR_3[64];
    int VAR_4;

    VAR_4 = FUNC_1(VAR_3, sizeof(VAR_3), "%s: ", VAR_2);
    if (FUNC_0(VAR_4 < 0 || VAR_4 >= (int)sizeof(VAR_3)))
        return ((void*)0);

    for (size_t VAR_5 = 0; VAR_5 < VAR_1->helper->n_header_start; VAR_5++) {
        const char *VAR_6 = VAR_1->helper->header_start[VAR_5];
        char *VAR_7 = VAR_1->helper->header_start[VAR_5 + 1] - VAR_0;

        if (FUNC_0(VAR_7 - VAR_6 < VAR_4))
            continue;

        if (!FUNC_2(VAR_6, VAR_3, (size_t)VAR_4)) {
            *VAR_7 = '\0';
            return VAR_6 + VAR_4;
        }
    }

    return ((void*)0);
}
