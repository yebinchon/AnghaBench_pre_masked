
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int ref; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct skynet_context*) ;

struct skynet_context *
FUNC_2(struct skynet_context *VAR_0) {
 if (FUNC_0(&VAR_0->ref) == 0) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }
 return VAR_0;
}
