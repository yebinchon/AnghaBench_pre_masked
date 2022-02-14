
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* lpstrName; } ;
struct TYPE_7__ {scalar_t__ pFontEventsCP; scalar_t__ pPropertyNotifyCP; TYPE_1__ description; } ;
typedef TYPE_2__ OLEFontImpl ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(OLEFontImpl* VAR_0)
{
  FUNC_3("(%p)\n", VAR_0);

  FUNC_1(FUNC_0(), 0, VAR_0->description.lpstrName);

  if (VAR_0->pPropertyNotifyCP)
      FUNC_2(VAR_0->pPropertyNotifyCP);
  if (VAR_0->pFontEventsCP)
      FUNC_2(VAR_0->pFontEventsCP);

  FUNC_1(FUNC_0(), 0, VAR_0);
}
