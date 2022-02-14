
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct xdr_netobj {scalar_t__ len; scalar_t__ data; } ;
struct krb5_ctx {int flags; TYPE_1__* gk5e; } ;
struct TYPE_2__ {scalar_t__ cksumlength; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void *
FUNC_0(struct krb5_ctx *VAR_4, struct xdr_netobj *VAR_5)
{
 u16 *VAR_6;
 void *VAR_7;
 u8 *VAR_8, VAR_9 = 0x00;

 if ((VAR_4->flags & VAR_3) == 0)
  VAR_9 |= 0x01;
 if (VAR_4->flags & VAR_2)
  VAR_9 |= 0x04;



 VAR_7 = VAR_6 = (u16 *)VAR_5->data;

 *VAR_6++ = VAR_1;
 VAR_8 = (u8 *)VAR_6;
 *VAR_8++ = VAR_9;
 *VAR_8++ = 0xff;
 VAR_6 = (u16 *)VAR_8;
 *VAR_6++ = 0xffff;
 *VAR_6 = 0xffff;

 VAR_5->len = VAR_0 + VAR_4->gk5e->cksumlength;
 return VAR_7;
}
