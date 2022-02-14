
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* colorspace; } ;
typedef TYPE_1__ fz_context ;
struct TYPE_8__ {int ctx_refs; } ;
typedef TYPE_2__ fz_colorspace_context ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,int *) ;

fz_colorspace_context *FUNC_1(fz_context *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->colorspace, &VAR_0->colorspace->ctx_refs);
 return VAR_0->colorspace;
}
