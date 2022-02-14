
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_http_proto_data {int reverse_proxy_data; int endpoints; int mp_stream; int cgi; int file; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0) {
  struct mg_http_proto_data *VAR_1 = (struct mg_http_proto_data *) VAR_0;
  FUNC_2(&VAR_1->endpoints);
  FUNC_5(&VAR_1->reverse_proxy_data);
  FUNC_0(VAR_0);
}
