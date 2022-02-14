
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct parser {int for_html; TYPE_1__* head; } ;
struct TYPE_4__ {struct TYPE_4__* up; } ;
typedef TYPE_1__ fz_xml ;
typedef int fz_context ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 char* FUNC_1 (TYPE_1__*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int *,struct parser*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,struct parser*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_3, struct parser *VAR_4, char *VAR_5, char *VAR_6)
{
 fz_xml *VAR_7 = VAR_4->head;
 int VAR_8;

 if (!VAR_4->for_html)
  return;

 VAR_8 = FUNC_0(VAR_5, VAR_6-VAR_5);

 if (VAR_8 == VAR_1)
  return;

 if ((VAR_2[VAR_8].flags & VAR_0) == 0)
 {


  fz_xml *VAR_9;
  for (VAR_9 = VAR_7; VAR_9; VAR_9 = VAR_9->up)
  {
   char *VAR_10 = FUNC_1(VAR_9);
   int VAR_11 = VAR_10 ? FUNC_0(VAR_10, FUNC_3(VAR_10)) : VAR_1;
   if (VAR_8 == VAR_11)
   {

    while (1)
    {
     int VAR_12 = (VAR_7 == VAR_9);
     FUNC_4(VAR_3, VAR_4);
     VAR_7 = VAR_7->up;
     if (VAR_12)
      break;
    }
    break;
   }
   if (VAR_2[VAR_11].flags & VAR_0)
   {

    break;
   }
  }
 }


 FUNC_2(VAR_3, VAR_4, VAR_8);
}
