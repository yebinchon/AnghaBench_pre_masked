
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_irect ;
struct TYPE_4__ {TYPE_1__* layout; } ;
struct TYPE_3__ {int pady; int padx; int anchor; int fill; int side; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int,int,int ,int ,int ,int ,int ) ;

fz_irect FUNC_1(int VAR_1, int VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, VAR_0.layout->side, VAR_0.layout->fill, VAR_0.layout->anchor, VAR_0.layout->padx, VAR_0.layout->pady);
}
