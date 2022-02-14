
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_int_t ;
struct TYPE_7__ {scalar_t__ cFileName; } ;
struct TYPE_5__ {size_t len; int * data; } ;
struct TYPE_6__ {scalar_t__ dir; char* pattern; int no_match; int last; int ready; TYPE_4__ finddata; TYPE_1__ name; int log; scalar_t__ test; } ;
typedef TYPE_2__ ngx_glob_t ;
typedef scalar_t__ ngx_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,char*,size_t) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,char*,size_t) ;
 size_t FUNC_4 (scalar_t__) ;

ngx_int_t
FUNC_5(ngx_glob_t *VAR_6)
{
    u_char *VAR_7;
    size_t VAR_8;
    ngx_err_t VAR_9;

    VAR_6->dir = FUNC_0((const char *) VAR_6->pattern, &VAR_6->finddata);

    if (VAR_6->dir == VAR_2) {

        VAR_9 = VAR_5;

        if ((VAR_9 == VAR_0 || VAR_9 == VAR_1)
             && VAR_6->test)
        {
            VAR_6->no_match = 1;
            return VAR_4;
        }

        return VAR_3;
    }

    for (VAR_7 = VAR_6->pattern; *VAR_7; VAR_7++) {
        if (*VAR_7 == '/') {
            VAR_6->last = VAR_7 + 1 - VAR_6->pattern;
        }
    }

    VAR_8 = FUNC_4(VAR_6->finddata.cFileName);
    VAR_6->name.len = VAR_6->last + VAR_8;

    VAR_6->name.data = FUNC_1(VAR_6->name.len + 1, VAR_6->log);
    if (VAR_6->name.data == ((void*)0)) {
        return VAR_3;
    }

    FUNC_3(VAR_6->name.data, VAR_6->pattern, VAR_6->last);
    FUNC_2(VAR_6->name.data + VAR_6->last, (u_char *) VAR_6->finddata.cFileName,
                VAR_8 + 1);

    VAR_6->ready = 1;

    return VAR_4;
}
