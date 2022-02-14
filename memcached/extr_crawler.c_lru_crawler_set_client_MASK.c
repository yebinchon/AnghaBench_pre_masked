
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sfd; int * buf; int * c; } ;
struct TYPE_4__ {TYPE_2__ c; } ;
typedef TYPE_1__ crawler_module_t ;
typedef TYPE_2__ crawler_client_t ;


 int * FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(crawler_module_t *VAR_0, void *VAR_1, const int VAR_2) {
    crawler_client_t *VAR_3 = &VAR_0->c;
    if (VAR_3->c != ((void*)0)) {
        return -1;
    }
    VAR_3->c = VAR_1;
    VAR_3->sfd = VAR_2;

    VAR_3->buf = FUNC_0(1024 * 128);
    if (VAR_3->buf == ((void*)0)) {
        return -2;
    }
    return 0;
}
