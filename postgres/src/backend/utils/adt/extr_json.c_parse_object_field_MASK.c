
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* json_ofield_action ) (int ,char*,int) ;
struct TYPE_6__ {int semstate; int (* object_field_end ) (int ,char*,int) ;int (* object_field_start ) (int ,char*,int) ;} ;
typedef int JsonTokenType ;
typedef TYPE_1__ JsonSemAction ;
typedef int JsonLexContext ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(JsonLexContext *VAR_5, JsonSemAction *VAR_6)
{






 char *VAR_7 = ((void*)0);
 json_ofield_action VAR_8 = VAR_6->object_field_start;
 json_ofield_action VAR_9 = VAR_6->object_field_end;
 bool VAR_10;
 char **VAR_11 = ((void*)0);
 JsonTokenType VAR_12;

 if (VAR_8 != ((void*)0) || VAR_9 != ((void*)0))
  VAR_11 = &VAR_7;

 if (!FUNC_0(VAR_5, VAR_4, VAR_11))
  FUNC_6(VAR_1, VAR_5);

 FUNC_1(VAR_0, VAR_5, VAR_2);

 VAR_12 = FUNC_2(VAR_5);
 VAR_10 = VAR_12 == VAR_3;

 if (VAR_8 != ((void*)0))
  (*VAR_8) (VAR_6->semstate, VAR_7, VAR_10);

 switch (VAR_12)
 {
  case 128:
   FUNC_4(VAR_5, VAR_6);
   break;
  case 129:
   FUNC_3(VAR_5, VAR_6);
   break;
  default:
   FUNC_5(VAR_5, VAR_6);
 }

 if (VAR_9 != ((void*)0))
  (*VAR_9) (VAR_6->semstate, VAR_7, VAR_10);
}
