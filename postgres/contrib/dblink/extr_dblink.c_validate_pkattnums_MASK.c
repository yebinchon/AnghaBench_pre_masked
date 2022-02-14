
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {int* values; int dim1; } ;
typedef TYPE_1__ int2vector ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_11__ {scalar_t__ attisdropped; } ;
struct TYPE_10__ {TYPE_2__* rd_att; } ;
struct TYPE_9__ {int natts; } ;
typedef TYPE_3__* Relation ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 TYPE_6__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_2,
       int2vector *VAR_3, int32 VAR_4,
       int **VAR_5, int *VAR_6)
{
 TupleDesc VAR_7 = VAR_2->rd_att;
 int VAR_8 = VAR_7->natts;
 int VAR_9;


 VAR_4 = FUNC_0(VAR_4, VAR_3->dim1);


 if (VAR_4 <= 0)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("number of key attributes must be > 0")));


 *VAR_5 = (int *) FUNC_5(VAR_4 * sizeof(int));
 *VAR_6 = VAR_4;


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
 {
  int VAR_10 = VAR_3->values[VAR_9];
  int VAR_11;
  int VAR_12;


  if (VAR_10 <= 0 || VAR_10 > VAR_8)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("invalid attribute number %d", VAR_10)));


  VAR_11 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  {

   if (FUNC_1(VAR_7, VAR_12)->attisdropped)
    continue;

   if (++VAR_11 == VAR_10)
    break;
  }

  if (VAR_12 < VAR_8)
   (*VAR_5)[VAR_9] = VAR_12;
  else
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("invalid attribute number %d", VAR_10)));
 }
}
