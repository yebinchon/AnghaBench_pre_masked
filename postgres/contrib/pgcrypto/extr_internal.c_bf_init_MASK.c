
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int bf; } ;
struct int_ctx {TYPE_1__ ctx; } ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_2__ PX_Cipher ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(PX_Cipher *VAR_0, const uint8 *VAR_1, unsigned VAR_2, const uint8 *VAR_3)
{
 struct int_ctx *VAR_4 = (struct int_ctx *) VAR_0->ptr;

 FUNC_1(&VAR_4->ctx.bf, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(&VAR_4->ctx.bf, VAR_3);

 return 0;
}
