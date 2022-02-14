
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int key; } ;
struct TYPE_11__ {int t_tid; } ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef TYPE_1__* IndexTuple ;
typedef int GISTSTATE ;
typedef TYPE_2__ GISTENTRY ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,TYPE_1__*,int *,int ,TYPE_2__*,int*) ;
 TYPE_1__* FUNC_2 (int *,int ,int *,int*,int) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int,TYPE_2__*,int,TYPE_2__*,int,int *,int*) ;

IndexTuple
FUNC_5(Relation VAR_1, IndexTuple VAR_2, IndexTuple VAR_3, GISTSTATE *VAR_4)
{
 bool VAR_5 = 0;
 GISTENTRY VAR_6[VAR_0],
    VAR_7[VAR_0];
 bool VAR_8[VAR_0],
    VAR_9[VAR_0];
 Datum VAR_10[VAR_0];
 bool VAR_11[VAR_0];
 IndexTuple VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_1(VAR_4, VAR_1, VAR_2, ((void*)0),
       (OffsetNumber) 0, VAR_6, VAR_8);

 FUNC_1(VAR_4, VAR_1, VAR_3, ((void*)0),
       (OffsetNumber) 0, VAR_7, VAR_9);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_1); VAR_13++)
 {
  FUNC_4(VAR_4, VAR_13,
       VAR_6 + VAR_13, VAR_8[VAR_13],
       VAR_7 + VAR_13, VAR_9[VAR_13],
       VAR_10 + VAR_13, VAR_11 + VAR_13);

  if (VAR_5)

   continue;

  if (VAR_11[VAR_13])

   continue;

  if (!VAR_9[VAR_13])
  {
   if (VAR_8[VAR_13] ||
    !FUNC_3(VAR_4, VAR_13, VAR_6[VAR_13].key, VAR_10[VAR_13]))
    VAR_5 = 1;
  }
 }

 if (VAR_5)
 {

  VAR_12 = FUNC_2(VAR_4, VAR_1, VAR_10, VAR_11, 0);
  VAR_12->t_tid = VAR_2->t_tid;
 }

 return VAR_12;
}
