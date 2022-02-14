
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_address {scalar_t__* x25_addr; } ;
struct sk_buff {unsigned char* data; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (unsigned char*,struct x25_address*,struct x25_address*) ;

int FUNC_2(struct sk_buff *VAR_0,
  struct x25_address *VAR_1,
  struct x25_address *VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_0, 1)) {

  VAR_5 = 0;
  goto empty;
 }

 VAR_3 = *VAR_0->data;
 VAR_4 = 1 + ((VAR_3 >> 4) + (VAR_3 & 0x0f) + 1) / 2;

 if (!FUNC_0(VAR_0, VAR_4)) {


  VAR_5 = -1;
  goto empty;
 }

 return FUNC_1(VAR_0->data, VAR_1, VAR_2);

empty:
 *VAR_1->x25_addr = 0;
 *VAR_2->x25_addr = 0;

 return VAR_5;
}
