
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sw_flow_match {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sw_flow_match*,struct nlattr const**,int,int) ;
 int FUNC_1 (struct nlattr const*,struct nlattr const**,int*,int) ;
 int FUNC_2 (struct nlattr const*,struct nlattr const**,int*,int) ;
 int FUNC_3 (struct sw_flow_match*,int,int,struct nlattr const**,int) ;
 int FUNC_4 (struct sw_flow_match*,int,int,struct nlattr const**,int) ;

__attribute__((used)) static int FUNC_5(struct sw_flow_match *VAR_3,
         u64 *VAR_4, bool VAR_5,
         const struct nlattr **VAR_6, bool VAR_7,
         bool VAR_8)
{
 int VAR_9;
 const struct nlattr *VAR_10;

 if (!VAR_7)
  VAR_9 = FUNC_3(VAR_3, *VAR_4, VAR_5,
       VAR_6, VAR_8);
 else
  VAR_9 = FUNC_4(VAR_3, *VAR_4, VAR_5,
            VAR_6, VAR_8);
 if (VAR_9 <= 0)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_6, VAR_7, VAR_5);
 if (VAR_9)
  return VAR_9;

 *VAR_4 &= ~(1 << VAR_0);
 *VAR_4 &= ~(1 << VAR_2);
 *VAR_4 &= ~(1 << VAR_1);

 VAR_10 = VAR_6[VAR_0];

 if (!VAR_7)
  VAR_9 = FUNC_2(VAR_10, VAR_6, VAR_4, VAR_8);
 else
  VAR_9 = FUNC_1(VAR_10, VAR_6, VAR_4, VAR_8);

 return VAR_9;
}
