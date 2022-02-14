
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int attisdropped; int attname; } ;
struct TYPE_6__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef TYPE_2__* Form_pg_attribute ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(Relation VAR_1, const char *VAR_2, bool VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
 {
  Form_pg_attribute VAR_5 = FUNC_1(VAR_1->rd_att, VAR_4);

  if (FUNC_2(&(VAR_5->attname), VAR_2) == 0 && !VAR_5->attisdropped)
   return VAR_4 + 1;
 }

 if (VAR_3)
 {
  if ((VAR_4 = FUNC_3(VAR_2)) != VAR_0)
   return VAR_4;
 }


 return VAR_0;
}
