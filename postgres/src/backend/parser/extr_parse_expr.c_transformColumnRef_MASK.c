
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int location; int fields; } ;
struct TYPE_17__ {int p_expr_kind; int * (* p_post_columnref_hook ) (TYPE_1__*,TYPE_2__*,int *) ;int p_last_srf; int * (* p_pre_columnref_hook ) (TYPE_1__*,TYPE_2__*) ;} ;
typedef int RangeTblEntry ;
typedef TYPE_1__ ParseState ;
typedef int Node ;
typedef TYPE_2__ ColumnRef ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__*,int ,int ,int ,int *,int,int ) ;
 int VAR_6 ;
 char* FUNC_4 (char*) ;
 int * FUNC_5 (TYPE_1__*,char*,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (TYPE_1__*,char*,char*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (char*,char*,int ) ;
 int * FUNC_20 (char*) ;
 int FUNC_21 (TYPE_1__*,int ) ;
 int * FUNC_22 (TYPE_1__*,char*,char*,int ,int*) ;
 int * FUNC_23 (TYPE_1__*,int *,char*,int ,int ,int *) ;
 char* FUNC_24 (int *) ;
 int FUNC_25 (char*,int ) ;
 int * FUNC_26 (TYPE_1__*,TYPE_2__*) ;
 int * FUNC_27 (TYPE_1__*,TYPE_2__*,int *) ;
 int * FUNC_28 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static Node *
FUNC_29(ParseState *VAR_7, ColumnRef *VAR_8)
{
 Node *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 RangeTblEntry *VAR_13;
 int VAR_14;
 enum
 {
  CRERR_NO_COLUMN,
  CRERR_NO_RTE,
  CRERR_WRONG_DB,
  CRERR_TOO_MANY
 } VAR_15 = CRERR_NO_COLUMN;
 const char *VAR_16;






 VAR_16 = ((void*)0);
 switch (VAR_7->p_expr_kind)
 {
  case 147:
   FUNC_0(0);
   break;
  case 144:
  case 150:
  case 149:
  case 158:
  case 159:
  case 133:
  case 141:
  case 154:
  case 160:
  case 128:
  case 129:
  case 131:
  case 130:
  case 132:
  case 139:
  case 151:
  case 137:
  case 136:
  case 155:
  case 145:
  case 163:
  case 148:
  case 146:
  case 140:
  case 135:
  case 134:
  case 166:
  case 162:
  case 157:
  case 153:
  case 152:
  case 168:
  case 161:
  case 138:
  case 142:
  case 167:
  case 164:
  case 156:

   break;

  case 165:
   VAR_16 = FUNC_4("cannot use column reference in DEFAULT expression");
   break;
  case 143:
   VAR_16 = FUNC_4("cannot use column reference in partition bound expression");
   break;
 }
 if (VAR_16)
  FUNC_6(VAR_4,
    (FUNC_7(VAR_2),
     FUNC_9("%s", VAR_16),
     FUNC_21(VAR_7, VAR_8->location)));





 if (VAR_7->p_pre_columnref_hook != ((void*)0))
 {
  VAR_9 = VAR_7->p_pre_columnref_hook(VAR_7, VAR_8);
  if (VAR_9 != ((void*)0))
   return VAR_9;
 }
 switch (FUNC_15(VAR_8->fields))
 {
  case 1:
   {
    Node *VAR_17 = (Node *) FUNC_14(VAR_8->fields);

    FUNC_0(FUNC_1(VAR_17, VAR_6));
    VAR_12 = FUNC_24(VAR_17);


    VAR_9 = FUNC_5(VAR_7, VAR_12, 0, VAR_8->location);

    if (VAR_9 == ((void*)0))
    {
     VAR_13 = FUNC_22(VAR_7, ((void*)0), VAR_12,
              VAR_8->location,
              &VAR_14);
     if (VAR_13)
      VAR_9 = FUNC_28(VAR_7, VAR_13,
             VAR_8->location);
    }
    break;
   }
  case 2:
   {
    Node *VAR_18 = (Node *) FUNC_14(VAR_8->fields);
    Node *VAR_19 = (Node *) FUNC_17(VAR_8->fields);

    FUNC_0(FUNC_1(VAR_18, VAR_6));
    VAR_11 = FUNC_24(VAR_18);


    VAR_13 = FUNC_22(VAR_7, VAR_10, VAR_11,
             VAR_8->location,
             &VAR_14);
    if (VAR_13 == ((void*)0))
    {
     VAR_15 = CRERR_NO_RTE;
     break;
    }


    if (FUNC_1(VAR_19, VAR_0))
    {
     VAR_9 = FUNC_28(VAR_7, VAR_13, VAR_8->location);
     break;
    }

    FUNC_0(FUNC_1(VAR_19, VAR_6));
    VAR_12 = FUNC_24(VAR_19);


    VAR_9 = FUNC_23(VAR_7, VAR_13, VAR_12, VAR_8->location,
          0, ((void*)0));
    if (VAR_9 == ((void*)0))
    {

     VAR_9 = FUNC_28(VAR_7, VAR_13, VAR_8->location);
     VAR_9 = FUNC_3(VAR_7,
            FUNC_16(FUNC_20(VAR_12)),
            FUNC_16(VAR_9),
            VAR_7->p_last_srf,
            ((void*)0),
            0,
            VAR_8->location);
    }
    break;
   }
  case 3:
   {
    Node *VAR_20 = (Node *) FUNC_14(VAR_8->fields);
    Node *VAR_21 = (Node *) FUNC_17(VAR_8->fields);
    Node *VAR_22 = (Node *) FUNC_18(VAR_8->fields);

    FUNC_0(FUNC_1(VAR_20, VAR_6));
    VAR_10 = FUNC_24(VAR_20);
    FUNC_0(FUNC_1(VAR_21, VAR_6));
    VAR_11 = FUNC_24(VAR_21);


    VAR_13 = FUNC_22(VAR_7, VAR_10, VAR_11,
             VAR_8->location,
             &VAR_14);
    if (VAR_13 == ((void*)0))
    {
     VAR_15 = CRERR_NO_RTE;
     break;
    }


    if (FUNC_1(VAR_22, VAR_0))
    {
     VAR_9 = FUNC_28(VAR_7, VAR_13, VAR_8->location);
     break;
    }

    FUNC_0(FUNC_1(VAR_22, VAR_6));
    VAR_12 = FUNC_24(VAR_22);


    VAR_9 = FUNC_23(VAR_7, VAR_13, VAR_12, VAR_8->location,
          0, ((void*)0));
    if (VAR_9 == ((void*)0))
    {

     VAR_9 = FUNC_28(VAR_7, VAR_13, VAR_8->location);
     VAR_9 = FUNC_3(VAR_7,
            FUNC_16(FUNC_20(VAR_12)),
            FUNC_16(VAR_9),
            VAR_7->p_last_srf,
            ((void*)0),
            0,
            VAR_8->location);
    }
    break;
   }
  case 4:
   {
    Node *VAR_23 = (Node *) FUNC_14(VAR_8->fields);
    Node *VAR_24 = (Node *) FUNC_17(VAR_8->fields);
    Node *VAR_25 = (Node *) FUNC_18(VAR_8->fields);
    Node *VAR_26 = (Node *) FUNC_13(VAR_8->fields);
    char *VAR_27;

    FUNC_0(FUNC_1(VAR_23, VAR_6));
    VAR_27 = FUNC_24(VAR_23);
    FUNC_0(FUNC_1(VAR_24, VAR_6));
    VAR_10 = FUNC_24(VAR_24);
    FUNC_0(FUNC_1(VAR_25, VAR_6));
    VAR_11 = FUNC_24(VAR_25);




    if (FUNC_25(VAR_27, FUNC_12(VAR_5)) != 0)
    {
     VAR_15 = CRERR_WRONG_DB;
     break;
    }


    VAR_13 = FUNC_22(VAR_7, VAR_10, VAR_11,
             VAR_8->location,
             &VAR_14);
    if (VAR_13 == ((void*)0))
    {
     VAR_15 = CRERR_NO_RTE;
     break;
    }


    if (FUNC_1(VAR_26, VAR_0))
    {
     VAR_9 = FUNC_28(VAR_7, VAR_13, VAR_8->location);
     break;
    }

    FUNC_0(FUNC_1(VAR_26, VAR_6));
    VAR_12 = FUNC_24(VAR_26);


    VAR_9 = FUNC_23(VAR_7, VAR_13, VAR_12, VAR_8->location,
          0, ((void*)0));
    if (VAR_9 == ((void*)0))
    {

     VAR_9 = FUNC_28(VAR_7, VAR_13, VAR_8->location);
     VAR_9 = FUNC_3(VAR_7,
            FUNC_16(FUNC_20(VAR_12)),
            FUNC_16(VAR_9),
            VAR_7->p_last_srf,
            ((void*)0),
            0,
            VAR_8->location);
    }
    break;
   }
  default:
   VAR_15 = CRERR_TOO_MANY;
   break;
 }
 if (VAR_7->p_post_columnref_hook != ((void*)0))
 {
  Node *VAR_28;

  VAR_28 = VAR_7->p_post_columnref_hook(VAR_7, VAR_8, VAR_9);
  if (VAR_9 == ((void*)0))
   VAR_9 = VAR_28;
  else if (VAR_28 != ((void*)0))
   FUNC_6(VAR_4,
     (FUNC_7(VAR_1),
      FUNC_8("column reference \"%s\" is ambiguous",
       FUNC_2(VAR_8->fields)),
      FUNC_21(VAR_7, VAR_8->location)));
 }




 if (VAR_9 == ((void*)0))
 {
  switch (VAR_15)
  {
   case CRERR_NO_COLUMN:
    FUNC_10(VAR_7, VAR_11, VAR_12, VAR_8->location);
    break;
   case CRERR_NO_RTE:
    FUNC_11(VAR_7, FUNC_19(VAR_10, VAR_11,
              VAR_8->location));
    break;
   case CRERR_WRONG_DB:
    FUNC_6(VAR_4,
      (FUNC_7(VAR_2),
       FUNC_8("cross-database references are not implemented: %s",
        FUNC_2(VAR_8->fields)),
       FUNC_21(VAR_7, VAR_8->location)));
    break;
   case CRERR_TOO_MANY:
    FUNC_6(VAR_4,
      (FUNC_7(VAR_3),
       FUNC_8("improper qualified name (too many dotted names): %s",
        FUNC_2(VAR_8->fields)),
       FUNC_21(VAR_7, VAR_8->location)));
    break;
  }
 }

 return VAR_9;
}
