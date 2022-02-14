
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct php_x509_request {int * req_config; int * global_config; int * priv_key; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct php_x509_request * VAR_0)
{
 if (VAR_0->priv_key) {
  FUNC_1(VAR_0->priv_key);
  VAR_0->priv_key = ((void*)0);
 }
 if (VAR_0->global_config) {
  FUNC_0(VAR_0->global_config);
  VAR_0->global_config = ((void*)0);
 }
 if (VAR_0->req_config) {
  FUNC_0(VAR_0->req_config);
  VAR_0->req_config = ((void*)0);
 }
}
