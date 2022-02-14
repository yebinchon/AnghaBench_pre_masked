
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_4__ {int transparent; int * alpha; int * blue; int * green; int * red; int trueColor; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

int FUNC_2 (gdImagePtr VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (!VAR_1->trueColor) {
  return FUNC_1(VAR_1->red[VAR_4], VAR_1->green[VAR_4], VAR_1->blue[VAR_4], (VAR_1->transparent == VAR_4) ? VAR_0 : VAR_1->alpha[VAR_4]);
 } else {
  return VAR_4;
 }
}
