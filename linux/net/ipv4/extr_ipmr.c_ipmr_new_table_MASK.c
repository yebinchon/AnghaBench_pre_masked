
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct mr_table {int dummy; } ;


 int VAR_0 ;
 struct mr_table* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mr_table* FUNC_1 (struct net*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mr_table* FUNC_2 (struct net*,int,int *,int ,int ) ;

__attribute__((used)) static struct mr_table *FUNC_3(struct net *VAR_5, u32 VAR_6)
{
 struct mr_table *VAR_7;


 if (VAR_6 != VAR_1 && VAR_6 >= 1000000000)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_5, VAR_6, &VAR_3,
         VAR_2, VAR_4);
}
