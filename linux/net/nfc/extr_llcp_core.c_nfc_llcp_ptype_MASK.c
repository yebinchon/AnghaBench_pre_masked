
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; } ;



__attribute__((used)) static u8 FUNC_0(struct sk_buff *VAR_0)
{
 return ((VAR_0->data[0] & 0x03) << 2) | ((VAR_0->data[1] & 0xc0) >> 6);
}
