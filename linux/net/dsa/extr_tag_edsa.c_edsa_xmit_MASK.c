
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ protocol; int* data; } ;
struct net_device {int dummy; } ;
struct dsa_port {int index; TYPE_1__* ds; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct dsa_port *VAR_7 = FUNC_0(VAR_6);
 u8 *VAR_8;







 if (VAR_5->protocol == FUNC_1(VAR_3)) {
  if (FUNC_3(VAR_5, VAR_0) < 0)
   return ((void*)0);
  FUNC_4(VAR_5, VAR_0);

  FUNC_2(VAR_5->data, VAR_5->data + VAR_0, 2 * VAR_2);




  VAR_8 = VAR_5->data + 2 * VAR_2;
  VAR_8[0] = (VAR_4 >> 8) & 0xff;
  VAR_8[1] = VAR_4 & 0xff;
  VAR_8[2] = 0x00;
  VAR_8[3] = 0x00;
  VAR_8[4] = 0x60 | VAR_7->ds->index;
  VAR_8[5] = VAR_7->index << 3;




  if (VAR_8[6] & 0x10) {
   VAR_8[5] |= 0x01;
   VAR_8[6] &= ~0x10;
  }
 } else {
  if (FUNC_3(VAR_5, VAR_1) < 0)
   return ((void*)0);
  FUNC_4(VAR_5, VAR_1);

  FUNC_2(VAR_5->data, VAR_5->data + VAR_1, 2 * VAR_2);




  VAR_8 = VAR_5->data + 2 * VAR_2;
  VAR_8[0] = (VAR_4 >> 8) & 0xff;
  VAR_8[1] = VAR_4 & 0xff;
  VAR_8[2] = 0x00;
  VAR_8[3] = 0x00;
  VAR_8[4] = 0x40 | VAR_7->ds->index;
  VAR_8[5] = VAR_7->index << 3;
  VAR_8[6] = 0x00;
  VAR_8[7] = 0x00;
 }

 return VAR_5;
}
