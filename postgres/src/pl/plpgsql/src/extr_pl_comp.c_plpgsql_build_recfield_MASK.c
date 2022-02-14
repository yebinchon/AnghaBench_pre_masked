
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int firstfield; scalar_t__ dno; } ;
struct TYPE_6__ {scalar_t__ dtype; scalar_t__ recparentno; int nextfield; int dno; int rectupledescid; int fieldname; } ;
typedef TYPE_1__ PLpgSQL_recfield ;
typedef TYPE_2__ PLpgSQL_rec ;
typedef int PLpgSQL_datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ,char const*) ;

PLpgSQL_recfield *
FUNC_5(PLpgSQL_rec *VAR_3, const char *VAR_4)
{
 PLpgSQL_recfield *VAR_5;
 int VAR_6;


 VAR_6 = VAR_3->firstfield;
 while (VAR_6 >= 0)
 {
  PLpgSQL_recfield *VAR_7 = (PLpgSQL_recfield *) VAR_2[VAR_6];

  FUNC_0(VAR_7->dtype == VAR_1 &&
      VAR_7->recparentno == VAR_3->dno);
  if (FUNC_4(VAR_7->fieldname, VAR_4) == 0)
   return VAR_7;
  VAR_6 = VAR_7->nextfield;
 }


 VAR_5 = FUNC_1(sizeof(PLpgSQL_recfield));
 VAR_5->dtype = VAR_1;
 VAR_5->fieldname = FUNC_3(VAR_4);
 VAR_5->recparentno = VAR_3->dno;
 VAR_5->rectupledescid = VAR_0;

 FUNC_2((PLpgSQL_datum *) VAR_5);


 VAR_5->nextfield = VAR_3->firstfield;
 VAR_3->firstfield = VAR_5->dno;

 return VAR_5;
}
