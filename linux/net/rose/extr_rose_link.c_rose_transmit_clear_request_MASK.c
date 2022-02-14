
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
 unsigned int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct rose_neigh*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

void FUNC_5(struct rose_neigh *VAR_7, unsigned int VAR_8, unsigned char VAR_9, unsigned char VAR_10)
{
 struct sk_buff *VAR_11;
 unsigned char *VAR_12;
 int VAR_13;

 VAR_13 = VAR_0 + VAR_1 + VAR_6 + 3;

 if ((VAR_11 = FUNC_0(VAR_13, VAR_3)) == ((void*)0))
  return;

 FUNC_4(VAR_11, VAR_0 + VAR_1);

 VAR_12 = FUNC_3(VAR_11, VAR_6 + 3);

 *VAR_12++ = VAR_2;
 *VAR_12++ = ((VAR_8 >> 8) & 0x0F) | VAR_5;
 *VAR_12++ = ((VAR_8 >> 0) & 0xFF);
 *VAR_12++ = VAR_4;
 *VAR_12++ = VAR_9;
 *VAR_12++ = VAR_10;

 if (!FUNC_2(VAR_11, VAR_7))
  FUNC_1(VAR_11);
}
