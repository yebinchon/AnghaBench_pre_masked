
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int firstDay; int hwndSelf; void* firstDaySet; } ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int LRESULT ;
typedef int INT ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int *,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int,...) ;
 void* VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static LRESULT
FUNC_9(MONTHCAL_INFO *VAR_4, INT VAR_5)
{
  LRESULT VAR_6 = FUNC_4(VAR_4);
  int VAR_7;

  FUNC_5("%d\n", VAR_5);

  if(VAR_5 == -1)
  {
    WCHAR VAR_8[80];

    FUNC_2(VAR_2, VAR_1, VAR_8, FUNC_0(VAR_8));
    FUNC_5("%s %d\n", FUNC_7(VAR_8), FUNC_8(VAR_8));

    VAR_7 = FUNC_6(VAR_8);

    VAR_4->firstDaySet = VAR_0;
  }
  else if(VAR_5 >= 7)
  {
    VAR_7 = 6;
    VAR_4->firstDaySet = VAR_3;
  }
  else
  {




    if (VAR_5 < -1)
      FUNC_1("No bug compatibility for day=%d\n", VAR_5);

    VAR_7 = VAR_5;
    VAR_4->firstDaySet = VAR_3;
  }


  VAR_4->firstDay = (VAR_7 >= 0) ? (++VAR_7) % 7 : VAR_7;

  FUNC_3(VAR_4->hwndSelf, ((void*)0), VAR_0);

  return VAR_6;
}
