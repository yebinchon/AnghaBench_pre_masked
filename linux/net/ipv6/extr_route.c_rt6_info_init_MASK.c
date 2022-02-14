
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_entry {int dummy; } ;
struct rt6_info {int rt6i_uncached; struct dst_entry dst; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dst_entry*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rt6_info *VAR_0)
{
 struct dst_entry *VAR_1 = &VAR_0->dst;

 FUNC_1(VAR_1 + 1, 0, sizeof(*VAR_0) - sizeof(*VAR_1));
 FUNC_0(&VAR_0->rt6i_uncached);
}
