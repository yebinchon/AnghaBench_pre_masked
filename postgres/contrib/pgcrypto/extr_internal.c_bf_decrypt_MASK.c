
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int bf; } ;
struct int_ctx {int mode; TYPE_1__ ctx; } ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_2__ PX_Cipher ;
typedef int BlowfishContext ;




 int VAR_0 ;
 int FUNC_0 (int *,unsigned int,int *) ;
 int FUNC_1 (int *,unsigned int,int *) ;
 int FUNC_2 (int *,int const*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(PX_Cipher *VAR_1, const uint8 *VAR_2, unsigned VAR_3, uint8 *VAR_4)
{
 struct int_ctx *VAR_5 = (struct int_ctx *) VAR_1->ptr;
 BlowfishContext *VAR_6 = &VAR_5->ctx.bf;

 if (VAR_3 == 0)
  return 0;

 if (VAR_3 & 7)
  return VAR_0;

 FUNC_2(VAR_4, VAR_2, VAR_3);
 switch (VAR_5->mode)
 {
  case 128:
   FUNC_1(VAR_4, VAR_3, VAR_6);
   break;
  case 129:
   FUNC_0(VAR_4, VAR_3, VAR_6);
   break;
 }
 return 0;
}
