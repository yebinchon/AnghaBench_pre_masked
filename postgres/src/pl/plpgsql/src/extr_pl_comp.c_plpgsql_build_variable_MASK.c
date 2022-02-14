
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ttype; int typoid; } ;
struct TYPE_6__ {int lineno; int isnull; int freeval; int dno; int value; TYPE_2__* datatype; int refname; int dtype; } ;
typedef int PLpgSQL_variable ;
typedef TYPE_1__ PLpgSQL_var ;
typedef TYPE_2__ PLpgSQL_type ;
typedef int PLpgSQL_rec ;
typedef int PLpgSQL_datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,int,TYPE_2__*,int ,int) ;
 int FUNC_8 (int ,int ,char const*) ;
 int FUNC_9 (char const*) ;

PLpgSQL_variable *
FUNC_10(const char *VAR_4, int VAR_5, PLpgSQL_type *VAR_6,
        bool VAR_7)
{
 PLpgSQL_variable *VAR_8;

 switch (VAR_6->ttype)
 {
  case 128:
   {

    PLpgSQL_var *VAR_9;

    VAR_9 = FUNC_5(sizeof(PLpgSQL_var));
    VAR_9->dtype = VAR_2;
    VAR_9->refname = FUNC_9(VAR_4);
    VAR_9->lineno = VAR_5;
    VAR_9->datatype = VAR_6;



    VAR_9->value = 0;
    VAR_9->isnull = 1;
    VAR_9->freeval = 0;

    FUNC_6((PLpgSQL_datum *) VAR_9);
    if (VAR_7)
     FUNC_8(VAR_3,
            VAR_9->dno,
            VAR_4);
    VAR_8 = (PLpgSQL_variable *) VAR_9;
    break;
   }
  case 129:
   {

    PLpgSQL_rec *VAR_10;

    VAR_10 = FUNC_7(VAR_4, VAR_5,
             VAR_6, VAR_6->typoid,
             VAR_7);
    VAR_8 = (PLpgSQL_variable *) VAR_10;
    break;
   }
  case 130:
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("variable \"%s\" has pseudo-type %s",
       VAR_4, FUNC_4(VAR_6->typoid))));
   VAR_8 = ((void*)0);
   break;
  default:
   FUNC_0(VAR_1, "unrecognized ttype: %d", VAR_6->ttype);
   VAR_8 = ((void*)0);
   break;
 }

 return VAR_8;
}
