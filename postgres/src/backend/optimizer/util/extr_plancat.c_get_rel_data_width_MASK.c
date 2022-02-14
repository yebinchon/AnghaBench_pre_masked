
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_8__ {int atttypmod; int atttypid; scalar_t__ attisdropped; } ;
struct TYPE_7__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef TYPE_2__* Form_pg_attribute ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int32
FUNC_6(Relation VAR_0, int32 *VAR_1)
{
 int32 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 1; VAR_3 <= FUNC_1(VAR_0); VAR_3++)
 {
  Form_pg_attribute VAR_4 = FUNC_3(VAR_0->rd_att, VAR_3 - 1);
  int32 VAR_5;

  if (VAR_4->attisdropped)
   continue;


  if (VAR_1 != ((void*)0) && VAR_1[VAR_3] > 0)
  {
   VAR_2 += VAR_1[VAR_3];
   continue;
  }


  VAR_5 = FUNC_4(FUNC_2(VAR_0), VAR_3);
  if (VAR_5 <= 0)
  {
   VAR_5 = FUNC_5(VAR_4->atttypid, VAR_4->atttypmod);
   FUNC_0(VAR_5 > 0);
  }
  if (VAR_1 != ((void*)0))
   VAR_1[VAR_3] = VAR_5;
  VAR_2 += VAR_5;
 }

 return VAR_2;
}
