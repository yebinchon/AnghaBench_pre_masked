
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int rj; } ;
struct int_ctx {scalar_t__ mode; TYPE_1__ ctx; int * iv; int is_init; } ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_2__ PX_Cipher ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,unsigned int) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 int FUNC_2 (int *,int const*,int) ;
 scalar_t__ FUNC_3 (struct int_ctx*,int ) ;

__attribute__((used)) static int
FUNC_4(PX_Cipher *VAR_3, const uint8 *VAR_4, unsigned VAR_5, uint8 *VAR_6)
{
 struct int_ctx *VAR_7 = (struct int_ctx *) VAR_3->ptr;

 if (!VAR_7->is_init)
  if (FUNC_3(VAR_7, 0))
   return VAR_1;

 if (VAR_5 == 0)
  return 0;

 if (VAR_5 & 15)
  return VAR_2;

 FUNC_2(VAR_6, VAR_4, VAR_5);

 if (VAR_7->mode == VAR_0)
 {
  FUNC_0(&VAR_7->ctx.rj, VAR_7->iv, VAR_6, VAR_5);
  FUNC_2(VAR_7->iv, VAR_4 + VAR_5 - 16, 16);
 }
 else
  FUNC_1(&VAR_7->ctx.rj, VAR_6, VAR_5);

 return 0;
}
