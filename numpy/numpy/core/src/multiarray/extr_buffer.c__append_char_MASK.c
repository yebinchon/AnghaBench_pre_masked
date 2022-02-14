
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int allocated; char* s; } ;
typedef TYPE_1__ _tmp_string_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static int
FUNC_2(_tmp_string_t *VAR_2, char VAR_3)
{
    if (VAR_2->pos >= VAR_2->allocated) {
        char *VAR_4;
        size_t VAR_5 = (VAR_2->allocated == 0) ? VAR_0 : (2 * VAR_2->allocated);

        VAR_4 = FUNC_1(VAR_2->s, VAR_5);
        if (VAR_4 == ((void*)0)) {
            FUNC_0(VAR_1, "memory allocation failed");
            return -1;
        }
        VAR_2->s = VAR_4;
        VAR_2->allocated = VAR_5;
    }
    VAR_2->s[VAR_2->pos] = VAR_3;
    ++VAR_2->pos;
    return 0;
}
