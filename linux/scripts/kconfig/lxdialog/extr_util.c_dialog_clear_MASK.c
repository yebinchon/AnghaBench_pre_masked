
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subtitle_list {char const* text; struct subtitle_list* next; } ;
struct TYPE_3__ {int atr; } ;
struct TYPE_4__ {struct subtitle_list* subtitles; int * backtitle; TYPE_1__ screen; } ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int ,int,int,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,char*) ;
 int VAR_3 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_2.screen.atr);

 if (VAR_2.backtitle != ((void*)0)) {
  int VAR_6, VAR_7 = 0, VAR_8 = 0;
  struct subtitle_list *VAR_9;

  FUNC_7(VAR_3, VAR_2.screen.atr);
  FUNC_3(VAR_3, 0, 1, (char *)VAR_2.backtitle);

  for (VAR_9 = VAR_2.subtitles; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {

   VAR_7 += FUNC_4(VAR_9->text) + 3;
  }

  FUNC_8(VAR_3, 1, 1);
  if (VAR_7 > VAR_5 - 2) {
   const char *VAR_10 = "[...] ";
   FUNC_6(VAR_3, VAR_10);
   VAR_8 = VAR_7 - (VAR_5 - 2 - FUNC_4(VAR_10));
  }

  for (VAR_9 = VAR_2.subtitles; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
   if (VAR_8 == 0)
    FUNC_5(VAR_3, VAR_1);
   else
    VAR_8--;

   if (VAR_8 == 0)
    FUNC_5(VAR_3, ' ');
   else
    VAR_8--;

   if (VAR_8 < FUNC_4(VAR_9->text)) {
    FUNC_6(VAR_3, VAR_9->text + VAR_8);
    VAR_8 = 0;
   } else
    VAR_8 -= FUNC_4(VAR_9->text);

   if (VAR_8 == 0)
    FUNC_5(VAR_3, ' ');
   else
    VAR_8--;
  }

  for (VAR_6 = VAR_7 + 1; VAR_6 < VAR_5 - 1; VAR_6++)
   FUNC_5(VAR_3, VAR_0);
 }
 FUNC_9(VAR_3);
}
