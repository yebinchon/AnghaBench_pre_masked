
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_9__ {scalar_t__ attlen; char attstorage; int atttypmod; int atttypid; int attalign; scalar_t__ attisdropped; } ;
struct TYPE_8__ {TYPE_1__* rd_att; } ;
struct TYPE_7__ {int natts; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* Form_pg_attribute ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5(Relation VAR_2)
{
 int32 VAR_3 = 0;
 bool VAR_4 = 0;
 bool VAR_5 = 0;
 TupleDesc VAR_6 = VAR_2->rd_att;
 int32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->natts; VAR_8++)
 {
  Form_pg_attribute VAR_9 = FUNC_2(VAR_6, VAR_8);

  if (VAR_9->attisdropped)
   continue;
  VAR_3 = FUNC_3(VAR_3, VAR_9->attalign);
  if (VAR_9->attlen > 0)
  {

   VAR_3 += VAR_9->attlen;
  }
  else
  {
   int32 VAR_10 = FUNC_4(VAR_9->atttypid,
               VAR_9->atttypmod);

   if (VAR_10 < 0)
    VAR_4 = 1;
   else
    VAR_3 += VAR_10;
   if (VAR_9->attstorage != 'p')
    VAR_5 = 1;
  }
 }
 if (!VAR_5)
  return 0;
 if (VAR_4)
  return 1;
 VAR_7 = FUNC_1(VAR_0 +
       FUNC_0(VAR_6->natts)) +
  FUNC_1(VAR_3);
 return (VAR_7 > VAR_1);
}
