
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int (* json_struct_action ) (int ) ;
struct TYPE_11__ {int lex_level; } ;
struct TYPE_10__ {int semstate; int (* array_end ) (int ) ;int (* array_start ) (int ) ;} ;
typedef TYPE_1__ JsonSemAction ;
typedef TYPE_2__ JsonLexContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (int ,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(JsonLexContext *VAR_5, JsonSemAction *VAR_6)
{




 json_struct_action VAR_7 = VAR_6->array_start;
 json_struct_action VAR_8 = VAR_6->array_end;

 FUNC_0();

 if (VAR_7 != ((void*)0))
  (*VAR_7) (VAR_6->semstate);







 VAR_5->lex_level++;

 FUNC_2(VAR_1, VAR_5, VAR_3);
 if (FUNC_3(VAR_5) != VAR_2)
 {

  FUNC_4(VAR_5, VAR_6);

  while (FUNC_1(VAR_5, VAR_4, ((void*)0)))
   FUNC_4(VAR_5, VAR_6);
 }

 FUNC_2(VAR_0, VAR_5, VAR_2);

 VAR_5->lex_level--;

 if (VAR_8 != ((void*)0))
  (*VAR_8) (VAR_6->semstate);
}
