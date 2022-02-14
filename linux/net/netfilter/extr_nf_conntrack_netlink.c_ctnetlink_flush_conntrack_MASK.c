
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct ctnetlink_filter {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct ctnetlink_filter*) ;
 int FUNC_1 (struct ctnetlink_filter*) ;
 struct ctnetlink_filter* FUNC_2 (struct nlattr const* const*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (struct ctnetlink_filter*) ;
 int FUNC_4 (struct net*,int ,struct ctnetlink_filter*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3,
         const struct nlattr * const VAR_4[],
         u32 VAR_5, int VAR_6, u8 VAR_7)
{
 struct ctnetlink_filter *VAR_8 = ((void*)0);

 if (VAR_7 || (VAR_4[VAR_0] && VAR_4[VAR_1])) {
  VAR_8 = FUNC_2(VAR_4, VAR_7);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
 }

 FUNC_4(VAR_3, VAR_2, VAR_8,
      VAR_5, VAR_6);
 FUNC_3(VAR_8);

 return 0;
}
