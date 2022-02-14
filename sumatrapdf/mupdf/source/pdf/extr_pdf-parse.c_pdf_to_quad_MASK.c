
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_10__ {void* y; void* x; } ;
struct TYPE_9__ {void* y; void* x; } ;
struct TYPE_8__ {void* y; void* x; } ;
struct TYPE_7__ {void* y; void* x; } ;
struct TYPE_11__ {TYPE_4__ lr; TYPE_3__ ll; TYPE_2__ ur; TYPE_1__ ul; } ;
typedef TYPE_5__ fz_quad ;
typedef int fz_context ;


 void* FUNC_0 (int *,int *,int) ;

fz_quad
FUNC_1(fz_context *VAR_0, pdf_obj *VAR_1, int VAR_2)
{
 fz_quad VAR_3;
 VAR_3.ul.x = FUNC_0(VAR_0, VAR_1, VAR_2+0);
 VAR_3.ul.y = FUNC_0(VAR_0, VAR_1, VAR_2+1);
 VAR_3.ur.x = FUNC_0(VAR_0, VAR_1, VAR_2+2);
 VAR_3.ur.y = FUNC_0(VAR_0, VAR_1, VAR_2+3);
 VAR_3.ll.x = FUNC_0(VAR_0, VAR_1, VAR_2+4);
 VAR_3.ll.y = FUNC_0(VAR_0, VAR_1, VAR_2+5);
 VAR_3.lr.x = FUNC_0(VAR_0, VAR_1, VAR_2+6);
 VAR_3.lr.y = FUNC_0(VAR_0, VAR_1, VAR_2+7);
 return VAR_3;
}
