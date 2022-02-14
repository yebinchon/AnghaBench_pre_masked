
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double nr_loops; scalar_t__ show_details; } ;
struct TYPE_4__ {TYPE_1__ p; } ;


 double VAR_0 ;
 int FUNC_0 (double,double*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,double,double) ;

__attribute__((used)) static void FUNC_3(double VAR_3, int VAR_4, double *VAR_5)
{
 FUNC_2("\r #  %5.1f%%  [%.1f mins]",
  (double)(VAR_4+1)/VAR_1->p.nr_loops*100.0, VAR_3 / VAR_0 / 60.0);

 FUNC_0(VAR_3, VAR_5);

 if (VAR_1->p.show_details >= 0)
  FUNC_1(VAR_2);
}
