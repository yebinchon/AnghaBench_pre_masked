
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_20__ {int value; } ;
struct TYPE_19__ {int yank_buf; TYPE_2__* num; int offset; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 char* FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 char* FUNC_7 (TYPE_1__*,int *,char*) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ,char const) ;
 int FUNC_12 (TYPE_1__*,char const*) ;
 int FUNC_13 (TYPE_1__*,char const*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,char const*) ;
 int FUNC_16 (TYPE_1__*,int ,int ) ;
 int FUNC_17 (TYPE_1__*,int ,int const*,int) ;
 int FUNC_18 (TYPE_1__*,int ,int ) ;
 int FUNC_19 (TYPE_1__*,char const*) ;
 int FUNC_20 (char const*,int const*,int ,int) ;
 int FUNC_21 (char const*,int *) ;
 int FUNC_22 (TYPE_2__*,char const*) ;
 char* FUNC_23 (char const*) ;
 char* FUNC_24 (char const*) ;
 int FUNC_25 (char const*) ;
 int FUNC_26 (char*,char*) ;

__attribute__((used)) static int FUNC_27(void *VAR_1, const char *VAR_2) {
 ut64 VAR_3;
 RCore *VAR_4 = (RCore *)VAR_1;
 switch (VAR_2[0]) {
 case ' ':
  FUNC_8 (VAR_4, VAR_4->offset, FUNC_22 (VAR_4->num, VAR_2 + 1));
  break;
 case 'l':
  VAR_4->num->value = FUNC_3 (VAR_4->yank_buf);
  break;
 case 'y':
  while (VAR_2[1] == ' ') {
   VAR_2++;
  }
  VAR_3 = VAR_2[1]? FUNC_22 (VAR_4->num, VAR_2 + 1): VAR_4->offset;
  FUNC_16 (VAR_4, VAR_3, 0);
  break;
 case 'x':
  FUNC_14 (VAR_4, FUNC_22 (VAR_4->num, VAR_2 + 1));
  break;
 case 'z':
  FUNC_18 (VAR_4, VAR_4->offset, FUNC_22 (VAR_4->num, VAR_2 + 1));
  break;
 case 'w':
  switch (VAR_2[1]) {
  case ' ':
   FUNC_17 (VAR_4, 0, (const ut8*)VAR_2 + 2, FUNC_25 (VAR_2 + 2));
   break;
  case 'x':
   if (VAR_2[2] == ' ') {
    char *VAR_5 = FUNC_24 (VAR_2 + 3);
    int VAR_6 = FUNC_21 (VAR_2 + 3, (ut8*)VAR_5);
    if (VAR_6 > 0) {
     FUNC_17 (VAR_4, VAR_4->offset, (const ut8*)VAR_5, VAR_6);
    } else {
     FUNC_0 ("Invalid length\n");
    }
    FUNC_1 (VAR_5);
   } else {
    FUNC_0 ("Usage: ywx [hexpairs]\n");
   }

   break;
  default:
   FUNC_0 ("Usage: ywx [hexpairs]\n");
   break;
  }
  break;
 case 'p':
  FUNC_9 (VAR_4, FUNC_22 (VAR_4->num, VAR_2 + 1));
  break;
 case 's':
  FUNC_10 (VAR_4, FUNC_22 (VAR_4->num, VAR_2 + 1));
  break;
 case 't':
  if (VAR_2[1] == 'f') {
   ut64 VAR_7;
   const char *VAR_8 = FUNC_23 (VAR_2 + 2);
   const ut8 *VAR_9 = FUNC_2 (VAR_4->yank_buf, &VAR_7);
   if (!FUNC_20 (VAR_8, VAR_9, VAR_7, 0)) {
    FUNC_0 ("Cannot dump to '%s'\n", VAR_8);
   }
  } else if (VAR_2[1] == ' ') {
   FUNC_19 (VAR_4, VAR_2 + 1);
  } else {
   FUNC_0 ("Usage: wt[f] [arg] ..\n");
  }
  break;
 case 'f':
  switch (VAR_2[1]) {
  case ' ':
   FUNC_13 (VAR_4, VAR_2 + 1);
   break;
  case 'x':
   FUNC_15 (VAR_4, VAR_2 + 2);
   break;
  case 'a':
   FUNC_12 (VAR_4, VAR_2 + 2);
   break;
  default:
   FUNC_0 ("Usage: yf[xa] [arg]\n");
   FUNC_0 ("yf [file]     - copy blocksize from file into the clipboard\n");
   FUNC_0 ("yfa [path]    - yank the whole file\n");
   FUNC_0 ("yfx [hexpair] - yank from hexpair string\n");
   break;
  }
  break;
 case '!':
  {
   char *VAR_10 = FUNC_5 (VAR_4, "y*");
   if (!VAR_10 || !*VAR_10) {
    FUNC_1 (VAR_10);
    VAR_10 = FUNC_24 ("wx 10203040");
   }
   char *VAR_11 = FUNC_7 (VAR_4, ((void*)0), VAR_10);
   (void) FUNC_26 (VAR_11, ";\n");
   FUNC_6 (VAR_4, "y%s", VAR_11);
   FUNC_1 (VAR_10);
   FUNC_1 (VAR_11);
  }
  break;
 case '*':
 case 'j':
 case 'q':
 case '\0':
  FUNC_11 (VAR_4, 0, VAR_2[0]);
  break;
 default:
  FUNC_4 (VAR_4, VAR_0);
  break;
 }
 return 1;
}
