
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int fmts; } ;
typedef TYPE_1__ ngx_rtmp_play_main_conf_t ;
struct TYPE_10__ {int send; int stop; int seek; int start; int init; int sfx; int pfx; int name; } ;
typedef TYPE_2__ ngx_rtmp_play_fmt_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_3__ ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_conf_t *VAR_8)
{
    ngx_rtmp_play_main_conf_t *VAR_9;
    ngx_rtmp_play_fmt_t **VAR_10, *VAR_11;

    VAR_9 = FUNC_2(VAR_8, VAR_7);

    VAR_10 = FUNC_0(&VAR_9->fmts);

    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11 = FUNC_1(VAR_8->pool, sizeof(ngx_rtmp_play_fmt_t));

    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_10 = VAR_11;

    FUNC_4(&VAR_11->name, "flv-format");

    FUNC_3(&VAR_11->pfx);
    FUNC_4(&VAR_11->sfx, ".flv");

    VAR_11->init = VAR_2;
    VAR_11->start = VAR_5;
    VAR_11->seek = VAR_3;
    VAR_11->stop = VAR_6;
    VAR_11->send = VAR_4;

    return VAR_1;
}
