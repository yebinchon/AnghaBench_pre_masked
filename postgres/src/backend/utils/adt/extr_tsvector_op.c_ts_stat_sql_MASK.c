
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int text ;
struct TYPE_12__ {int natts; } ;
struct TYPE_11__ {TYPE_6__* tupdesc; int * vals; } ;
struct TYPE_10__ {int maxdepth; int weight; } ;
typedef TYPE_1__ TSVectorStat ;
typedef int * SPIPlanPtr ;
typedef int * Portal ;
typedef int MemoryContext ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 int * FUNC_4 (int *,int *,int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ,TYPE_6__*,int,int*) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int * FUNC_9 (char*,int ,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 int VAR_4 ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (int *) ;
 TYPE_1__* FUNC_19 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static TSVectorStat *
FUNC_20(MemoryContext VAR_5, text *VAR_6, text *VAR_7)
{
 char *VAR_8 = FUNC_18(VAR_6);
 TSVectorStat *VAR_9;
 bool VAR_10;
 Portal VAR_11;
 SPIPlanPtr VAR_12;

 if ((VAR_12 = FUNC_9(VAR_8, 0, ((void*)0))) == ((void*)0))

  FUNC_12(VAR_1, "SPI_prepare(\"%s\") failed", VAR_8);

 if ((VAR_11 = FUNC_4(((void*)0), VAR_12, ((void*)0), ((void*)0), 1)) == ((void*)0))

  FUNC_12(VAR_1, "SPI_cursor_open(\"%s\") failed", VAR_8);

 FUNC_3(VAR_11, 1, 100);

 if (VAR_3 == ((void*)0) ||
  VAR_3->tupdesc->natts != 1 ||
  !FUNC_0(FUNC_8(VAR_3->tupdesc, 1),
         VAR_4))
  FUNC_13(VAR_1,
    (FUNC_14(VAR_0),
     FUNC_15("ts_stat query must return one tsvector column")));

 VAR_9 = FUNC_1(VAR_5, sizeof(TSVectorStat));
 VAR_9->maxdepth = 1;

 if (VAR_7)
 {
  char *VAR_13;

  VAR_13 = FUNC_10(VAR_7);
  while (VAR_13 - FUNC_10(VAR_7) < FUNC_11(VAR_7))
  {
   if (FUNC_17(VAR_13) == 1)
   {
    switch (*VAR_13)
    {
     case 'A':
     case 'a':
      VAR_9->weight |= 1 << 3;
      break;
     case 'B':
     case 'b':
      VAR_9->weight |= 1 << 2;
      break;
     case 'C':
     case 'c':
      VAR_9->weight |= 1 << 1;
      break;
     case 'D':
     case 'd':
      VAR_9->weight |= 1;
      break;
     default:
      VAR_9->weight |= 0;
    }
   }
   VAR_13 += FUNC_17(VAR_13);
  }
 }

 while (VAR_2 > 0)
 {
  uint64 VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
  {
   Datum VAR_15 = FUNC_7(VAR_3->vals[VAR_14], VAR_3->tupdesc, 1, &VAR_10);

   if (!VAR_10)
    VAR_9 = FUNC_19(VAR_5, VAR_9, VAR_15);
  }

  FUNC_6(VAR_3);
  FUNC_3(VAR_11, 1, 100);
 }

 FUNC_6(VAR_3);
 FUNC_2(VAR_11);
 FUNC_5(VAR_12);
 FUNC_16(VAR_8);

 return VAR_9;
}
