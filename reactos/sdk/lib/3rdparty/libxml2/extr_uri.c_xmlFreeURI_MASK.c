
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_4__ {struct TYPE_4__* query_raw; struct TYPE_4__* query; struct TYPE_4__* authority; struct TYPE_4__* opaque; struct TYPE_4__* fragment; struct TYPE_4__* path; struct TYPE_4__* user; struct TYPE_4__* server; struct TYPE_4__* scheme; } ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(xmlURIPtr VAR_0) {
    if (VAR_0 == ((void*)0)) return;

    if (VAR_0->scheme != ((void*)0)) FUNC_0(VAR_0->scheme);
    if (VAR_0->server != ((void*)0)) FUNC_0(VAR_0->server);
    if (VAR_0->user != ((void*)0)) FUNC_0(VAR_0->user);
    if (VAR_0->path != ((void*)0)) FUNC_0(VAR_0->path);
    if (VAR_0->fragment != ((void*)0)) FUNC_0(VAR_0->fragment);
    if (VAR_0->opaque != ((void*)0)) FUNC_0(VAR_0->opaque);
    if (VAR_0->authority != ((void*)0)) FUNC_0(VAR_0->authority);
    if (VAR_0->query != ((void*)0)) FUNC_0(VAR_0->query);
    if (VAR_0->query_raw != ((void*)0)) FUNC_0(VAR_0->query_raw);
    FUNC_0(VAR_0);
}
