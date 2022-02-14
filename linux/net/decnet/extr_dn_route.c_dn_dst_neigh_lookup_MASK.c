
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct neighbour {int dummy; } ;
struct dst_entry {int dev; } ;


 struct neighbour* FUNC_0 (int *,void const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct neighbour *FUNC_1(const struct dst_entry *VAR_1,
          struct sk_buff *VAR_2,
          const void *VAR_3)
{
 return FUNC_0(&VAR_0, VAR_3, VAR_1->dev);
}
