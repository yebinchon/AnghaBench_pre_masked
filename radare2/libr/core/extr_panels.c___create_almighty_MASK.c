
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {TYPE_1__* can; } ;
struct TYPE_23__ {int idx; int pos; } ;
struct TYPE_22__ {TYPE_7__* panels; } ;
struct TYPE_21__ {int const w; int const h; } ;
typedef int Sdb ;
typedef int (* RPanelAlmightyCallback ) (TYPE_2__*,int *,int ,char*) ;
typedef int RPanel ;
typedef TYPE_3__ RModal ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_3__*,int *,int ) ;
 int FUNC_3 (TYPE_3__**) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,char*,char*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *,int const,int const,int const,int const) ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 char* FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,int *,TYPE_3__*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (TYPE_2__*,TYPE_7__*,int,int) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int*,int*) ;
 int FUNC_15 () ;
 void* FUNC_16 (int *,char*,int ) ;
 int FUNC_17 (TYPE_2__*,int *,int ,char*) ;

void FUNC_18(RCore *VAR_4, RPanel *VAR_5, Sdb *VAR_6) {
 FUNC_6 (VAR_4, 0);
 const int VAR_7 = 40;
 const int VAR_8 = 20;
 const int VAR_9 = (VAR_4->panels->can->w - VAR_7) / 2;
 const int VAR_10 = (VAR_4->panels->can->h - VAR_8) / 2;
 RModal *VAR_11 = FUNC_4 ();
 FUNC_7 (&VAR_11->pos, VAR_9, VAR_10, VAR_7, VAR_8);
 int VAR_12, VAR_13, VAR_14, VAR_15;
 char *VAR_16 = ((void*)0);
 FUNC_10 (VAR_4, VAR_6, VAR_11);
 while (VAR_11) {
  VAR_12 = FUNC_15 ();
  VAR_13 = FUNC_13 (VAR_12);
  VAR_16 = ((void*)0);
  if (VAR_13 == VAR_1 - 1) {
   if (FUNC_14 (&VAR_14, &VAR_15)) {
    if ((VAR_14 < VAR_9 || VAR_9 + VAR_7 < VAR_14) ||
       ((VAR_15 < VAR_10 || VAR_10 + VAR_8 < VAR_15))) {
     VAR_13 = 'q';
    } else {
     VAR_16 = FUNC_12 (VAR_4, VAR_4->panels, VAR_14, VAR_15);
     if (VAR_16) {
      void *VAR_17 = FUNC_16 (VAR_6, VAR_16, 0);
      if (VAR_17) {
       ((RPanelAlmightyCallback)VAR_17) (VAR_4, VAR_5, VAR_2, VAR_16);
       FUNC_3 (&VAR_11);
       FUNC_11 (VAR_16);
       break;
      }
      FUNC_11 (VAR_16);
     }
    }
   }
  }
  switch (VAR_13) {
  case 'e':
   {
    FUNC_3 (&VAR_11);
    FUNC_8 (VAR_4, 0, 0);
    char *VAR_18 = FUNC_9 (VAR_4, "New command: ");
    if (FUNC_0 (VAR_18)) {
     FUNC_5 (VAR_4, VAR_18, VAR_18);
    }
    FUNC_11 (VAR_18);
   }
  break;
  case 'j':
   VAR_11->idx++;
   FUNC_10 (VAR_4, VAR_6, VAR_11);
   break;
  case 'k':
   VAR_11->idx--;
   FUNC_10 (VAR_4, VAR_6, VAR_11);
   break;
  case 'v':
   FUNC_2 (VAR_4, VAR_5, VAR_11, VAR_6, VAR_3);
   FUNC_3 (&VAR_11);
   break;
  case 'h':
   FUNC_2 (VAR_4, VAR_5, VAR_11, VAR_6, VAR_0);
   FUNC_3 (&VAR_11);
   break;
  case 0x0d:
   FUNC_2 (VAR_4, VAR_5, VAR_11, VAR_6, VAR_2);
   FUNC_3 (&VAR_11);
   break;
  case '-':
   FUNC_1 (VAR_4, VAR_11, VAR_6);
   FUNC_10 (VAR_4, VAR_6, VAR_11);
   break;
  case 'q':
  case '"':
   FUNC_3 (&VAR_11);
   break;
  }
 }
 FUNC_8 (VAR_4, 0, 0);
}
