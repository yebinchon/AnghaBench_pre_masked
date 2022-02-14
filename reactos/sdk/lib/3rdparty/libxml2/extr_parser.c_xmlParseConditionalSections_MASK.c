
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ xmlParserInputState ;
typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_9__ {scalar_t__ instate; int disableSAX; scalar_t__ recovery; TYPE_1__* input; } ;
struct TYPE_8__ {int id; unsigned int consumed; scalar_t__ cur; scalar_t__ end; int line; scalar_t__ filename; } ;


 scalar_t__ FUNC_0 (int const*,char,char,char,char,char,char) ;
 scalar_t__ FUNC_1 (int const*,char,char,char,char,unsigned char,char,char) ;
 int const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_2 (int) ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (TYPE_2__*,int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_13 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void
FUNC_9(xmlParserCtxtPtr VAR_15) {
    int VAR_16 = VAR_15->input->id;

    FUNC_3(3);
    VAR_5;
    if (FUNC_1(VAR_0, 'I', 'N', 'C', 'L', 'U', 'D', 'E')) {
 FUNC_3(7);
 VAR_5;
 if (VAR_3 != '[') {
     FUNC_4(VAR_15, VAR_6, ((void*)0));
     FUNC_7(VAR_15);
     return;
 } else {
     if (VAR_15->input->id != VAR_16) {
  FUNC_5(VAR_15, VAR_9,
                        "All markup of the conditional section is not"
                               " in the same entity\n");
     }
     VAR_2;
 }
 if (VAR_14) {
     if ((VAR_15->input != ((void*)0)) && (VAR_15->input->filename))
  FUNC_6(VAR_13,
   "%s(%d): ", VAR_15->input->filename,
   VAR_15->input->line);
     FUNC_6(VAR_13,
      "Entering INCLUDE Conditional Section\n");
 }

        VAR_5;
        VAR_1;
 while (((VAR_3 != 0) && ((VAR_3 != ']') || (FUNC_2(1) != ']') ||
         (FUNC_2(2) != '>'))) && (VAR_15->instate != VAR_11)) {
     const xmlChar *VAR_17 = VAR_0;
     unsigned int VAR_18 = VAR_15->input->consumed;

     if ((VAR_3 == '<') && (FUNC_2(1) == '!') && (FUNC_2(2) == '[')) {
  FUNC_9(VAR_15);
     } else
  FUNC_8(VAR_15);

            VAR_5;
            VAR_1;

     if ((VAR_0 == VAR_17) && (VAR_18 == VAR_15->input->consumed)) {
  FUNC_4(VAR_15, VAR_10, ((void*)0));
  FUNC_7(VAR_15);
  break;
     }
 }
 if (VAR_14) {
     if ((VAR_15->input != ((void*)0)) && (VAR_15->input->filename))
  FUNC_6(VAR_13,
   "%s(%d): ", VAR_15->input->filename,
   VAR_15->input->line);
     FUNC_6(VAR_13,
      "Leaving INCLUDE Conditional Section\n");
 }

    } else if (FUNC_0(VAR_0, 'I', 'G', 'N', 'O', 'R', 'E')) {
 int VAR_19;
 xmlParserInputState VAR_20;
 int VAR_21 = 0;

 FUNC_3(6);
 VAR_5;
 if (VAR_3 != '[') {
     FUNC_4(VAR_15, VAR_6, ((void*)0));
     FUNC_7(VAR_15);
     return;
 } else {
     if (VAR_15->input->id != VAR_16) {
  FUNC_5(VAR_15, VAR_9,
                        "All markup of the conditional section is not"
                               " in the same entity\n");
     }
     VAR_2;
 }
 if (VAR_14) {
     if ((VAR_15->input != ((void*)0)) && (VAR_15->input->filename))
  FUNC_6(VAR_13,
   "%s(%d): ", VAR_15->input->filename,
   VAR_15->input->line);
     FUNC_6(VAR_13,
      "Entering IGNORE Conditional Section\n");
 }





 VAR_19 = VAR_15->disableSAX;
 VAR_20 = VAR_15->instate;
 if (VAR_15->recovery == 0) VAR_15->disableSAX = 1;
 VAR_15->instate = VAR_12;

 while (((VAR_21 >= 0) && (VAR_3 != 0)) &&
               (VAR_15->instate != VAR_11)) {
   if ((VAR_3 == '<') && (FUNC_2(1) == '!') && (FUNC_2(2) == '[')) {
     VAR_21++;
     FUNC_3(3);
     continue;
   }
   if ((VAR_3 == ']') && (FUNC_2(1) == ']') && (FUNC_2(2) == '>')) {
     if (--VAR_21 >= 0) FUNC_3(3);
     continue;
   }
   VAR_2;
   continue;
 }

 VAR_15->disableSAX = VAR_19;
 VAR_15->instate = VAR_20;

 if (VAR_14) {
     if ((VAR_15->input != ((void*)0)) && (VAR_15->input->filename))
  FUNC_6(VAR_13,
   "%s(%d): ", VAR_15->input->filename,
   VAR_15->input->line);
     FUNC_6(VAR_13,
      "Leaving IGNORE Conditional Section\n");
 }

    } else {
 FUNC_4(VAR_15, VAR_7, ((void*)0));
 FUNC_7(VAR_15);
 return;
    }

    if (VAR_3 == 0)
        VAR_4;

    if (VAR_3 == 0) {
 FUNC_4(VAR_15, VAR_8, ((void*)0));
    } else {
 if (VAR_15->input->id != VAR_16) {
     FUNC_5(VAR_15, VAR_9,
                    "All markup of the conditional section is not in"
                           " the same entity\n");
 }
 if ((VAR_15-> instate != VAR_11) &&
     ((VAR_15->input->cur + 3) <= VAR_15->input->end))
     FUNC_3(3);
    }
}
