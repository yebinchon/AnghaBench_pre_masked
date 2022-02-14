
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int log; } ;
struct TYPE_5__ {int error; TYPE_1__ file; int background; scalar_t__ updating; scalar_t__ updated; } ;
typedef TYPE_2__ ngx_http_cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
    ngx_http_cache_t *VAR_3 = VAR_2;

    if (VAR_3->updated) {
        return;
    }

    FUNC_1(VAR_1, VAR_3->file.log, 0,
                   "http file cache cleanup");

    if (VAR_3->updating && !VAR_3->background) {
        FUNC_2(VAR_0, VAR_3->file.log, 0,
                      "stalled cache updating, error:%ui", VAR_3->error);
    }

    FUNC_0(VAR_3, ((void*)0));
}
