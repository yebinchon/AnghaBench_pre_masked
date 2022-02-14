
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_3__ {int * query_raw; int * query; int * authority; int * opaque; int * fragment; int * path; int * user; int * server; int * scheme; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(xmlURIPtr VAR_0) {
    if (VAR_0 == ((void*)0)) return;

    if (VAR_0->scheme != ((void*)0)) FUNC_0(VAR_0->scheme);
    VAR_0->scheme = ((void*)0);
    if (VAR_0->server != ((void*)0)) FUNC_0(VAR_0->server);
    VAR_0->server = ((void*)0);
    if (VAR_0->user != ((void*)0)) FUNC_0(VAR_0->user);
    VAR_0->user = ((void*)0);
    if (VAR_0->path != ((void*)0)) FUNC_0(VAR_0->path);
    VAR_0->path = ((void*)0);
    if (VAR_0->fragment != ((void*)0)) FUNC_0(VAR_0->fragment);
    VAR_0->fragment = ((void*)0);
    if (VAR_0->opaque != ((void*)0)) FUNC_0(VAR_0->opaque);
    VAR_0->opaque = ((void*)0);
    if (VAR_0->authority != ((void*)0)) FUNC_0(VAR_0->authority);
    VAR_0->authority = ((void*)0);
    if (VAR_0->query != ((void*)0)) FUNC_0(VAR_0->query);
    VAR_0->query = ((void*)0);
    if (VAR_0->query_raw != ((void*)0)) FUNC_0(VAR_0->query_raw);
    VAR_0->query_raw = ((void*)0);
}
