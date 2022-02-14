
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ modified_props; scalar_t__ port; int has_port; scalar_t__ username_len; int * username; scalar_t__ scheme_len; int * scheme; scalar_t__ query_len; int * query; scalar_t__ path_len; int * path; scalar_t__ password_len; int * password; scalar_t__ host_len; int * host; scalar_t__ fragment_len; int * fragment; TYPE_1__* uri; } ;
typedef TYPE_2__ UriBuilder ;
struct TYPE_4__ {int IUri_iface; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(UriBuilder *VAR_1) {
    if(VAR_1->uri)
        FUNC_0(&VAR_1->uri->IUri_iface);
    VAR_1->uri = ((void*)0);

    FUNC_1(VAR_1->fragment);
    VAR_1->fragment = ((void*)0);
    VAR_1->fragment_len = 0;

    FUNC_1(VAR_1->host);
    VAR_1->host = ((void*)0);
    VAR_1->host_len = 0;

    FUNC_1(VAR_1->password);
    VAR_1->password = ((void*)0);
    VAR_1->password_len = 0;

    FUNC_1(VAR_1->path);
    VAR_1->path = ((void*)0);
    VAR_1->path_len = 0;

    FUNC_1(VAR_1->query);
    VAR_1->query = ((void*)0);
    VAR_1->query_len = 0;

    FUNC_1(VAR_1->scheme);
    VAR_1->scheme = ((void*)0);
    VAR_1->scheme_len = 0;

    FUNC_1(VAR_1->username);
    VAR_1->username = ((void*)0);
    VAR_1->username_len = 0;

    VAR_1->has_port = VAR_0;
    VAR_1->port = 0;
    VAR_1->modified_props = 0;
}
