
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Var ;
typedef int TargetEntry ;
struct TYPE_9__ {int atttypmod; int attname; int attcollation; int atttypid; scalar_t__ attisdropped; } ;
struct TYPE_8__ {TYPE_1__* rd_rel; int rd_att; } ;
struct TYPE_7__ {int reltype; } ;
typedef TYPE_2__* Relation ;
typedef int List ;
typedef int Index ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (int ,int) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 int * FUNC_5 (int *,int,char*,int) ;
 int * FUNC_6 (int ,int,int ,int,int ,int ) ;
 char* FUNC_7 (int ) ;

List *
FUNC_8(Relation VAR_4,
          Index VAR_5)
{
 List *VAR_6 = VAR_3;
 int VAR_7;
 Var *VAR_8;
 TargetEntry *VAR_9;





 for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_4); VAR_7++)
 {
  Form_pg_attribute VAR_10 = FUNC_2(VAR_4->rd_att, VAR_7);
  char *VAR_11;

  if (VAR_10->attisdropped)
  {




   VAR_8 = (Var *) FUNC_4(VAR_0, -1, VAR_2);
   VAR_11 = ((void*)0);
  }
  else
  {
   VAR_8 = FUNC_6(VAR_5, VAR_7 + 1,
        VAR_10->atttypid, VAR_10->atttypmod,
        VAR_10->attcollation,
        0);
   VAR_11 = FUNC_7(FUNC_0(VAR_10->attname));
  }

  VAR_9 = FUNC_5((Expr *) VAR_8,
        VAR_7 + 1,
        VAR_11,
        0);

  VAR_6 = FUNC_3(VAR_6, VAR_9);
 }
 VAR_8 = FUNC_6(VAR_5, VAR_1,
      VAR_4->rd_rel->reltype,
      -1, VAR_2, 0);
 VAR_9 = FUNC_5((Expr *) VAR_8, VAR_1, ((void*)0), 1);
 VAR_6 = FUNC_3(VAR_6, VAR_9);

 return VAR_6;
}
