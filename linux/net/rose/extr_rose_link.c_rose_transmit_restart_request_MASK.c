
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
 int VAR_7 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct rose_neigh*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct rose_neigh *VAR_8)
{
 struct sk_buff *VAR_9;
 unsigned char *VAR_10;
 int VAR_11;

 VAR_11 = VAR_0 + VAR_1 + VAR_6 + 3;

 if ((VAR_9 = FUNC_0(VAR_11, VAR_3)) == ((void*)0))
  return;

 FUNC_4(VAR_9, VAR_0 + VAR_1);

 VAR_10 = FUNC_3(VAR_9, VAR_6 + 3);

 *VAR_10++ = VAR_2;
 *VAR_10++ = VAR_5;
 *VAR_10++ = 0x00;
 *VAR_10++ = VAR_7;
 *VAR_10++ = VAR_4;
 *VAR_10++ = 0;

 if (!FUNC_2(VAR_9, VAR_8))
  FUNC_1(VAR_9);
}
