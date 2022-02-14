
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_device ;
typedef int fz_context ;
struct TYPE_2__ {scalar_t__ top; } ;
typedef TYPE_1__ fz_bbox_device ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_device *VAR_1)
{
 fz_bbox_device *VAR_2 = (fz_bbox_device*)VAR_1;
 if (VAR_2->top > 0)
  VAR_2->top--;
 else
  FUNC_0(VAR_0, "unexpected pop clip");
}
