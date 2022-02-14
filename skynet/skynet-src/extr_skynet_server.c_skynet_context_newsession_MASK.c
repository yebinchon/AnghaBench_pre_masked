
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int session_id; } ;



int
FUNC_0(struct skynet_context *VAR_0) {

 int VAR_1 = ++VAR_0->session_id;
 if (VAR_1 <= 0) {
  VAR_0->session_id = 1;
  return 1;
 }
 return VAR_1;
}
