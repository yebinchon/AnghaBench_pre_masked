
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* json_scalar_action ) (int ,char*,int) ;
struct TYPE_3__ {int semstate; int (* scalar ) (int ,char*,int) ;} ;
typedef int JsonTokenType ;
typedef TYPE_1__ JsonSemAction ;
typedef int JsonLexContext ;


 int VAR_0 ;





 int FUNC_0 (int *,int const,char**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static inline void
FUNC_4(JsonLexContext *VAR_1, JsonSemAction *VAR_2)
{
 char *VAR_3 = ((void*)0);
 json_scalar_action VAR_4 = VAR_2->scalar;
 char **VAR_5;
 JsonTokenType VAR_6 = FUNC_1(VAR_1);

 VAR_5 = VAR_4 == ((void*)0) ? ((void*)0) : &VAR_3;


 switch (VAR_6)
 {
  case 128:
   FUNC_0(VAR_1, 128, VAR_5);
   break;
  case 132:
   FUNC_0(VAR_1, 132, VAR_5);
   break;
  case 131:
   FUNC_0(VAR_1, 131, VAR_5);
   break;
  case 130:
   FUNC_0(VAR_1, 130, VAR_5);
   break;
  case 129:
   FUNC_0(VAR_1, 129, VAR_5);
   break;
  default:
   FUNC_2(VAR_0, VAR_1);
 }

 if (VAR_4 != ((void*)0))
  (*VAR_4) (VAR_2->semstate, VAR_3, VAR_6);
}
