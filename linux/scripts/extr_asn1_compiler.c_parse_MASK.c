
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int flags; struct token* name; TYPE_1__* element; } ;
struct token {scalar_t__ token_type; int line; char* content; } ;
struct TYPE_2__ {struct type* type_def; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char* VAR_3 ;
 int FUNC_2 (int ,char*,char*,int,char*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (struct token**,struct token*,int *) ;
 int VAR_5 ;
 struct type* VAR_6 ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct token *VAR_7;
 struct type *VAR_8;


 VAR_8 = VAR_6;
 do {
  VAR_7 = VAR_8->name;

  if (VAR_7[0].token_type != VAR_1 ||
      VAR_7[1].token_type != VAR_0)
   FUNC_0();
  VAR_7 += 2;

  VAR_8->element = FUNC_3(&VAR_7, VAR_8[1].name, ((void*)0));
  VAR_8->element->type_def = VAR_8;

  if (VAR_7 != VAR_8[1].name) {
   FUNC_2(VAR_5, "%s:%d: Parse error at token '%s'\n",
    VAR_3, VAR_7->line, VAR_7->content);
   FUNC_1(1);
  }

 } while (VAR_8++, !(VAR_8->flags & VAR_2));

 FUNC_4("Extracted %u actions\n", VAR_4);
}
