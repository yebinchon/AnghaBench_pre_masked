
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xdivs; int ydivs; } ;
struct TYPE_6__ {TYPE_1__ f; } ;
struct TYPE_7__ {scalar_t__ type; int buffer; int colorspace; TYPE_2__ u; } ;
typedef TYPE_3__ fz_shade ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static size_t
FUNC_2(fz_context *VAR_1, fz_shade *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return 0;
 if (VAR_2->type == VAR_0)
  return sizeof(*VAR_2) + sizeof(float) * VAR_2->u.f.xdivs * VAR_2->u.f.ydivs * FUNC_0(VAR_1, VAR_2->colorspace);
 return sizeof(*VAR_2) + FUNC_1(VAR_2->buffer);
}
