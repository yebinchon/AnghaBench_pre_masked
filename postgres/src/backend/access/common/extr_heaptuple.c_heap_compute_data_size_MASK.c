
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {int attlen; int attalign; } ;
struct TYPE_7__ {int natts; } ;
typedef int Size ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int ,int,int ) ;
 int FUNC_10 (int ,int ) ;

Size
FUNC_11(TupleDesc VAR_0,
        Datum *VAR_1,
        bool *VAR_2)
{
 Size VAR_3 = 0;
 int VAR_4;
 int VAR_5 = VAR_0->natts;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
 {
  Datum VAR_6;
  Form_pg_attribute VAR_7;

  if (VAR_2[VAR_4])
   continue;

  VAR_6 = VAR_1[VAR_4];
  VAR_7 = FUNC_4(VAR_0, VAR_4);

  if (FUNC_0(VAR_7) &&
   FUNC_5(FUNC_2(VAR_6)))
  {




   VAR_3 += FUNC_6(FUNC_2(VAR_6));
  }
  else if (VAR_7->attlen == -1 &&
     FUNC_7(FUNC_2(VAR_6)))
  {




   VAR_3 = FUNC_10(VAR_3, VAR_7->attalign);
   VAR_3 += FUNC_3(FUNC_1(VAR_6));
  }
  else
  {
   VAR_3 = FUNC_9(VAR_3, VAR_7->attalign,
            VAR_7->attlen, VAR_6);
   VAR_3 = FUNC_8(VAR_3, VAR_7->attlen,
             VAR_6);
  }
 }

 return VAR_3;
}
