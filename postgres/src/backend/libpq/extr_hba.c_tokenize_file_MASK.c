
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int rawline ;
struct TYPE_9__ {int line_num; char* err_msg; int raw_line; struct TYPE_9__* fields; } ;
typedef TYPE_1__ TokenizedLine ;
typedef int MemoryContext ;
typedef TYPE_1__ List ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,char const*) ;
 int FUNC_6 (char*,...) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int,int *) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (char const*,char**,int,char**) ;
 scalar_t__ FUNC_12 (int) ;
 char* FUNC_13 (char*,char const*,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static MemoryContext
FUNC_17(const char *VAR_6, FILE *VAR_7, List **VAR_8, int VAR_9)
{
 int VAR_10 = 1;
 MemoryContext VAR_11;
 MemoryContext VAR_12;

 VAR_11 = FUNC_0(VAR_1,
         "tokenize_file",
         VAR_0);
 VAR_12 = FUNC_1(VAR_11);

 *VAR_8 = VAR_4;

 while (!FUNC_7(VAR_7) && !FUNC_8(VAR_7))
 {
  char VAR_13[VAR_3];
  char *VAR_14;
  List *VAR_15 = VAR_4;
  char *VAR_16 = ((void*)0);

  if (!FUNC_9(VAR_13, sizeof(VAR_13), VAR_7))
  {
   int VAR_17 = VAR_5;

   if (!FUNC_8(VAR_7))
    break;

   FUNC_2(VAR_9,
     (FUNC_4(),
      FUNC_6("could not read file \"%s\": %m", VAR_6)));
   VAR_16 = FUNC_13("could not read file \"%s\": %s",
          VAR_6, FUNC_15(VAR_17));
   VAR_13[0] = '\0';
  }
  if (FUNC_16(VAR_13) == VAR_3 - 1)
  {

   FUNC_2(VAR_9,
     (FUNC_3(VAR_2),
      FUNC_6("authentication file line too long"),
      FUNC_5("line %d of configuration file \"%s\"",
        VAR_10, VAR_6)));
   VAR_16 = "authentication file line too long";
  }


  VAR_14 = VAR_13 + FUNC_16(VAR_13) - 1;
  while (VAR_14 >= VAR_13 && (*VAR_14 == '\n' || *VAR_14 == '\r'))
   *VAR_14-- = '\0';


  VAR_14 = VAR_13;
  while (*VAR_14 && VAR_16 == ((void*)0))
  {
   List *VAR_18;

   VAR_18 = FUNC_11(VAR_6, &VAR_14,
             VAR_9, &VAR_16);

   if (VAR_18 != VAR_4)
    VAR_15 = FUNC_10(VAR_15, VAR_18);
  }


  if (VAR_15 != VAR_4 || VAR_16 != ((void*)0))
  {
   TokenizedLine *VAR_19;

   VAR_19 = (TokenizedLine *) FUNC_12(sizeof(TokenizedLine));
   VAR_19->fields = VAR_15;
   VAR_19->line_num = VAR_10;
   VAR_19->raw_line = FUNC_14(VAR_13);
   VAR_19->err_msg = VAR_16;
   *VAR_8 = FUNC_10(*VAR_8, VAR_19);
  }

  VAR_10++;
 }

 FUNC_1(VAR_12);

 return VAR_11;
}
