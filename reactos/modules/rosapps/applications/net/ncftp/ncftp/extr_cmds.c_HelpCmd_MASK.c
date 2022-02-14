
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int cmdnames ;
struct TYPE_9__ {char* name; int flags; } ;
typedef TYPE_1__* CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char*,int) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char*) ;

void
FUNC_13(const int VAR_6, const char **const VAR_7, const CommandPtr VAR_8, const ArgvInfoPtr VAR_9)
{
 CommandPtr VAR_10;
 int VAR_11 = 0, VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21, VAR_22;
 char *VAR_23, VAR_24[16];
 const char *VAR_25[64];

 FUNC_0(VAR_2);
 FUNC_4(VAR_1 < (sizeof(VAR_25) / sizeof(char *)));
 if (VAR_6 == 2) {
  VAR_11 = (FUNC_11(VAR_7[1], "showall") == 0);
  VAR_12 = (FUNC_11(VAR_7[1], "helpall") == 0);
 }
 if (VAR_6 == 1 || VAR_11) {
  (void) FUNC_9("Commands may be abbreviated.  'help showall' shows hidden and unsupported \ncommands.  'help <command>' gives a brief description of <command>.\n\n");







  VAR_10 = VAR_0;
  VAR_19 = 0;
  for (VAR_16 = 0; VAR_16 < (int) VAR_1; VAR_10++, VAR_16++)
   if ((!FUNC_7((int) VAR_10->name[0])) && (!(VAR_10->flags & VAR_4) || VAR_11))
    VAR_19++;

  (void) FUNC_8((char *) VAR_25, 0, sizeof(VAR_25));





  VAR_10 = VAR_0;
  VAR_13 = 0;
  VAR_22 = 0;
  for (VAR_16 = 0; VAR_16 < (int) VAR_1; VAR_10++, VAR_16++) {
   if ((!FUNC_7((int) VAR_10->name[0])) && (!(VAR_10->flags & VAR_4) || VAR_11)) {
    VAR_25[VAR_13++] = VAR_10->name;
    VAR_21 = (int) FUNC_12(VAR_10->name);
    if (VAR_21 > VAR_22)
     VAR_22 = VAR_21;
   }
  }

  if ((VAR_23 = (char *) FUNC_6("COLUMNS")) == ((void*)0))
   VAR_20 = 80;
  else
   VAR_20 = FUNC_5(VAR_23);


  VAR_22 += 2;

  VAR_18 = (VAR_20 + 0) / VAR_22;
  VAR_17 = VAR_19 / VAR_18;
  if ((VAR_19 % VAR_18) > 0)
   VAR_17++;

  for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {
   for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
    VAR_15 = VAR_17 * VAR_14 + VAR_13;
    if (VAR_15 < VAR_19) {
     (void) FUNC_10(VAR_24, "%%-%ds",
      (VAR_14 < VAR_18 - 1) ? VAR_22 : VAR_22 - 2
     );
     (void) FUNC_9(VAR_24, VAR_25[VAR_15]);
    }
   }
   (void) FUNC_9("\n");
  }
 } else if (VAR_12) {

  for (VAR_10 = VAR_0, VAR_16 = 0; VAR_16 < (int) VAR_1; VAR_10++, VAR_16++) {
   FUNC_2(VAR_10);
   FUNC_3(VAR_10);
  }
 } else {

  for (VAR_13=1; VAR_13<VAR_6; VAR_13++) {
   VAR_10 = FUNC_1(VAR_7[VAR_13], 0);
   if (VAR_10 == VAR_3) {
    (void) FUNC_9("%s: ambiguous command name.\n", VAR_7[VAR_13]);
   } else if (VAR_10 == VAR_5) {
    (void) FUNC_9("%s: no such command.\n", VAR_7[VAR_13]);
   } else {
    if (VAR_13 > 1)
     (void) FUNC_9("\n");
    FUNC_2(VAR_10);
    FUNC_3(VAR_10);
   }
  }
 }
}
