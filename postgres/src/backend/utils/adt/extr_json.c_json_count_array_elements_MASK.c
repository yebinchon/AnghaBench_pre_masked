
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lex_level; int * strval; } ;
typedef TYPE_1__ JsonLexContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int *) ;

int
FUNC_5(JsonLexContext *VAR_6)
{
 JsonLexContext VAR_7;
 int VAR_8;






 FUNC_3(&VAR_7, VAR_6, sizeof(JsonLexContext));
 VAR_7.strval = ((void*)0);
 VAR_7.lex_level++;

 VAR_8 = 0;
 FUNC_1(VAR_1, &VAR_7, VAR_3);
 if (FUNC_2(&VAR_7) != VAR_2)
 {
  do
  {
   VAR_8++;
   FUNC_4(&VAR_7, &VAR_5);
  }
  while (FUNC_0(&VAR_7, VAR_4, ((void*)0)));
 }
 FUNC_1(VAR_0, &VAR_7, VAR_2);

 return VAR_8;
}
