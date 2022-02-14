
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dwState; } ;
struct TYPE_8__ {scalar_t__ iSelected; int uFocus; scalar_t__ uNumItem; } ;
typedef TYPE_1__ TAB_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_5__* FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (char*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static inline LRESULT FUNC_4 (TAB_INFO *VAR_1, INT VAR_2)
{
  INT VAR_3 = VAR_1->iSelected;

  FUNC_3("(%p %d)\n", VAR_1, VAR_2);

  if (VAR_2 >= (INT)VAR_1->uNumItem)
      return -1;

  if (VAR_3 != VAR_2) {
      if (VAR_3 != -1)
          FUNC_1(VAR_1, VAR_3)->dwState &= ~VAR_0;

      if (VAR_2 >= 0)
      {
          FUNC_1(VAR_1, VAR_2)->dwState |= VAR_0;
          VAR_1->iSelected = VAR_2;
          VAR_1->uFocus = VAR_2;
      }
      else
      {
          VAR_1->iSelected = -1;
          VAR_1->uFocus = -1;
      }

      FUNC_0(VAR_1);
      FUNC_2(VAR_1);
  }

  return VAR_3;
}
