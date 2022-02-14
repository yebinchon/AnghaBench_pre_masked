
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int flags; int * snapshot; scalar_t__ offset; int subid; } ;
typedef int * Snapshot ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_1__ LargeObjectDesc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int * FUNC_4 (int *,int ) ;
 int VAR_11 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int VAR_12 ;
 int FUNC_8 (int,int *) ;
 scalar_t__ FUNC_9 (int,int ,int ,int *) ;

LargeObjectDesc *
FUNC_10(Oid VAR_13, int VAR_14, MemoryContext VAR_15)
{
 LargeObjectDesc *VAR_16;
 Snapshot VAR_17 = ((void*)0);
 int VAR_18 = 0;






 if (VAR_14 & VAR_10)
  VAR_18 |= VAR_8 | VAR_7;
 if (VAR_14 & VAR_9)
  VAR_18 |= VAR_7;

 if (VAR_18 == 0)
  FUNC_5(VAR_6,
    (FUNC_6(VAR_4),
     FUNC_7("invalid flags for opening a large object: %d",
      VAR_14)));


 if (VAR_18 & VAR_8)
  VAR_17 = ((void*)0);
 else
  VAR_17 = FUNC_0();


 if (!FUNC_8(VAR_13, VAR_17))
  FUNC_5(VAR_6,
    (FUNC_6(VAR_5),
     FUNC_7("large object %u does not exist", VAR_13)));


 if ((VAR_18 & VAR_7) != 0)
 {
  if (!VAR_12 &&
   FUNC_9(VAR_13,
            FUNC_2(),
            VAR_1,
            VAR_17) != VAR_0)
   FUNC_5(VAR_6,
     (FUNC_6(VAR_3),
      FUNC_7("permission denied for large object %u",
       VAR_13)));
 }
 if ((VAR_18 & VAR_8) != 0)
 {
  if (!VAR_12 &&
   FUNC_9(VAR_13,
            FUNC_2(),
            VAR_2,
            VAR_17) != VAR_0)
   FUNC_5(VAR_6,
     (FUNC_6(VAR_3),
      FUNC_7("permission denied for large object %u",
       VAR_13)));
 }


 VAR_16 = (LargeObjectDesc *) FUNC_3(VAR_15,
             sizeof(LargeObjectDesc));
 VAR_16->id = VAR_13;
 VAR_16->subid = FUNC_1();
 VAR_16->offset = 0;
 VAR_16->flags = VAR_18;







 if (VAR_17)
  VAR_17 = FUNC_4(VAR_17,
             VAR_11);
 VAR_16->snapshot = VAR_17;

 return VAR_16;
}
