
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tag; int number_; int string_; int bool_; } ;
typedef int SB ;
typedef TYPE_1__ JsonNode ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__ const*,char const*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__ const*,char const*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int) ;

void FUNC_7(SB *VAR_0, const JsonNode *VAR_1, const char *VAR_2, int VAR_3)
{
 FUNC_0(FUNC_6(VAR_1->tag));
 switch (VAR_1->tag) {
  case 131:
   FUNC_5(VAR_0, "null");
   break;
  case 132:
   FUNC_5(VAR_0, VAR_1->bool_ ? "true" : "false");
   break;
  case 128:
   FUNC_4(VAR_0, VAR_1->string_);
   break;
  case 130:
   FUNC_2(VAR_0, VAR_1->number_);
   break;
  case 133:
   FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
   break;
  case 129:
   FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
   break;
  default:
   FUNC_0(0);
 }
}
