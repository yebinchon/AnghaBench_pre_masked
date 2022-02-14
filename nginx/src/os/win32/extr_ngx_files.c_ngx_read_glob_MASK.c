
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {scalar_t__ cFileName; } ;
struct TYPE_7__ {int last; int pattern; int log; TYPE_1__ name; TYPE_5__ finddata; int dir; scalar_t__ ready; scalar_t__ no_match; } ;
typedef TYPE_2__ ngx_glob_t ;
typedef scalar_t__ ngx_err_t ;


 scalar_t__ FUNC_0 (int ,TYPE_5__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,size_t) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,scalar_t__,char*,int ) ;
 int FUNC_5 (int *,int ,int) ;
 size_t FUNC_6 (scalar_t__) ;

ngx_int_t
FUNC_7(ngx_glob_t *VAR_6, ngx_str_t *VAR_7)
{
    size_t VAR_8;
    ngx_err_t VAR_9;

    if (VAR_6->no_match) {
        return VAR_0;
    }

    if (VAR_6->ready) {
        *VAR_7 = VAR_6->name;

        VAR_6->ready = 0;
        return VAR_4;
    }

    FUNC_3(VAR_6->name.data);
    VAR_6->name.data = ((void*)0);

    if (FUNC_0(VAR_6->dir, &VAR_6->finddata) != 0) {

        VAR_8 = FUNC_6(VAR_6->finddata.cFileName);
        VAR_6->name.len = VAR_6->last + VAR_8;

        VAR_6->name.data = FUNC_1(VAR_6->name.len + 1, VAR_6->log);
        if (VAR_6->name.data == ((void*)0)) {
            return VAR_2;
        }

        FUNC_5(VAR_6->name.data, VAR_6->pattern, VAR_6->last);
        FUNC_2(VAR_6->name.data + VAR_6->last, (u_char *) VAR_6->finddata.cFileName,
                    VAR_8 + 1);

        *VAR_7 = VAR_6->name;

        return VAR_4;
    }

    VAR_9 = VAR_5;

    if (VAR_9 == VAR_1) {
        return VAR_0;
    }

    FUNC_4(VAR_3, VAR_6->log, VAR_9,
                  "FindNextFile(%s) failed", VAR_6->pattern);

    return VAR_2;
}
