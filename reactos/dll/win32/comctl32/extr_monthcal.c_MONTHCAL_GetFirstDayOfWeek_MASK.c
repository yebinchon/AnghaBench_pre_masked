
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int firstDay; int firstDaySet; } ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int LRESULT ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline LRESULT
FUNC_1(const MONTHCAL_INFO *VAR_0)
{
  int VAR_1;


  VAR_1 = (VAR_0->firstDay >= 0) ? (VAR_0->firstDay+6)%7 : VAR_0->firstDay;

  return FUNC_0(VAR_1, VAR_0->firstDaySet);
}
