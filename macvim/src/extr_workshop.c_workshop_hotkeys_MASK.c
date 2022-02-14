
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cbuf ;
struct TYPE_3__ {int * accel; int verb; } ;
typedef TYPE_1__ MenuMap ;
typedef scalar_t__ Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (char*,int,char*,int *,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(
 Boolean VAR_7)
{
    char VAR_8[VAR_0];
    MenuMap *VAR_9;






    VAR_6 = VAR_7;
    if (VAR_6)
 for (VAR_9 = VAR_4; VAR_9 < &VAR_4[VAR_5]; VAR_9++)
 {
     if (VAR_9->accel != ((void*)0))
     {
  FUNC_2(VAR_8, sizeof(VAR_8),
   "map %s :wsverb %s<CR>", VAR_9->accel, VAR_9->verb);
  FUNC_1(VAR_8, VAR_1);
     }
 }
    else
 for (VAR_9 = VAR_4; VAR_9 < &VAR_4[VAR_5]; VAR_9++)
 {
     if (VAR_9->accel != ((void*)0))
     {
  FUNC_2(VAR_8, sizeof(VAR_8), "unmap %s", VAR_9->accel);
  FUNC_1(VAR_8, VAR_1);
     }
 }
}
