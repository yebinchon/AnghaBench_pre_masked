
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct nlattr*,struct nlattr**) ;

int FUNC_5(struct net *VAR_7, struct nlattr *VAR_8[])
{
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 struct nlattr *VAR_13[VAR_5 + 1];

 if (!VAR_8[VAR_2])
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_8[VAR_2], VAR_13);
 if (VAR_9)
  return VAR_9;

 if (!VAR_13[VAR_6] &&
     !VAR_13[VAR_3] &&
     !VAR_13[VAR_4]) {
  return -VAR_1;
 }

 if (VAR_13[VAR_3]) {
  VAR_11 = FUNC_0(VAR_13[VAR_3]);
  VAR_9 = FUNC_1(VAR_7, VAR_11);
 }

 if (!VAR_9 && VAR_13[VAR_4]) {
  VAR_12 = FUNC_0(VAR_13[VAR_4]);
  VAR_9 = FUNC_2(VAR_7, VAR_12);
 }

 if (!VAR_9 && VAR_13[VAR_6]) {
  VAR_10 = FUNC_0(VAR_13[VAR_6]);
  VAR_9 = FUNC_3(VAR_7, VAR_10);
 }

 return VAR_9;
}
