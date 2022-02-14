
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto_ops {int owner; int (* tmplt_destroy ) (void*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(const struct tcf_proto_ops *VAR_0,
          void *VAR_1)
{

 if (!VAR_0)
  return;

 VAR_0->tmplt_destroy(VAR_1);
 FUNC_0(VAR_0->owner);
}
