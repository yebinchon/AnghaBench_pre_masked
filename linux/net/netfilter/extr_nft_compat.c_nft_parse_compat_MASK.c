
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* u16 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct nlattr *VAR_7, u16 *VAR_8, bool *VAR_9)
{
 struct nlattr *VAR_10[VAR_2+1];
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_10, VAR_2, VAR_7,
       VAR_6, ((void*)0));
 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_10[VAR_3] || !VAR_10[VAR_1])
  return -VAR_0;

 VAR_11 = FUNC_2(FUNC_0(VAR_10[VAR_1]));
 if (VAR_11 & ~VAR_5)
  return -VAR_0;
 if (VAR_11 & VAR_4)
  *VAR_9 = 1;

 *VAR_8 = FUNC_2(FUNC_0(VAR_10[VAR_3]));
 return 0;
}
