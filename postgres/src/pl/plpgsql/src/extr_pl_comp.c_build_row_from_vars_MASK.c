
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_13__ {int rectypeid; } ;
struct TYPE_12__ {char* refname; int lineno; int nfields; int rowtupdesc; int * varnos; int * fieldnames; int dtype; } ;
struct TYPE_11__ {TYPE_1__* datatype; } ;
struct TYPE_10__ {int dtype; int refname; int dno; int isconst; } ;
struct TYPE_9__ {int atttypmod; int collation; int typoid; } ;
typedef TYPE_2__ PLpgSQL_variable ;
typedef TYPE_3__ PLpgSQL_var ;
typedef TYPE_4__ PLpgSQL_row ;
typedef TYPE_5__ PLpgSQL_rec ;
typedef int Oid ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int FUNC_2 (int ,int,int ,int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 void* FUNC_5 (int) ;
 TYPE_4__* FUNC_6 (int) ;

__attribute__((used)) static PLpgSQL_row *
FUNC_7(PLpgSQL_variable **VAR_3, int VAR_4)
{
 PLpgSQL_row *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(sizeof(PLpgSQL_row));
 VAR_5->dtype = VAR_2;
 VAR_5->refname = "(unnamed row)";
 VAR_5->lineno = -1;
 VAR_5->rowtupdesc = FUNC_1(VAR_4);
 VAR_5->nfields = VAR_4;
 VAR_5->fieldnames = FUNC_5(VAR_4 * sizeof(char *));
 VAR_5->varnos = FUNC_5(VAR_4 * sizeof(int));

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  PLpgSQL_variable *VAR_7 = VAR_3[VAR_6];
  Oid VAR_8;
  int32 VAR_9;
  Oid VAR_10;


  FUNC_0(!VAR_7->isconst);

  switch (VAR_7->dtype)
  {
   case 128:
   case 130:
    VAR_8 = ((PLpgSQL_var *) VAR_7)->datatype->typoid;
    VAR_9 = ((PLpgSQL_var *) VAR_7)->datatype->atttypmod;
    VAR_10 = ((PLpgSQL_var *) VAR_7)->datatype->collation;
    break;

   case 129:

    VAR_8 = ((PLpgSQL_rec *) VAR_7)->rectypeid;
    VAR_9 = -1;
    VAR_10 = VAR_1;
    break;

   default:
    FUNC_4(VAR_0, "unrecognized dtype: %d", VAR_7->dtype);
    VAR_8 = VAR_1;
    VAR_9 = 0;
    VAR_10 = VAR_1;
    break;
  }

  VAR_5->fieldnames[VAR_6] = VAR_7->refname;
  VAR_5->varnos[VAR_6] = VAR_7->dno;

  FUNC_2(VAR_5->rowtupdesc, VAR_6 + 1,
         VAR_7->refname,
         VAR_8, VAR_9,
         0);
  FUNC_3(VAR_5->rowtupdesc, VAR_6 + 1, VAR_10);
 }

 return VAR_5;
}
