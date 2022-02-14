
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (struct device_node*,char const*,int*) ;

int FUNC_2(struct device_node *VAR_0,
        const char *VAR_1,
        unsigned int *VAR_2)
{
 u32 VAR_3;
 const __be32 *VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 int VAR_5;

 if (!VAR_4)
  return 0;
 VAR_3 /= sizeof(u32);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  if (FUNC_0(&VAR_4[VAR_5]))
   *VAR_2 |= (1 << VAR_5);

 return VAR_3;
}
