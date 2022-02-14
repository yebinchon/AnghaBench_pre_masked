
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_18__ {TYPE_2__* rcmd; TYPE_1__* num; } ;
struct TYPE_17__ {int macro; } ;
struct TYPE_16__ {int value; } ;
struct TYPE_15__ {int is_html; } ;
typedef TYPE_3__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 TYPE_14__* FUNC_9 () ;
 int FUNC_10 (TYPE_3__*,char*,int ) ;
 int FUNC_11 (TYPE_3__*,char const*) ;
 int FUNC_12 (TYPE_3__*,char const*) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_3__*,int) ;
 char* FUNC_15 (TYPE_3__*,char*) ;
 char* FUNC_16 (TYPE_3__*,char*) ;
 int FUNC_17 (TYPE_3__*,char const*) ;
 char* FUNC_18 (TYPE_3__*,char const*,char const*,char const*) ;
 int FUNC_19 (TYPE_3__*,char const*) ;
 char* FUNC_20 (char*,char*) ;
 char* FUNC_21 (char const*) ;
 char* FUNC_22 (char const*,char) ;
 char* FUNC_23 (char const*) ;

__attribute__((used)) static int FUNC_24(void *VAR_1, const char *VAR_2) {
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 const char *VAR_9, *VAR_10, *VAR_11;
 RCore *VAR_12 = (RCore *)VAR_1;

 switch (*VAR_2) {
 case '\0':
  FUNC_14 (VAR_12, 0);
  break;
 case ':':
  if ((VAR_4 = FUNC_22 (VAR_2 + 1, ' '))) {


   VAR_11 = VAR_4 + 1;
   *VAR_4 = 0;
   VAR_5 = FUNC_22 (VAR_2 + 1, ':');
   if (VAR_5) {
    *VAR_5 = 0;
    VAR_9 = VAR_2 + 1;
    VAR_10 = VAR_5 + 1;
   } else {
    VAR_9 = "localhost";
    VAR_10 = VAR_2 + ((VAR_2[1] == ':')? 2: 1);
   }
   VAR_6 = FUNC_18 (VAR_12, VAR_9, VAR_10, VAR_11);
   if (VAR_6) {
    FUNC_7 (VAR_6);
    FUNC_2 (VAR_6);
   }
  } else {
   FUNC_17 (VAR_12, VAR_2 + 1);
  }
  break;
 case '.':
  if (VAR_2[1] == '.') {

   FUNC_14 (VAR_12, 1);
  } else if (VAR_2[1]) {
   char *VAR_13 = FUNC_16 (VAR_12, FUNC_21 (VAR_2));
   if (VAR_13) {
    FUNC_10 (VAR_12, VAR_13, 0);
    FUNC_2 (VAR_13);
   }
  } else {
   FUNC_1 ("Usage: .. ([file])\n");
  }
  break;
 case '*':
  {
   const char *VAR_14 = FUNC_21 (VAR_2 + 1);
   char *VAR_15 = FUNC_23 (VAR_14);
   char *VAR_16 = FUNC_22 (VAR_15, ' ');
   if (VAR_16) {
    *VAR_16 = 0;
   }
   if (FUNC_0 (VAR_15)) {
    FUNC_19 (VAR_12, VAR_15);
   }
   FUNC_2 (VAR_15);
  }
  break;
 case '-':
  if (VAR_2[1] == '?') {
   FUNC_8 ("Usage: '-' '.-' '. -' do the same\n");
  } else {
   FUNC_19 (VAR_12, "-");
  }
  break;
 case ' ':
  {
   const char *VAR_17 = FUNC_21 (VAR_2 + 1);
   if (*VAR_17 == '$') {
    FUNC_11 (VAR_12, VAR_17);
   } else {
    if (!FUNC_19 (VAR_12, VAR_17)) {
     FUNC_1 ("Cannot find script '%s'\n", VAR_17);
     VAR_12->num->value = 1;
    } else {
     VAR_12->num->value = 0;
    }
   }
  }
  break;
 case '!':

  FUNC_12 (VAR_12, VAR_2 + 1);
  break;
 case '(':
  FUNC_3 (&VAR_12->rcmd->macro, VAR_2 + 1);
  break;
 case '?':
  FUNC_13 (VAR_12, VAR_0);
  break;
 default:
  if (*VAR_2 >= 0 && *VAR_2 <= 9) {
   FUNC_1 ("|ERROR| No .[0..9] to avoid infinite loops\n");
   break;
  }
  VAR_8 = FUNC_23 (VAR_2);
  VAR_7 = FUNC_22 (VAR_8, '~');
  if (VAR_7) {
   *VAR_7 = 0;
  }
  int VAR_18 = FUNC_9 ()->is_html;
  FUNC_9 ()->is_html = 0;
  VAR_4 = VAR_3 = FUNC_15 (VAR_12, VAR_8);
  FUNC_9 ()->is_html = VAR_18;

  if (VAR_7) {
   *VAR_7 = '~';
  }
  FUNC_5 (((void*)0), ((void*)0));
  if (VAR_4) {
   for (;;) {
    if (FUNC_6 ()) {
     break;
    }
    VAR_5 = FUNC_22 (VAR_4, '\n');
    if (VAR_5) {
     *VAR_5 = '\0';
    }
    if (*VAR_4) {
     char *VAR_19 = FUNC_20 (FUNC_23 (VAR_4), VAR_7);
     FUNC_11 (VAR_12, VAR_19);
     FUNC_2 (VAR_19);
    }
    if (!VAR_5) {
     break;
    }
    VAR_4 = VAR_5 + 1;
   }
  }
  FUNC_4 ();
  FUNC_2 (VAR_3);
  FUNC_2 (VAR_8);
  break;
 }
 return 0;
}
