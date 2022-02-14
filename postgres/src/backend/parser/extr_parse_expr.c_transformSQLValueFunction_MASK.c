
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int op; void* type; void* typmod; } ;
typedef TYPE_1__ SQLValueFunction ;
typedef int ParseState ;
typedef int Node ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* FUNC_0 (int,void*) ;
 void* FUNC_1 (int,void*) ;

__attribute__((used)) static Node *
FUNC_2(ParseState *VAR_6, SQLValueFunction *VAR_7)
{




 switch (VAR_7->op)
 {
  case 141:
   VAR_7->type = VAR_0;
   break;
  case 138:
   VAR_7->type = VAR_5;
   break;
  case 135:
   VAR_7->type = VAR_5;
   VAR_7->typmod = FUNC_0(1, VAR_7->typmod);
   break;
  case 137:
   VAR_7->type = VAR_4;
   break;
  case 136:
   VAR_7->type = VAR_4;
   VAR_7->typmod = FUNC_1(1, VAR_7->typmod);
   break;
  case 133:
   VAR_7->type = VAR_2;
   break;
  case 130:
   VAR_7->type = VAR_2;
   VAR_7->typmod = FUNC_0(0, VAR_7->typmod);
   break;
  case 132:
   VAR_7->type = VAR_3;
   break;
  case 131:
   VAR_7->type = VAR_3;
   VAR_7->typmod = FUNC_1(0, VAR_7->typmod);
   break;
  case 140:
  case 134:
  case 128:
  case 129:
  case 142:
  case 139:
   VAR_7->type = VAR_1;
   break;
 }

 return (Node *) VAR_7;
}
