
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int * next; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;

struct sk_buff *FUNC_3(u32 VAR_1, gfp_t VAR_2)
{
 struct sk_buff *VAR_3;
 unsigned int VAR_4 = (VAR_0 + VAR_1 + 3) & ~3u;

 VAR_3 = FUNC_0(VAR_4, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_1);
  VAR_3->next = ((void*)0);
 }
 return VAR_3;
}
