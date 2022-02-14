
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int (* json_struct_action ) (int ) ;
struct TYPE_12__ {int lex_level; } ;
struct TYPE_11__ {int semstate; int (* object_end ) (int ) ;int (* object_start ) (int ) ;} ;
typedef int JsonTokenType ;
typedef TYPE_1__ JsonSemAction ;
typedef TYPE_2__ JsonLexContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int const VAR_3 ;

 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (int ,TYPE_2__*,int const) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(JsonLexContext *VAR_4, JsonSemAction *VAR_5)
{




 json_struct_action VAR_6 = VAR_5->object_start;
 json_struct_action VAR_7 = VAR_5->object_end;
 JsonTokenType VAR_8;

 FUNC_0();

 if (VAR_6 != ((void*)0))
  (*VAR_6) (VAR_5->semstate);







 VAR_4->lex_level++;


 FUNC_2(VAR_1, VAR_4, VAR_3);

 VAR_8 = FUNC_3(VAR_4);
 switch (VAR_8)
 {
  case 128:
   FUNC_4(VAR_4, VAR_5);
   while (FUNC_1(VAR_4, VAR_2, ((void*)0)))
    FUNC_4(VAR_4, VAR_5);
   break;
  case 129:
   break;
  default:

   FUNC_5(VAR_1, VAR_4);
 }

 FUNC_2(VAR_0, VAR_4, 129);

 VAR_4->lex_level--;

 if (VAR_7 != ((void*)0))
  (*VAR_7) (VAR_5->semstate);
}
