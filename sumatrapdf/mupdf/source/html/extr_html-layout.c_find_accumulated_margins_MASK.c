
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* up; scalar_t__* border; scalar_t__* padding; scalar_t__* margin; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_4, fz_html_box *VAR_5, float *VAR_6, float *VAR_7)
{
 while (VAR_5)
 {
  if (FUNC_0(VAR_5)) {

   *VAR_7 += VAR_5->margin[VAR_3] + VAR_5->padding[VAR_3] + VAR_5->border[VAR_3];
   *VAR_7 += VAR_5->margin[VAR_0] + VAR_5->padding[VAR_0] + VAR_5->border[VAR_0];
   *VAR_6 += VAR_5->margin[VAR_1] + VAR_5->padding[VAR_1] + VAR_5->border[VAR_1];
   *VAR_6 += VAR_5->margin[VAR_2] + VAR_5->padding[VAR_2] + VAR_5->border[VAR_2];
  }
  VAR_5 = VAR_5->up;
 }
}
