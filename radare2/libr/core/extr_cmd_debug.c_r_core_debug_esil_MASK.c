
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_5__ {int num; int dbg; int config; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char const** VAR_3 ;
 char const** VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char const**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,char const*) ;
 char* FUNC_15 (char*,char) ;
 char* FUNC_16 (char const*) ;

__attribute__((used)) static void FUNC_17 (RCore *VAR_5, const char *VAR_6) {
 switch (VAR_6[0]) {
 case '\0':

  FUNC_11 (VAR_5->dbg);
  break;
 case ' ':
  {
   char *VAR_7 = FUNC_16 (VAR_6 + 1);
   char *VAR_8, *VAR_9;
   int VAR_10 = 0;
   int VAR_11 = 0, VAR_12 = 0;
   VAR_8 = FUNC_15 (VAR_7, ' ');
   if (VAR_8) {
    *VAR_8++ = 0;
    if (FUNC_15 (VAR_7, 'r')) VAR_11 |= VAR_0;
    if (FUNC_15 (VAR_7, 'w')) VAR_11 |= VAR_1;
    if (FUNC_15 (VAR_7, 'x')) VAR_11 |= VAR_2;
    VAR_9 = FUNC_15 (VAR_8, ' ');
    if (VAR_9) {
     *VAR_9++ = 0;
     VAR_12 = VAR_8[0];
     if (VAR_9) {
      FUNC_9 (VAR_5->dbg, VAR_11, VAR_12, VAR_9);
      VAR_10 = 1;
     }
    }
   }
   if (!VAR_10) {
    const char *VAR_13[] = {
     "Usage:", "de", " [perm] [reg|mem] [expr]",
     ((void*)0)
    };
    FUNC_5 (VAR_5, VAR_13);
   }
   FUNC_1 (VAR_7);
  }
  break;
 case '-':
  FUNC_12 (VAR_5->dbg);
  break;
 case 'c':
  if (FUNC_10 (VAR_5->dbg)) {
   FUNC_0 ("Error: no esil watchpoints defined\n");
  } else {
   FUNC_4 (VAR_5, "aei");
   FUNC_7 (VAR_5->dbg, FUNC_2 (VAR_5->config, "esil.prestep"));
   FUNC_6 (VAR_5->dbg);
  }
  break;
 case 's':
  if (VAR_6[1] == 'u' && VAR_6[2] == ' ') {
   ut64 VAR_14, VAR_15, VAR_16 = FUNC_14 (VAR_5->num, VAR_6 + 2);
   FUNC_4 (VAR_5, "aei");
   VAR_14 = FUNC_13 (VAR_5->dbg, "PC");
   while (VAR_14 != VAR_16) {
    FUNC_7 (VAR_5->dbg, FUNC_2 (
       VAR_5->config, "esil.prestep"));
    FUNC_8 (VAR_5->dbg, 1);
    VAR_15 = FUNC_13 (VAR_5->dbg, "PC");
    if (VAR_15 == VAR_14) {
     FUNC_0 ("Detected loophole\n");
     break;
    }
    VAR_14 = VAR_15;
   }
  } else if (VAR_6[1] == '?' || !VAR_6[1]) {
   FUNC_5 (VAR_5, VAR_4);
  } else {
   FUNC_4 (VAR_5, "aei");
   FUNC_7 (VAR_5->dbg, FUNC_2 (VAR_5->config, "esil.prestep"));

   FUNC_8 (VAR_5->dbg, FUNC_14 (VAR_5->num, VAR_6 + 1));
  }
  break;
 case '?':
 default:
  {
   FUNC_5 (VAR_5, VAR_3);

   FUNC_3 ("Examples:\n"
     " de r r rip       # stop when reads rip\n"
     " de rw m ADDR     # stop when read or write in ADDR\n"
     " de w r rdx       # stop when rdx register is modified\n"
     " de x m FROM..TO  # stop when rip in range\n");
  }
  break;
 }
}
