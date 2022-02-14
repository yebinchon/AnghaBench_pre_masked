
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_rect ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_2__ {int top; int * stack; int * result; int ignore; } ;
typedef TYPE_1__ fz_bbox_device ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, fz_device *VAR_2, fz_rect VAR_3, int VAR_4)
{
 fz_bbox_device *VAR_5 = (fz_bbox_device*)VAR_2;

 if (0 < VAR_5->top && VAR_5->top <= VAR_0)
 {
  VAR_3 = FUNC_0(VAR_3, VAR_5->stack[VAR_5->top-1]);
 }
 if (!VAR_4 && VAR_5->top <= VAR_0 && !VAR_5->ignore)
 {
  *VAR_5->result = FUNC_1(*VAR_5->result, VAR_3);
 }
 if (VAR_4 && ++VAR_5->top <= VAR_0)
 {
  VAR_5->stack[VAR_5->top-1] = VAR_3;
 }
}
