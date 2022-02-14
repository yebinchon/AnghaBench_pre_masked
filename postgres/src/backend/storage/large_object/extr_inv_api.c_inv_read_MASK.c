
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef int int64 ;
typedef int int32 ;
typedef int bytea ;
struct TYPE_7__ {scalar_t__ pageno; } ;
struct TYPE_6__ {int offset; int flags; int snapshot; int id; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_1__ LargeObjectDesc ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_largeobject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (TYPE_2__*,int **,int*,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (char*,int,int) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ,int ,int,int *) ;
 int FUNC_18 (int ) ;
 int * FUNC_19 (int ,int ) ;

int
FUNC_20(LargeObjectDesc *VAR_13, char *VAR_14, int VAR_15)
{
 int VAR_16 = 0;
 int64 VAR_17;
 int64 VAR_18;
 int VAR_19;
 int32 VAR_20 = (int32) (VAR_13->offset / VAR_10);
 uint64 VAR_21;
 ScanKeyData VAR_22[2];
 SysScanDesc VAR_23;
 HeapTuple VAR_24;

 FUNC_0(FUNC_6(VAR_13));
 FUNC_0(VAR_14 != ((void*)0));

 if ((VAR_13->flags & VAR_9) == 0)
  FUNC_10(VAR_5,
    (FUNC_11(VAR_4),
     FUNC_12("permission denied for large object %u",
      VAR_13->id)));

 if (VAR_15 <= 0)
  return 0;

 FUNC_15();

 FUNC_7(&VAR_22[0],
    VAR_0,
    VAR_2, VAR_7,
    FUNC_5(VAR_13->id));

 FUNC_7(&VAR_22[1],
    VAR_1,
    VAR_3, VAR_6,
    FUNC_3(VAR_20));

 VAR_23 = FUNC_17(VAR_11, VAR_12,
         VAR_13->snapshot, 2, VAR_22);

 while ((VAR_24 = FUNC_19(VAR_23, VAR_8)) != ((void*)0))
 {
  Form_pg_largeobject VAR_25;
  bytea *VAR_26;
  bool VAR_27;

  if (FUNC_2(VAR_24))
   FUNC_9(VAR_5, "null field found in pg_largeobject");
  VAR_25 = (Form_pg_largeobject) FUNC_1(VAR_24);






  VAR_21 = ((uint64) VAR_25->pageno) * VAR_10;
  if (VAR_21 > VAR_13->offset)
  {
   VAR_17 = VAR_21 - VAR_13->offset;
   VAR_17 = (VAR_17 <= (VAR_15 - VAR_16)) ? VAR_17 : (VAR_15 - VAR_16);
   FUNC_4(VAR_14 + VAR_16, 0, VAR_17);
   VAR_16 += VAR_17;
   VAR_13->offset += VAR_17;
  }

  if (VAR_16 < VAR_15)
  {
   FUNC_0(VAR_13->offset >= VAR_21);
   VAR_18 = (int) (VAR_13->offset - VAR_21);
   FUNC_0(VAR_18 >= 0 && VAR_18 < VAR_10);

   FUNC_13(VAR_25, &VAR_26, &VAR_19, &VAR_27);
   if (VAR_19 > VAR_18)
   {
    VAR_17 = VAR_19 - VAR_18;
    VAR_17 = (VAR_17 <= (VAR_15 - VAR_16)) ? VAR_17 : (VAR_15 - VAR_16);
    FUNC_14(VAR_14 + VAR_16, FUNC_8(VAR_26) + VAR_18, VAR_17);
    VAR_16 += VAR_17;
    VAR_13->offset += VAR_17;
   }
   if (VAR_27)
    FUNC_16(VAR_26);
  }

  if (VAR_16 >= VAR_15)
   break;
 }

 FUNC_18(VAR_23);

 return VAR_16;
}
