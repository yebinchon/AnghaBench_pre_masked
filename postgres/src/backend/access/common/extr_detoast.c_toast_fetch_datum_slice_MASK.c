
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct varlena {int dummy; } ;
struct varatt_external {int va_extsize; int va_valueid; int va_toastrelid; } ;
typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_10__ {int rd_att; } ;
typedef int SysScanDesc ;
typedef int SnapshotData ;
typedef int ScanKeyData ;
typedef TYPE_1__* Relation ;
typedef struct varlena* Pointer ;
typedef int * HeapTuple ;
typedef int AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct varlena* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct varlena*,int) ;
 int FUNC_7 (struct varlena*,int) ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_9 (struct varatt_external,struct varlena*) ;
 scalar_t__ FUNC_10 (struct varatt_external) ;
 int FUNC_11 (struct varlena*) ;
 int FUNC_12 (struct varlena*) ;
 scalar_t__ FUNC_13 (struct varlena*) ;
 char* FUNC_14 (struct varlena*) ;
 char* FUNC_15 (struct varlena*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_16 (struct varlena*) ;
 int FUNC_17 (struct varlena*) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int *,int,int ,int*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (char*,char*,int) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (TYPE_1__*,TYPE_1__*,int *,int,int *) ;
 int FUNC_24 (int ) ;
 int * FUNC_25 (int ,int ) ;
 int FUNC_26 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_27 (int ,int ) ;
 int FUNC_28 (TYPE_1__**,int,int ) ;
 int FUNC_29 (TYPE_1__*,int ,TYPE_1__***,int*) ;

__attribute__((used)) static struct varlena *
FUNC_30(struct varlena *VAR_13, int32 VAR_14, int32 VAR_15)
{
 Relation VAR_16;
 Relation *VAR_17;
 ScanKeyData VAR_18[3];
 int VAR_19;
 SysScanDesc VAR_20;
 HeapTuple VAR_21;
 TupleDesc VAR_22;
 struct varlena *VAR_23;
 struct varatt_external VAR_24;
 int32 VAR_25;
 int32 VAR_26;
 int32 VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int32 VAR_31;
 int32 VAR_32;
 int VAR_33;
 Pointer VAR_34;
 bool VAR_35;
 char *VAR_36;
 int32 VAR_37;
 int32 VAR_38;
 int32 VAR_39;
 int VAR_40;
 int VAR_41;
 SnapshotData VAR_42;

 if (!FUNC_12(VAR_13))
  FUNC_18(VAR_4, "toast_fetch_datum_slice shouldn't be called for non-ondisk datums");


 FUNC_9(VAR_24, VAR_13);






 FUNC_0(!FUNC_10(VAR_24) || 0 == VAR_14);

 VAR_25 = VAR_24.va_extsize;
 VAR_33 = ((VAR_25 - 1) / VAR_10) + 1;

 if (VAR_14 >= VAR_25)
 {
  VAR_14 = 0;
  VAR_15 = 0;
 }






 if (FUNC_10(VAR_24) && VAR_15 > 0)
  VAR_15 = VAR_15 + sizeof(int32);

 if (((VAR_14 + VAR_15) > VAR_25) || VAR_15 < 0)
  VAR_15 = VAR_25 - VAR_14;

 VAR_23 = (struct varlena *) FUNC_22(VAR_15 + VAR_11);

 if (FUNC_10(VAR_24))
  FUNC_7(VAR_23, VAR_15 + VAR_11);
 else
  FUNC_6(VAR_23, VAR_15 + VAR_11);

 if (VAR_15 == 0)
  return VAR_23;

 VAR_29 = VAR_14 / VAR_10;
 VAR_30 = (VAR_14 + VAR_15 - 1) / VAR_10;
 VAR_28 = (VAR_30 - VAR_29) + 1;

 VAR_31 = VAR_14 % VAR_10;
 VAR_32 = (VAR_14 + VAR_15 - 1) % VAR_10;




 VAR_16 = FUNC_27(VAR_24.va_toastrelid, VAR_0);
 VAR_22 = VAR_16->rd_att;


 VAR_41 = FUNC_29(VAR_16,
         VAR_0,
         &VAR_17,
         &VAR_40);





 FUNC_8(&VAR_18[0],
    (AttrNumber) 1,
    VAR_1, VAR_8,
    FUNC_4(VAR_24.va_valueid));




 if (VAR_28 == 1)
 {
  FUNC_8(&VAR_18[1],
     (AttrNumber) 2,
     VAR_1, VAR_5,
     FUNC_3(VAR_29));
  VAR_19 = 2;
 }
 else
 {
  FUNC_8(&VAR_18[1],
     (AttrNumber) 2,
     VAR_2, VAR_6,
     FUNC_3(VAR_29));
  FUNC_8(&VAR_18[2],
     (AttrNumber) 2,
     VAR_3, VAR_7,
     FUNC_3(VAR_30));
  VAR_19 = 3;
 }






 FUNC_20(&VAR_42);
 VAR_27 = VAR_29;
 VAR_20 = FUNC_23(VAR_16, VAR_17[VAR_41],
             &VAR_42, VAR_19, VAR_18);
 while ((VAR_21 = FUNC_25(VAR_20, VAR_9)) != ((void*)0))
 {



  VAR_26 = FUNC_1(FUNC_19(VAR_21, 2, VAR_22, &VAR_35));
  FUNC_0(!VAR_35);
  VAR_34 = FUNC_2(FUNC_19(VAR_21, 3, VAR_22, &VAR_35));
  FUNC_0(!VAR_35);
  if (!FUNC_11(VAR_34))
  {
   VAR_37 = FUNC_16(VAR_34) - VAR_11;
   VAR_36 = FUNC_14(VAR_34);
  }
  else if (FUNC_13(VAR_34))
  {

   VAR_37 = FUNC_17(VAR_34) - VAR_12;
   VAR_36 = FUNC_15(VAR_34);
  }
  else
  {

   FUNC_18(VAR_4, "found toasted toast chunk for toast value %u in %s",
     VAR_24.va_valueid,
     FUNC_5(VAR_16));
   VAR_37 = 0;
   VAR_36 = ((void*)0);
  }




  if ((VAR_26 != VAR_27) || (VAR_26 > VAR_30) || (VAR_26 < VAR_29))
   FUNC_18(VAR_4, "unexpected chunk number %d (expected %d) for toast value %u in %s",
     VAR_26, VAR_27,
     VAR_24.va_valueid,
     FUNC_5(VAR_16));
  if (VAR_26 < VAR_33 - 1)
  {
   if (VAR_37 != VAR_10)
    FUNC_18(VAR_4, "unexpected chunk size %d (expected %d) in chunk %d of %d for toast value %u in %s when fetching slice",
      VAR_37, (int) VAR_10,
      VAR_26, VAR_33,
      VAR_24.va_valueid,
      FUNC_5(VAR_16));
  }
  else if (VAR_26 == VAR_33 - 1)
  {
   if ((VAR_26 * VAR_10 + VAR_37) != VAR_25)
    FUNC_18(VAR_4, "unexpected chunk size %d (expected %d) in final chunk %d for toast value %u in %s when fetching slice",
      VAR_37,
      (int) (VAR_25 - VAR_26 * VAR_10),
      VAR_26,
      VAR_24.va_valueid,
      FUNC_5(VAR_16));
  }
  else
   FUNC_18(VAR_4, "unexpected chunk number %d (out of range %d..%d) for toast value %u in %s",
     VAR_26,
     0, VAR_33 - 1,
     VAR_24.va_valueid,
     FUNC_5(VAR_16));




  VAR_38 = 0;
  VAR_39 = VAR_37 - 1;
  if (VAR_26 == VAR_29)
   VAR_38 = VAR_31;
  if (VAR_26 == VAR_30)
   VAR_39 = VAR_32;

  FUNC_21(FUNC_14(VAR_23) +
      (VAR_26 * VAR_10 - VAR_14) + VAR_38,
      VAR_36 + VAR_38,
      (VAR_39 - VAR_38) + 1);

  VAR_27++;
 }




 if (VAR_27 != (VAR_30 + 1))
  FUNC_18(VAR_4, "missing chunk number %d for toast value %u in %s",
    VAR_27,
    VAR_24.va_valueid,
    FUNC_5(VAR_16));




 FUNC_24(VAR_20);
 FUNC_28(VAR_17, VAR_40, VAR_0);
 FUNC_26(VAR_16, VAR_0);

 return VAR_23;
}
