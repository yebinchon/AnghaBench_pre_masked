
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int core_yyscan_t ;
struct TYPE_6__ {char* scanbuf; } ;
struct TYPE_7__ {int have_lookahead; int lookahead_token; int lookahead_yylloc; char* lookahead_end; char lookahead_hold_char; int lookahead_yylval; TYPE_1__ core_yy_extra; } ;
typedef TYPE_2__ base_yy_extra_type ;
struct TYPE_8__ {int core_yystype; } ;
typedef TYPE_3__ YYSTYPE ;
typedef int YYLTYPE ;


 int FUNC_0 (int) ;







 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_1 (int *,int*,int ) ;
 TYPE_2__* FUNC_2 (int ) ;

int
FUNC_3(YYSTYPE *VAR_3, YYLTYPE *VAR_4, core_yyscan_t VAR_5)
{
 base_yy_extra_type *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;
 int VAR_8;
 int VAR_9;
 YYLTYPE VAR_10;


 if (VAR_6->have_lookahead)
 {
  VAR_7 = VAR_6->lookahead_token;
  VAR_3->core_yystype = VAR_6->lookahead_yylval;
  *VAR_4 = VAR_6->lookahead_yylloc;
  *(VAR_6->lookahead_end) = VAR_6->lookahead_hold_char;
  VAR_6->have_lookahead = 0;
 }
 else
  VAR_7 = FUNC_1(&(VAR_3->core_yystype), VAR_4, VAR_5);







 switch (VAR_7)
 {
  case 133:
   VAR_9 = 3;
   break;
  case 132:
   VAR_9 = 5;
   break;
  case 128:
   VAR_9 = 4;
   break;
  default:
   return VAR_7;
 }






 VAR_6->lookahead_end = VAR_6->core_yy_extra.scanbuf +
  *VAR_4 + VAR_9;
 FUNC_0(*(VAR_6->lookahead_end) == '\0');
 VAR_10 = *VAR_4;


 VAR_8 = FUNC_1(&(VAR_6->lookahead_yylval), VAR_4, VAR_5);
 VAR_6->lookahead_token = VAR_8;
 VAR_6->lookahead_yylloc = *VAR_4;

 *VAR_4 = VAR_10;


 VAR_6->lookahead_hold_char = *(VAR_6->lookahead_end);
 *(VAR_6->lookahead_end) = '\0';

 VAR_6->have_lookahead = 1;


 switch (VAR_7)
 {
  case 133:

   switch (VAR_8)
   {
    case 139:
    case 136:
    case 134:
    case 137:
    case 130:
     VAR_7 = VAR_0;
     break;
   }
   break;

  case 132:

   switch (VAR_8)
   {
    case 138:
    case 135:
     VAR_7 = VAR_1;
     break;
   }
   break;

  case 128:

   switch (VAR_8)
   {
    case 129:
    case 131:
     VAR_7 = VAR_2;
     break;
   }
   break;
 }

 return VAR_7;
}
