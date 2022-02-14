
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto_ops {int flags; int owner; } ;


 scalar_t__ FUNC_0 (struct tcf_proto_ops const*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 struct tcf_proto_ops* FUNC_3 (char const*,int,int *) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_1)
{
 const struct tcf_proto_ops *VAR_2;
 bool VAR_3;

 if (FUNC_2(VAR_1) == 0)
  return 0;

 VAR_2 = FUNC_3(VAR_1, 0, ((void*)0));



 if (FUNC_0(VAR_2))
  return 0;

 VAR_3 = !!(VAR_2->flags & VAR_0);
 FUNC_1(VAR_2->owner);
 return VAR_3;
}
