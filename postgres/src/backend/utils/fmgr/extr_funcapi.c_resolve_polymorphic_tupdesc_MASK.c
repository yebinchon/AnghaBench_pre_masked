
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int dim1; int* values; } ;
typedef TYPE_1__ oidvector ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_12__ {int atttypid; int attname; } ;
struct TYPE_11__ {int natts; } ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef TYPE_3__* Form_pg_attribute ;







 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int,int ,scalar_t__,int,int ) ;
 int FUNC_4 (TYPE_2__*,int,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int const,scalar_t__,int const) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_11(TupleDesc VAR_1, oidvector *VAR_2,
       Node *VAR_3)
{
 int VAR_4 = VAR_1->natts;
 int VAR_5 = VAR_2->dim1;
 bool VAR_6 = 0;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 Oid VAR_11 = VAR_0;
 Oid VAR_12 = VAR_0;
 Oid VAR_13 = VAR_0;
 Oid VAR_14 = VAR_0;
 int VAR_15;


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
 {
  switch (FUNC_2(VAR_1, VAR_15)->atttypid)
  {
   case 131:
    VAR_6 = 1;
    break;
   case 132:
    VAR_7 = 1;
    break;
   case 129:
    VAR_6 = 1;
    VAR_9 = 1;
    break;
   case 130:
    VAR_6 = 1;
    VAR_10 = 1;
    break;
   case 128:
    VAR_8 = 1;
    break;
   default:
    break;
  }
 }
 if (!VAR_6 && !VAR_7 &&
  !VAR_8)
  return 1;





 if (!VAR_3)
  return 0;

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++)
 {
  switch (VAR_2->values[VAR_15])
  {
   case 131:
   case 129:
   case 130:
    if (!FUNC_1(VAR_11))
     VAR_11 = FUNC_6(VAR_3, VAR_15);
    break;
   case 132:
    if (!FUNC_1(VAR_12))
     VAR_12 = FUNC_6(VAR_3, VAR_15);
    break;
   case 128:
    if (!FUNC_1(VAR_13))
     VAR_13 = FUNC_6(VAR_3, VAR_15);
    break;
   default:
    break;
  }
 }


 if (!FUNC_1(VAR_11) && !FUNC_1(VAR_12) &&
  !FUNC_1(VAR_13))
  return 0;


 if (VAR_6 && !FUNC_1(VAR_11))
 {
  if (FUNC_1(VAR_12))
   VAR_11 = FUNC_8(131,
               VAR_12,
               132);
  if (FUNC_1(VAR_13))
  {
   Oid VAR_16 = FUNC_8(131,
                VAR_13,
                128);


   if (FUNC_1(VAR_11) && VAR_11 != VAR_16)
    return 0;
   VAR_11 = VAR_16;
  }
 }

 if (VAR_7 && !FUNC_1(VAR_12))
  VAR_12 = FUNC_8(132,
            VAR_11,
            131);





 if (VAR_8 && !FUNC_1(VAR_13))
  return 0;


 if (VAR_9 && FUNC_9(VAR_11))
  return 0;


 if (VAR_10 && !FUNC_10(VAR_11))
  return 0;







 if (FUNC_1(VAR_11))
  VAR_14 = FUNC_7(VAR_11);
 else if (FUNC_1(VAR_12))
  VAR_14 = FUNC_7(VAR_12);

 if (FUNC_1(VAR_14))
 {





  Oid VAR_17 = FUNC_5(VAR_3);

  if (FUNC_1(VAR_17))
   VAR_14 = VAR_17;
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
 {
  Form_pg_attribute VAR_18 = FUNC_2(VAR_1, VAR_15);

  switch (VAR_18->atttypid)
  {
   case 131:
   case 129:
   case 130:
    FUNC_3(VAR_1, VAR_15 + 1,
           FUNC_0(VAR_18->attname),
           VAR_11,
           -1,
           0);
    FUNC_4(VAR_1, VAR_15 + 1, VAR_14);
    break;
   case 132:
    FUNC_3(VAR_1, VAR_15 + 1,
           FUNC_0(VAR_18->attname),
           VAR_12,
           -1,
           0);
    FUNC_4(VAR_1, VAR_15 + 1, VAR_14);
    break;
   case 128:
    FUNC_3(VAR_1, VAR_15 + 1,
           FUNC_0(VAR_18->attname),
           VAR_13,
           -1,
           0);

    break;
   default:
    break;
  }
 }

 return 1;
}
