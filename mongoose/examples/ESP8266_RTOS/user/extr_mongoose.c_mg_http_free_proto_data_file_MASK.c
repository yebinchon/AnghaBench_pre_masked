
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_http_proto_data_file {int * fp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mg_http_proto_data_file*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mg_http_proto_data_file *VAR_0) {
  if (VAR_0 != ((void*)0)) {
    if (VAR_0->fp != ((void*)0)) {
      FUNC_0(VAR_0->fp);
    }
    FUNC_1(VAR_0, 0, sizeof(struct mg_http_proto_data_file));
  }
}
