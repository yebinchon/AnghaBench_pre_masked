
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int startup_cost; int total_cost; double rows; TYPE_1__* pathtarget; } ;
struct TYPE_6__ {int width; } ;
typedef TYPE_2__ Path ;
typedef int Cost ;


 int FUNC_0 (int ,int ) ;
 double VAR_0 ;

void
FUNC_1(Path *VAR_1, Path *VAR_2, Path *VAR_3)
{
 Cost VAR_4;
 Cost VAR_5;
 double VAR_6;


 VAR_4 = VAR_2->startup_cost;
 VAR_5 = VAR_2->total_cost;
 VAR_6 = VAR_2->rows;







 VAR_5 += 10 * VAR_3->total_cost;
 VAR_6 += 10 * VAR_3->rows;






 VAR_5 += VAR_0 * VAR_6;

 VAR_1->startup_cost = VAR_4;
 VAR_1->total_cost = VAR_5;
 VAR_1->rows = VAR_6;
 VAR_1->pathtarget->width = FUNC_0(VAR_2->pathtarget->width,
         VAR_3->pathtarget->width);
}
