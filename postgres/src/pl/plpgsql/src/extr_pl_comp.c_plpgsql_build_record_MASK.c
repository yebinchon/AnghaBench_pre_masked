
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lineno; int firstfield; int refname; int dno; int * erh; int rectypeid; int * datatype; int dtype; } ;
typedef int PLpgSQL_type ;
typedef TYPE_1__ PLpgSQL_rec ;
typedef int PLpgSQL_datum ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char const*) ;

PLpgSQL_rec *
FUNC_4(const char *VAR_2, int VAR_3,
      PLpgSQL_type *VAR_4, Oid VAR_5,
      bool VAR_6)
{
 PLpgSQL_rec *VAR_7;

 VAR_7 = FUNC_0(sizeof(PLpgSQL_rec));
 VAR_7->dtype = VAR_0;
 VAR_7->refname = FUNC_3(VAR_2);
 VAR_7->lineno = VAR_3;

 VAR_7->datatype = VAR_4;
 VAR_7->rectypeid = VAR_5;
 VAR_7->firstfield = -1;
 VAR_7->erh = ((void*)0);
 FUNC_1((PLpgSQL_datum *) VAR_7);
 if (VAR_6)
  FUNC_2(VAR_1, VAR_7->dno, VAR_7->refname);

 return VAR_7;
}
