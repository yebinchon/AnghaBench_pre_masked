
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int format; int indent; int str; } ;
typedef TYPE_1__ ExplainState ;






 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,char const*,...) ;
 int FUNC_4 (int ,char) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,char const*) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_3, const char *VAR_4, const char *VAR_5,
    bool VAR_6, ExplainState *VAR_7)
{
 switch (VAR_7->format)
 {
  case 130:
   FUNC_5(VAR_7->str, VAR_7->indent * 2);
   if (VAR_4)
    FUNC_3(VAR_7->str, "%s: %s %s\n", VAR_3, VAR_5, VAR_4);
   else
    FUNC_3(VAR_7->str, "%s: %s\n", VAR_3, VAR_5);
   break;

  case 129:
   {
    char *VAR_8;

    FUNC_5(VAR_7->str, VAR_7->indent * 2);
    FUNC_1(VAR_3, VAR_2 | VAR_1, VAR_7);
    VAR_8 = FUNC_8(VAR_5);
    FUNC_6(VAR_7->str, VAR_8);
    FUNC_10(VAR_8);
    FUNC_1(VAR_3, VAR_0 | VAR_1, VAR_7);
    FUNC_4(VAR_7->str, '\n');
   }
   break;

  case 131:
   FUNC_0(VAR_7);
   FUNC_5(VAR_7->str, VAR_7->indent * 2);
   FUNC_7(VAR_7->str, VAR_3);
   FUNC_6(VAR_7->str, ": ");
   if (VAR_6)
    FUNC_6(VAR_7->str, VAR_5);
   else
    FUNC_7(VAR_7->str, VAR_5);
   break;

  case 128:
   FUNC_2(VAR_7);
   FUNC_3(VAR_7->str, "%s: ", VAR_3);
   if (VAR_6)
    FUNC_6(VAR_7->str, VAR_5);
   else
    FUNC_9(VAR_7->str, VAR_5);
   break;
 }
}
