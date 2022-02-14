
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* colorspace; } ;
typedef TYPE_1__ fz_context ;
struct TYPE_10__ {int lab; int cmyk; int bgr; int rgb; int gray; int ctx_refs; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;

void FUNC_4(fz_context *VAR_0)
{
 if (FUNC_2(VAR_0, VAR_0->colorspace, &VAR_0->colorspace->ctx_refs))
 {
  FUNC_0(VAR_0, VAR_0->colorspace->gray);
  FUNC_0(VAR_0, VAR_0->colorspace->rgb);
  FUNC_0(VAR_0, VAR_0->colorspace->bgr);
  FUNC_0(VAR_0, VAR_0->colorspace->cmyk);
  FUNC_0(VAR_0, VAR_0->colorspace->lab);



  FUNC_3(VAR_0, VAR_0->colorspace);
  VAR_0->colorspace = ((void*)0);
 }
}
