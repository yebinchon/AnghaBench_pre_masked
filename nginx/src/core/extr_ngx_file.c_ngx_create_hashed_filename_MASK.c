
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_4__ {int len; } ;
struct TYPE_5__ {size_t len; size_t* level; TYPE_1__ name; } ;
typedef TYPE_2__ ngx_path_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;

void
FUNC_1(ngx_path_t *VAR_1, u_char *VAR_2, size_t VAR_3)
{
    size_t VAR_4, VAR_5;
    ngx_uint_t VAR_6;

    VAR_4 = VAR_1->name.len + 1;

    VAR_2[VAR_1->name.len + VAR_1->len] = '/';

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        VAR_5 = VAR_1->level[VAR_6];

        if (VAR_5 == 0) {
            break;
        }

        VAR_3 -= VAR_5;
        VAR_2[VAR_4 - 1] = '/';
        FUNC_0(&VAR_2[VAR_4], &VAR_2[VAR_3], VAR_5);
        VAR_4 += VAR_5 + 1;
    }
}
