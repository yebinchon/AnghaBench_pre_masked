
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_expr_kind; int p_hasTargetSRFs; int * p_last_srf; } ;
typedef TYPE_1__ ParseState ;
typedef int Node ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int) ;

void
FUNC_9(ParseState *VAR_2, Node *VAR_3, int VAR_4)
{
 const char *VAR_5;
 bool VAR_6;
 VAR_5 = ((void*)0);
 VAR_6 = 0;
 switch (VAR_2->p_expr_kind)
 {
  case 147:
   FUNC_0(0);
   break;
  case 144:

   break;
  case 150:
  case 149:
   VAR_5 = FUNC_2("set-returning functions are not allowed in JOIN conditions");
   break;
  case 158:

   VAR_6 = 1;
   break;
  case 159:



   if (VAR_2->p_last_srf != VAR_3)
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("set-returning functions must appear at top level of FROM"),
       FUNC_8(VAR_2,
           FUNC_7(VAR_2->p_last_srf))));
   break;
  case 133:
   VAR_6 = 1;
   break;
  case 141:
   VAR_5 = FUNC_2("set-returning functions are not allowed in policy expressions");
   break;
  case 154:
   VAR_6 = 1;
   break;
  case 160:
   VAR_6 = 1;
   break;
  case 128:
  case 129:

   VAR_2->p_hasTargetSRFs = 1;
   break;
  case 131:
  case 130:
  case 132:
   VAR_5 = FUNC_2("set-returning functions are not allowed in window definitions");
   break;
  case 139:
  case 151:

   VAR_2->p_hasTargetSRFs = 1;
   break;
  case 137:
  case 136:

   VAR_6 = 1;
   break;
  case 155:
  case 145:

   VAR_2->p_hasTargetSRFs = 1;
   break;
  case 163:

   VAR_2->p_hasTargetSRFs = 1;
   break;
  case 148:
  case 146:
   VAR_6 = 1;
   break;
  case 140:
   VAR_6 = 1;
   break;
  case 135:

   VAR_6 = 1;
   break;
  case 134:

   VAR_2->p_hasTargetSRFs = 1;
   break;
  case 166:
  case 162:
   VAR_5 = FUNC_2("set-returning functions are not allowed in check constraints");
   break;
  case 165:
  case 157:
   VAR_5 = FUNC_2("set-returning functions are not allowed in DEFAULT expressions");
   break;
  case 153:
   VAR_5 = FUNC_2("set-returning functions are not allowed in index expressions");
   break;
  case 152:
   VAR_5 = FUNC_2("set-returning functions are not allowed in index predicates");
   break;
  case 168:
   VAR_5 = FUNC_2("set-returning functions are not allowed in transform expressions");
   break;
  case 161:
   VAR_5 = FUNC_2("set-returning functions are not allowed in EXECUTE parameters");
   break;
  case 138:
   VAR_5 = FUNC_2("set-returning functions are not allowed in trigger WHEN conditions");
   break;
  case 143:
   VAR_5 = FUNC_2("set-returning functions are not allowed in partition bound");
   break;
  case 142:
   VAR_5 = FUNC_2("set-returning functions are not allowed in partition key expressions");
   break;
  case 167:
   VAR_5 = FUNC_2("set-returning functions are not allowed in CALL arguments");
   break;
  case 164:
   VAR_5 = FUNC_2("set-returning functions are not allowed in COPY FROM WHERE conditions");
   break;
  case 156:
   VAR_5 = FUNC_2("set-returning functions are not allowed in column generation expressions");
   break;
 }
 if (VAR_5)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_6("%s", VAR_5),
     FUNC_8(VAR_2, VAR_4)));
 if (VAR_6)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),

     FUNC_5("set-returning functions are not allowed in %s",
      FUNC_1(VAR_2->p_expr_kind)),
     FUNC_8(VAR_2, VAR_4)));
}
