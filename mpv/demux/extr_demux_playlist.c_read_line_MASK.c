
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int eof; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (char*,char,int) ;
 int FUNC_2 (TYPE_1__*,char*,int,int) ;

__attribute__((used)) static char *FUNC_3(stream_t *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_2 < 1)
        return ((void*)0);
    int VAR_4 = 0;
    while (1) {

        int VAR_5 = FUNC_2(VAR_0, &VAR_1[VAR_4], VAR_2 - VAR_4 - 1, VAR_3);
        if (VAR_5 < 0 || FUNC_1(&VAR_1[VAR_4], '\0', VAR_5)) {
            FUNC_0(VAR_0, "error reading line\n");
            VAR_0->eof = 0;
            return ((void*)0);
        }
        VAR_4 += VAR_5;
        if (VAR_5 == 0 || (VAR_4 > 0 && VAR_1[VAR_4 - 1] == '\n'))
            break;
    }
    VAR_1[VAR_4] = '\0';
    if (VAR_0->eof && VAR_4 == 0)
        return ((void*)0);
    return VAR_1;
}
