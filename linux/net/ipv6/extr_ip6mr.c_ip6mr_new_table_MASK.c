
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct mr_table {int dummy; } ;


 struct mr_table* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mr_table* FUNC_1 (struct net*,int ,int *,int ,int ) ;

__attribute__((used)) static struct mr_table *FUNC_2(struct net *VAR_3, u32 VAR_4)
{
 struct mr_table *VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_3, VAR_4, &VAR_0,
         VAR_2, VAR_1);
}
