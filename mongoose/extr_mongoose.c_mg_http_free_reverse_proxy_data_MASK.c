
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_reverse_proxy_data {int * linked_conn; } ;
struct TYPE_4__ {TYPE_1__* linked_conn; } ;
struct mg_http_proto_data {TYPE_2__ reverse_proxy_data; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 struct mg_http_proto_data* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mg_reverse_proxy_data *VAR_1) {
  if (VAR_1->linked_conn != ((void*)0)) {





    struct mg_http_proto_data *VAR_2 = FUNC_0(VAR_1->linked_conn);
    if (VAR_2->reverse_proxy_data.linked_conn != ((void*)0)) {
      VAR_2->reverse_proxy_data.linked_conn->flags |= VAR_0;
      VAR_2->reverse_proxy_data.linked_conn = ((void*)0);
    }
    VAR_1->linked_conn = ((void*)0);
  }
}
