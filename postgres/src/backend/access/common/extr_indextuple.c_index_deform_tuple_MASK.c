
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int bits8 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_12__ {int attcacheoff; int attlen; int attalign; } ;
struct TYPE_11__ {int t_info; } ;
struct TYPE_10__ {int natts; } ;
typedef int IndexTupleData ;
typedef TYPE_2__* IndexTuple ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int,int,char*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ,int,char*) ;
 scalar_t__ FUNC_7 (int,int *) ;
 int FUNC_8 (TYPE_3__*,char*) ;

void
FUNC_9(IndexTuple VAR_1, TupleDesc VAR_2,
       Datum *VAR_3, bool *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = VAR_2->natts;
 int VAR_7;
 char *VAR_8;
 int VAR_9;
 bits8 *VAR_10;
 bool VAR_11 = 0;


 FUNC_0(VAR_6 <= VAR_0);


 VAR_10 = (bits8 *) ((char *) VAR_1 + sizeof(IndexTupleData));

 VAR_8 = (char *) VAR_1 + FUNC_1(VAR_1->t_info);
 VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  Form_pg_attribute VAR_12 = FUNC_3(VAR_2, VAR_7);

  if (VAR_5 && FUNC_7(VAR_7, VAR_10))
  {
   VAR_3[VAR_7] = (Datum) 0;
   VAR_4[VAR_7] = 1;
   VAR_11 = 1;
   continue;
  }

  VAR_4[VAR_7] = 0;

  if (!VAR_11 && VAR_12->attcacheoff >= 0)
   VAR_9 = VAR_12->attcacheoff;
  else if (VAR_12->attlen == -1)
  {






   if (!VAR_11 &&
    VAR_9 == FUNC_5(VAR_9, VAR_12->attalign))
    VAR_12->attcacheoff = VAR_9;
   else
   {
    VAR_9 = FUNC_6(VAR_9, VAR_12->attalign, -1,
          VAR_8 + VAR_9);
    VAR_11 = 1;
   }
  }
  else
  {

   VAR_9 = FUNC_5(VAR_9, VAR_12->attalign);

   if (!VAR_11)
    VAR_12->attcacheoff = VAR_9;
  }

  VAR_3[VAR_7] = FUNC_8(VAR_12, VAR_8 + VAR_9);

  VAR_9 = FUNC_4(VAR_9, VAR_12->attlen, VAR_8 + VAR_9);

  if (VAR_12->attlen <= 0)
   VAR_11 = 1;
 }
}
