
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwStyle; int monthdayState; } ;
typedef int MONTHDAYSTATE ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int LRESULT ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,int ,int ) ;
 int FUNC_1 (char*,TYPE_1__ const*,int,int *) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static LRESULT
FUNC_3(const MONTHCAL_INFO *VAR_2, INT VAR_3, MONTHDAYSTATE *VAR_4)
{
  FUNC_1("%p %d %p\n", VAR_2, VAR_3, VAR_4);

  if (!(VAR_2->dwStyle & VAR_1)) return 0;
  if (VAR_3 != FUNC_0(VAR_2, VAR_0, 0)) return 0;

  FUNC_2(VAR_2->monthdayState, VAR_4, VAR_3*sizeof(MONTHDAYSTATE));

  return 1;
}
