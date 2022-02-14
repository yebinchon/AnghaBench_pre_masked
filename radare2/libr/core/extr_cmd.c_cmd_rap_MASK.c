
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int cmdremote; int io; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 int FUNC_8 (TYPE_1__*,char const*) ;
 int FUNC_9 (TYPE_1__*,int ,char const*) ;
 int FUNC_10 (TYPE_1__*,int ,char,char const*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,char const*) ;
 int FUNC_13 (TYPE_1__*,char const*) ;
 int FUNC_14 (TYPE_1__*,char const*) ;
 char* FUNC_15 (int ,char const*) ;
 int FUNC_16 (int) ;
 char* FUNC_17 (char const*) ;

__attribute__((used)) static int FUNC_18(void *VAR_3, const char *VAR_4) {
 RCore *VAR_5 = (RCore *)VAR_3;
 switch (*VAR_4) {
 case '\0':
  FUNC_11 (VAR_5);
  break;
 case 'j':
  FUNC_1 ("TODO: list connections in json\n");
  break;
 case '!':
  if (VAR_4[1] == '=') {

   VAR_5->cmdremote = VAR_4[2]? 1: 0;
   FUNC_5 (FUNC_16 (VAR_5->cmdremote));
  } else {
   char *VAR_6 = FUNC_15 (VAR_5->io, VAR_4 + 1);
   if (VAR_6) {
    FUNC_4 ("%s\n", VAR_6);
    FUNC_2 (VAR_6);
   }
  }
  break;
 case '$':

  FUNC_0 (VAR_5, VAR_4 + 1);
  break;
 case '+':
  FUNC_7 (VAR_5, VAR_4 + 1);
  break;
 case '-':
  FUNC_13 (VAR_5, VAR_4 + 1);
  break;

 case '<':
  FUNC_12 (VAR_5, VAR_4 + 1);
  break;
 case '=':
  FUNC_14 (VAR_5, VAR_4 + 1);
  break;
 case 'g':
  if (VAR_4[1] == '?') {
   FUNC_6 (VAR_5, VAR_1);
  } else {
   FUNC_9 (VAR_5, FUNC_3 (VAR_4[1], 'g'), VAR_4 + 1);
  }
  break;
 case 'h':
  if (VAR_4[1] == '?') {
   FUNC_6 (VAR_5, VAR_2);
  } else {
   FUNC_10 (VAR_5, FUNC_3 (VAR_4[1], 'h'), 'h', VAR_4 + 1);
  }
  break;
 case 'H':
  if (VAR_4[1] == '?') {
   FUNC_6 (VAR_5, VAR_2);
  } else {
   const char *VAR_7 = FUNC_17 (VAR_4 + 1);
   FUNC_10 (VAR_5, FUNC_3 (VAR_4[1], 'H'), 'H', VAR_7);
  }
  break;
 case '?':
  FUNC_6 (VAR_5, VAR_0);
  break;
 default:
  FUNC_8 (VAR_5, VAR_4);
  break;
 }
 return 0;
}
