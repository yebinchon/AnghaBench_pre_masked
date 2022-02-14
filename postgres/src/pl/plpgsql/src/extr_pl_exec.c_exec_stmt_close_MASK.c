
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* datums; } ;
struct TYPE_8__ {size_t curvar; } ;
struct TYPE_7__ {char* refname; int value; scalar_t__ isnull; } ;
typedef int * Portal ;
typedef TYPE_1__ PLpgSQL_var ;
typedef TYPE_2__ PLpgSQL_stmt_close ;
typedef TYPE_3__ PLpgSQL_execstate ;
typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_8(PLpgSQL_execstate *VAR_4, PLpgSQL_stmt_close *VAR_5)
{
 PLpgSQL_var *VAR_6;
 Portal VAR_7;
 char *VAR_8;
 MemoryContext VAR_9;





 VAR_6 = (PLpgSQL_var *) (VAR_4->datums[VAR_5->curvar]);
 if (VAR_6->isnull)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_0),
     FUNC_6("cursor variable \"%s\" is null", VAR_6->refname)));


 VAR_9 = FUNC_0(FUNC_7(VAR_4));
 VAR_8 = FUNC_3(VAR_6->value);
 FUNC_0(VAR_9);

 VAR_7 = FUNC_2(VAR_8);
 if (VAR_7 == ((void*)0))
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("cursor \"%s\" does not exist", VAR_8)));





 FUNC_1(VAR_7);

 return VAR_3;
}
