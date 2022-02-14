
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_8__ {size_t min_match_len; size_t max_match_len; size_t* shift; size_t* index; } ;
typedef TYPE_2__ ngx_http_sub_tables_t ;
struct TYPE_7__ {size_t len; size_t* data; } ;
struct TYPE_9__ {TYPE_1__ match; } ;
typedef TYPE_3__ ngx_http_sub_match_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (size_t*,size_t,int) ;
 void* FUNC_2 (size_t,size_t) ;
 int FUNC_3 (TYPE_3__*,size_t,int,int ) ;

__attribute__((used)) static void
FUNC_4(ngx_http_sub_tables_t *VAR_2,
    ngx_http_sub_match_t *VAR_3, ngx_uint_t VAR_4)
{
    u_char VAR_5;
    ngx_uint_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_8 = VAR_3[0].match.len;
    VAR_9 = VAR_3[0].match.len;

    for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
        VAR_8 = FUNC_2(VAR_8, VAR_3[VAR_6].match.len);
        VAR_9 = FUNC_0(VAR_9, VAR_3[VAR_6].match.len);
    }

    VAR_2->min_match_len = VAR_8;
    VAR_2->max_match_len = VAR_9;

    VAR_0 = VAR_2->min_match_len - 1;
    FUNC_3(VAR_3, VAR_4, sizeof(ngx_http_sub_match_t), VAR_1);

    VAR_8 = FUNC_2(VAR_8, 255);
    FUNC_1(VAR_2->shift, VAR_8, 256);

    VAR_10 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {

        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
            VAR_5 = VAR_3[VAR_6].match.data[VAR_2->min_match_len - 1 - VAR_7];
            VAR_2->shift[VAR_5] = FUNC_2(VAR_2->shift[VAR_5], (u_char) VAR_7);
        }

        VAR_5 = VAR_3[VAR_6].match.data[VAR_2->min_match_len - 1];
        while (VAR_10 <= (ngx_uint_t) VAR_5) {
            VAR_2->index[VAR_10++] = (u_char) VAR_6;
        }
    }

    while (VAR_10 < 257) {
        VAR_2->index[VAR_10++] = (u_char) VAR_4;
    }
}
