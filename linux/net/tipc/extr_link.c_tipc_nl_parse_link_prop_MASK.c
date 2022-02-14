
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int VAR_10 ;

int FUNC_2(struct nlattr *VAR_11, struct nlattr *VAR_12[])
{
 int VAR_13;

 VAR_13 = FUNC_1(VAR_12, VAR_6, VAR_11,
       VAR_10, ((void*)0));
 if (VAR_13)
  return VAR_13;

 if (VAR_12[VAR_7]) {
  u32 VAR_14;

  VAR_14 = FUNC_0(VAR_12[VAR_7]);
  if (VAR_14 > VAR_1)
   return -VAR_0;
 }

 if (VAR_12[VAR_8]) {
  u32 VAR_15;

  VAR_15 = FUNC_0(VAR_12[VAR_8]);
  if ((VAR_15 < VAR_4) || (VAR_15 > VAR_2))
   return -VAR_0;
 }

 if (VAR_12[VAR_9]) {
  u32 VAR_16;

  VAR_16 = FUNC_0(VAR_12[VAR_9]);
  if ((VAR_16 < VAR_5) || (VAR_16 > VAR_3))
   return -VAR_0;
 }

 return 0;
}
