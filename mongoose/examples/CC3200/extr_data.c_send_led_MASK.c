
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,int ,char*,double,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_1, double VAR_2, unsigned char VAR_3) {
  if (VAR_2 == 0) return;
  FUNC_0(VAR_1, VAR_0,
                            "{\"t\": 1, \"ts\": %lf, \"v\": %d}", VAR_2, VAR_3);
}
