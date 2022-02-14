
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rose_neigh {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct rose_neigh*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct rose_neigh *VAR_7)
{
 struct sk_buff *VAR_8;
 unsigned char *VAR_9;
 int VAR_10;

 VAR_10 = VAR_0 + VAR_1 + VAR_5 + 1;

 if ((VAR_8 = FUNC_0(VAR_10, VAR_3)) == ((void*)0))
  return;

 FUNC_4(VAR_8, VAR_0 + VAR_1);

 VAR_9 = FUNC_3(VAR_8, VAR_5 + 1);

 *VAR_9++ = VAR_2;
 *VAR_9++ = VAR_4;
 *VAR_9++ = 0x00;
 *VAR_9++ = VAR_6;

 if (!FUNC_2(VAR_8, VAR_7))
  FUNC_1(VAR_8);
}
