
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kind; int location; int rexpr; int * lexpr; } ;
typedef int ParseState ;
typedef int Node ;
typedef TYPE_1__ A_Expr ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int,char const*,int *,int *,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int ,int *,int *,int) ;
 scalar_t__ FUNC_10 (int ,int,int ) ;
 int * FUNC_11 (int ,char*,int *,int *,int ) ;
 int FUNC_12 (int *,char const**) ;
 scalar_t__ VAR_8 ;
 int * FUNC_13 (int *,int *) ;

__attribute__((used)) static Node *
FUNC_14(ParseState *VAR_9, A_Expr *VAR_10)
{
 Node *VAR_11;
 Node *VAR_12;
 Node *VAR_13;
 Node *VAR_14;
 Node *VAR_15;
 Node *VAR_16;
 VAR_4 *VAR_7;


 VAR_11 = VAR_10->lexpr;
 VAR_7 = FUNC_1(VAR_4, VAR_10->rexpr);
 FUNC_0(FUNC_6(VAR_7) == 2);
 VAR_12 = (Node *) FUNC_5(VAR_7);
 VAR_13 = (Node *) FUNC_8(VAR_7);

 if (VAR_8)
 {
  int VAR_17;
  const char *VAR_18;

  VAR_17 = FUNC_12((Node *) VAR_10, &VAR_18);
  FUNC_4(VAR_9, VAR_17, VAR_18,
         VAR_11, VAR_13,
         VAR_10->location);


  VAR_11 = (Node *) FUNC_9(VAR_1, VAR_5, VAR_11, ((void*)0), -1);
  VAR_12 = (Node *) FUNC_9(VAR_1, VAR_5, VAR_12, ((void*)0), -1);
  VAR_13 = (Node *) FUNC_9(VAR_1, VAR_5, VAR_13, ((void*)0), -1);
 }
 switch (VAR_10->kind)
 {
  case 131:
   VAR_7 = FUNC_7(FUNC_11(VAR_0, ">=",
              VAR_11, VAR_12,
              VAR_10->location),
         FUNC_11(VAR_0, "<=",
              FUNC_2(VAR_11), VAR_13,
              VAR_10->location));
   VAR_14 = (Node *) FUNC_10(VAR_2, VAR_7, VAR_10->location);
   break;
  case 129:
   VAR_7 = FUNC_7(FUNC_11(VAR_0, "<",
              VAR_11, VAR_12,
              VAR_10->location),
         FUNC_11(VAR_0, ">",
              FUNC_2(VAR_11), VAR_13,
              VAR_10->location));
   VAR_14 = (Node *) FUNC_10(VAR_6, VAR_7, VAR_10->location);
   break;
  case 130:
   VAR_7 = FUNC_7(FUNC_11(VAR_0, ">=",
              VAR_11, VAR_12,
              VAR_10->location),
         FUNC_11(VAR_0, "<=",
              FUNC_2(VAR_11), VAR_13,
              VAR_10->location));
   VAR_15 = (Node *) FUNC_10(VAR_2, VAR_7, VAR_10->location);
   VAR_7 = FUNC_7(FUNC_11(VAR_0, ">=",
              FUNC_2(VAR_11), FUNC_2(VAR_13),
              VAR_10->location),
         FUNC_11(VAR_0, "<=",
              FUNC_2(VAR_11), FUNC_2(VAR_12),
              VAR_10->location));
   VAR_16 = (Node *) FUNC_10(VAR_2, VAR_7, VAR_10->location);
   VAR_7 = FUNC_7(VAR_15, VAR_16);
   VAR_14 = (Node *) FUNC_10(VAR_6, VAR_7, VAR_10->location);
   break;
  case 128:
   VAR_7 = FUNC_7(FUNC_11(VAR_0, "<",
              VAR_11, VAR_12,
              VAR_10->location),
         FUNC_11(VAR_0, ">",
              FUNC_2(VAR_11), VAR_13,
              VAR_10->location));
   VAR_15 = (Node *) FUNC_10(VAR_6, VAR_7, VAR_10->location);
   VAR_7 = FUNC_7(FUNC_11(VAR_0, "<",
              FUNC_2(VAR_11), FUNC_2(VAR_13),
              VAR_10->location),
         FUNC_11(VAR_0, ">",
              FUNC_2(VAR_11), FUNC_2(VAR_12),
              VAR_10->location));
   VAR_16 = (Node *) FUNC_10(VAR_6, VAR_7, VAR_10->location);
   VAR_7 = FUNC_7(VAR_15, VAR_16);
   VAR_14 = (Node *) FUNC_10(VAR_2, VAR_7, VAR_10->location);
   break;
  default:
   FUNC_3(VAR_3, "unrecognized A_Expr kind: %d", VAR_10->kind);
   VAR_14 = ((void*)0);
   break;
 }

 return FUNC_13(VAR_9, VAR_14);
}
