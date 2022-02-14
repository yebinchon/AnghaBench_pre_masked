
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 () ;
 unsigned long VAR_4 ;
 int VAR_5 ;

int FUNC_2(unsigned long VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6 < VAR_4) {
  VAR_7 = FUNC_0(FUNC_1(), &VAR_5, VAR_1,
      VAR_0);

  if (VAR_7 == 0)
   VAR_3->flags |= VAR_2;
 }
 return VAR_7;
}
