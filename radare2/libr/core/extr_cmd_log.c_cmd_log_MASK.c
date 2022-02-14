
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int sync_index; TYPE_1__* log; } ;
struct TYPE_14__ {int last; } ;
typedef int RCoreTask ;
typedef int RCoreLogCallback ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (char*,...) ;
 void* FUNC_10 () ;
 int FUNC_11 (void*) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*,char const*) ;
 int FUNC_15 (TYPE_2__*,int) ;
 char* FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (TYPE_2__*,int,int,char const) ;
 int FUNC_18 (TYPE_2__*,char*,int ) ;
 int FUNC_19 (TYPE_2__*,int *) ;
 int * FUNC_20 (TYPE_2__*,int,char*,int *,TYPE_2__*) ;
 char* FUNC_21 (char*,int *) ;
 int FUNC_22 (int) ;
 void* FUNC_23 (char const*,char) ;
 int FUNC_24 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_25(void *VAR_3, const char *VAR_4) {
 RCore *VAR_5 = (RCore *) VAR_3;
 const char *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_4) {
  return 1;
 }

 VAR_7 = (VAR_4 && *VAR_4)? VAR_4 + 1: "";
 VAR_6 = FUNC_23 (VAR_7, ' ');
 VAR_8 = FUNC_0 (VAR_7);
 VAR_9 = VAR_6? FUNC_0 (VAR_6 + 1): 0;

 switch (*VAR_4) {
 case 'e':
  {
   char *VAR_10 = FUNC_23 (VAR_4, ' ');
   if (VAR_10) {
    char *VAR_11 = FUNC_21 (VAR_10 + 1, ((void*)0));
    if (VAR_11) {
     FUNC_8 (VAR_11, ((void*)0));
     FUNC_2 (VAR_11);
    } else {
     FUNC_1 ("File not found\n");
    }
   } else {
    FUNC_1 ("Usage: less [filename]\n");
   }
  }
  break;
 case 'l':
  FUNC_9 ("%d\n", VAR_5->log->last - 1);
  break;
 case '-':
  FUNC_15 (VAR_5, VAR_8);
  break;
 case '?':
  FUNC_13 (VAR_5, VAR_0);
  break;
 case 'T':
  if (FUNC_7 ()) {
   FUNC_24 (VAR_5);
  } else {
   FUNC_1 ("Only available when the screen is interactive\n");
  }
  break;
 case '=':
  if (VAR_4[1] == '&') {
   if (VAR_4[2] == '&') {
    FUNC_5 (((void*)0), ((void*)0));
    while (!FUNC_6 ()) {
     FUNC_12 (VAR_5, "T=");
     void *VAR_12 = FUNC_10();
     FUNC_22 (1);
     FUNC_11 (VAR_12);
    }
    FUNC_4 ();
   } else {

    FUNC_1 ("Background thread syncing with http.sync started.\n");
    RCoreTask *VAR_13 = FUNC_20 (VAR_5, 1, "T=&&", ((void*)0), VAR_5);
    FUNC_19 (VAR_5, VAR_13);
   }
  } else {
   if (FUNC_0 (VAR_4 + 1) > 0 || (VAR_4[1] == '0')) {
    VAR_5->sync_index = 0;
   } else {
    RCoreLogCallback VAR_14 = (VAR_4[1] == '*')
     ? VAR_1: VAR_2;
    char *VAR_15 = FUNC_16 (VAR_5, VAR_5->sync_index);
    if (VAR_15) {
     int VAR_16 = FUNC_3 (VAR_15);
     if (VAR_16 != -1) {
      VAR_5->sync_index = VAR_16 + 1;
     }
     FUNC_18 (VAR_5, VAR_15, VAR_14);
     FUNC_2 (VAR_15);
    } else {
     FUNC_9 ("Please check e http.sync\n");
    }
   }
  }
  break;
 case ' ':
  if (VAR_8 > 0 || *VAR_4 == '0') {
   FUNC_17 (VAR_5, VAR_8, VAR_9, *VAR_4);
  } else {
   FUNC_14 (VAR_5, VAR_4 + 1);
  }
  break;
 case 'm':
  if (VAR_8 > 0) {
   FUNC_17 (VAR_5, VAR_8, 1, 't');
  } else {
   FUNC_17 (VAR_5, VAR_8, 0, 't');
  }
  break;
 case 'j':
 case '*':
 case '\0':
  FUNC_17 (VAR_5, VAR_8, VAR_9, *VAR_4);
  break;
 }
 return 0;
}
