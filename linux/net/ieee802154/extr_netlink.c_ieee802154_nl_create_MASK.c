
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct sk_buff*,int ,int ,int *,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

struct sk_buff *FUNC_5(int VAR_5, u8 VAR_6)
{
 void *VAR_7;
 struct sk_buff *VAR_8 = FUNC_2(VAR_1, VAR_0);
 unsigned long VAR_9;

 if (!VAR_8)
  return ((void*)0);

 FUNC_3(&VAR_2, VAR_9);
 VAR_7 = FUNC_0(VAR_8, 0, VAR_3++,
     &VAR_4, VAR_5, VAR_6);
 FUNC_4(&VAR_2, VAR_9);
 if (!VAR_7) {
  FUNC_1(VAR_8);
  return ((void*)0);
 }

 return VAR_8;
}
