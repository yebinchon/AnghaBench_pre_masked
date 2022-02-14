
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_http_proto_data {scalar_t__ endpoint_handler; } ;
struct mg_http_endpoint {void* user_data; scalar_t__ handler; int auth_domain; int auth_file; } ;
struct mg_connection {scalar_t__ handler; int listener; void* user_data; } ;
struct http_message {int uri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mg_connection*,scalar_t__,void*,int,struct http_message*) ;
 struct mg_http_endpoint* FUNC_1 (int ,int *) ;
 struct mg_http_proto_data* FUNC_2 (struct mg_connection*) ;
 int FUNC_3 (struct http_message*,int ,int ,int ,int ) ;
 int FUNC_4 (struct mg_connection*,int ) ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_3, int VAR_4,
                                          struct http_message *VAR_5) {
  struct mg_http_proto_data *VAR_6 = FUNC_2(VAR_3);
  void *VAR_7 = VAR_3->user_data;

  if (VAR_4 == VAR_2



      ) {
    struct mg_http_endpoint *VAR_8 =
        FUNC_1(VAR_3->listener, &VAR_5->uri);
    if (VAR_8 != ((void*)0)) {







      VAR_6->endpoint_handler = VAR_8->handler;



    }
  }
  FUNC_0(VAR_3, VAR_6->endpoint_handler ? VAR_6->endpoint_handler : VAR_3->handler,
          VAR_7, VAR_4, VAR_5);
}
