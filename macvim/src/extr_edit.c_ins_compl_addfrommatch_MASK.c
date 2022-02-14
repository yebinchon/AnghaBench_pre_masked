
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * cp_str; struct TYPE_8__* cp_next; } ;
typedef TYPE_2__ compl_T ;
typedef int char_u ;
struct TYPE_10__ {int cp_flags; TYPE_2__* cp_next; int * cp_str; } ;
struct TYPE_7__ {scalar_t__ col; } ;
struct TYPE_9__ {TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int * VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void
FUNC_4()
{
    char_u *VAR_6;
    int VAR_7 = (int)VAR_5->w_cursor.col - (int)VAR_1;
    int VAR_8;
    compl_T *VAR_9;

    VAR_6 = VAR_4->cp_str;
    if ((int)FUNC_1(VAR_6) <= VAR_7)
    {


 if (VAR_4->cp_flags & VAR_0)
 {
     VAR_6 = ((void*)0);
     for (VAR_9 = VAR_4->cp_next; VAR_9 != ((void*)0)
     && VAR_9 != VAR_2; VAR_9 = VAR_9->cp_next)
     {
  if (VAR_3 == ((void*)0)
   || FUNC_3(VAR_9, VAR_3,
         (int)FUNC_1(VAR_3)))
  {
      VAR_6 = VAR_9->cp_str;
      break;
  }
     }
     if (VAR_6 == ((void*)0) || (int)FUNC_1(VAR_6) <= VAR_7)
  return;
 }
 else
     return;
    }
    VAR_6 += VAR_7;
    VAR_8 = FUNC_0(VAR_6);
    FUNC_2(VAR_8);
}
