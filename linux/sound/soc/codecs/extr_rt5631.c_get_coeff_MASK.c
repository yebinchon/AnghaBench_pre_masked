
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mclk; int rate; int bclk; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_1[VAR_5].mclk == VAR_2 && VAR_1[VAR_5].rate == VAR_3 &&
   (VAR_1[VAR_5].bclk / VAR_1[VAR_5].rate) == VAR_4)
   return VAR_5;
 }
 return -VAR_0;
}
