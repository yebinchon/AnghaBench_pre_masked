
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct int_ctx {int keylen; int * iv; int keybuf; } ;
struct TYPE_3__ {scalar_t__ ptr; } ;
typedef TYPE_1__ PX_Cipher ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static int
FUNC_1(PX_Cipher *VAR_1, const uint8 *VAR_2, unsigned VAR_3, const uint8 *VAR_4)
{
 struct int_ctx *VAR_5 = (struct int_ctx *) VAR_1->ptr;

 if (VAR_3 <= 128 / 8)
  VAR_5->keylen = 128 / 8;
 else if (VAR_3 <= 192 / 8)
  VAR_5->keylen = 192 / 8;
 else if (VAR_3 <= 256 / 8)
  VAR_5->keylen = 256 / 8;
 else
  return VAR_0;

 FUNC_0(&VAR_5->keybuf, VAR_2, VAR_3);

 if (VAR_4)
  FUNC_0(VAR_5->iv, VAR_4, 128 / 8);

 return 0;
}
