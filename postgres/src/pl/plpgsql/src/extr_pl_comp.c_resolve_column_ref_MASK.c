
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int location; int fields; } ;
struct TYPE_17__ {scalar_t__* datums; } ;
struct TYPE_16__ {int ns; TYPE_1__* func; } ;
struct TYPE_15__ {int itemtype; int itemno; } ;
struct TYPE_14__ {int firstfield; } ;
struct TYPE_13__ {size_t recparentno; int nextfield; int fieldname; int dtype; } ;
struct TYPE_12__ {TYPE_6__* cur_estate; } ;
typedef int ParseState ;
typedef TYPE_2__ PLpgSQL_recfield ;
typedef TYPE_3__ PLpgSQL_rec ;
typedef TYPE_4__ PLpgSQL_nsitem ;
typedef TYPE_5__ PLpgSQL_expr ;
typedef TYPE_6__ PLpgSQL_execstate ;
typedef int Node ;
typedef TYPE_7__ ColumnRef ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*,char const*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (TYPE_5__*,int,int ) ;
 int FUNC_11 (int *,int ) ;
 TYPE_4__* FUNC_12 (int ,int,char const*,char const*,char const*,int*) ;
 char* FUNC_13 (int *) ;
 int FUNC_14 (int ,char const*) ;

__attribute__((used)) static Node *
FUNC_15(ParseState *VAR_5, PLpgSQL_expr *VAR_6,
       ColumnRef *VAR_7, bool VAR_8)
{
 PLpgSQL_execstate *VAR_9;
 PLpgSQL_nsitem *VAR_10;
 const char *VAR_11;
 const char *VAR_12 = ((void*)0);
 const char *VAR_13 = ((void*)0);
 const char *VAR_14 = ((void*)0);
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;






 VAR_9 = VAR_6->func->cur_estate;
 switch (FUNC_7(VAR_7->fields))
 {
  case 1:
   {
    Node *VAR_19 = (Node *) FUNC_6(VAR_7->fields);

    FUNC_0(FUNC_1(VAR_19, VAR_4));
    VAR_11 = FUNC_13(VAR_19);
    VAR_16 = 1;
    VAR_17 = 1;
    break;
   }
  case 2:
   {
    Node *VAR_20 = (Node *) FUNC_6(VAR_7->fields);
    Node *VAR_21 = (Node *) FUNC_8(VAR_7->fields);

    FUNC_0(FUNC_1(VAR_20, VAR_4));
    VAR_11 = FUNC_13(VAR_20);


    if (FUNC_1(VAR_21, VAR_0))
    {

     VAR_12 = "*";
     VAR_17 = 1;
     break;
    }

    FUNC_0(FUNC_1(VAR_21, VAR_4));
    VAR_12 = FUNC_13(VAR_21);
    VAR_14 = VAR_12;
    VAR_16 = 2;
    VAR_17 = 2;
    VAR_18 = 1;
    break;
   }
  case 3:
   {
    Node *VAR_22 = (Node *) FUNC_6(VAR_7->fields);
    Node *VAR_23 = (Node *) FUNC_8(VAR_7->fields);
    Node *VAR_24 = (Node *) FUNC_9(VAR_7->fields);

    FUNC_0(FUNC_1(VAR_22, VAR_4));
    VAR_11 = FUNC_13(VAR_22);
    FUNC_0(FUNC_1(VAR_23, VAR_4));
    VAR_12 = FUNC_13(VAR_23);


    if (FUNC_1(VAR_24, VAR_0))
    {

     VAR_13 = "*";
     VAR_17 = 2;
     break;
    }

    FUNC_0(FUNC_1(VAR_24, VAR_4));
    VAR_13 = FUNC_13(VAR_24);
    VAR_14 = VAR_13;
    VAR_18 = 2;
    break;
   }
  default:

   return ((void*)0);
 }

 VAR_10 = FUNC_12(VAR_6->ns, 0,
       VAR_11, VAR_12, VAR_13,
       &VAR_15);

 if (VAR_10 == ((void*)0))
  return ((void*)0);

 switch (VAR_10->itemtype)
 {
  case 128:
   if (VAR_15 == VAR_16)
    return FUNC_10(VAR_6, VAR_10->itemno, VAR_7->location);
   break;
  case 129:
   if (VAR_15 == VAR_17)
    return FUNC_10(VAR_6, VAR_10->itemno, VAR_7->location);
   if (VAR_15 == VAR_18)
   {

    PLpgSQL_rec *VAR_25 = (PLpgSQL_rec *) VAR_9->datums[VAR_10->itemno];
    int VAR_26;


    VAR_26 = VAR_25->firstfield;
    while (VAR_26 >= 0)
    {
     PLpgSQL_recfield *VAR_27 = (PLpgSQL_recfield *) VAR_9->datums[VAR_26];

     FUNC_0(VAR_27->dtype == VAR_3 &&
         VAR_27->recparentno == VAR_10->itemno);
     if (FUNC_14(VAR_27->fieldname, VAR_14) == 0)
     {
      return FUNC_10(VAR_6, VAR_26, VAR_7->location);
     }
     VAR_26 = VAR_27->nextfield;
    }







    if (VAR_8)
     FUNC_3(VAR_2,
       (FUNC_4(VAR_1),
        FUNC_5("record \"%s\" has no field \"%s\"",
         (VAR_18 == 1) ? VAR_11 : VAR_12,
         VAR_14),
        FUNC_11(VAR_5, VAR_7->location)));
   }
   break;
  default:
   FUNC_2(VAR_2, "unrecognized plpgsql itemtype: %d", VAR_10->itemtype);
 }


 return ((void*)0);
}
