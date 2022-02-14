
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct genl_family {struct nlattr** attrbuf; int parallel_ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

struct nlattr **FUNC_2(const struct genl_family *VAR_1)
{
 if (!FUNC_0(VAR_1->parallel_ops))
  FUNC_1(&VAR_0);

 return VAR_1->attrbuf;
}
