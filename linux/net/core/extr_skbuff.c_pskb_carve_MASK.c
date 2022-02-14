
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sk_buff*,int const,int,int ) ;
 int FUNC_1 (struct sk_buff*,int const,int,int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, const u32 VAR_1, gfp_t VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0);

 if (VAR_1 < VAR_3)
  return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);
}
