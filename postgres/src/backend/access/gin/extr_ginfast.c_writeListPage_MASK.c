
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_4__ {size_t ntuples; scalar_t__ rightlink; } ;
typedef TYPE_1__ ginxlogInsertListPage ;
typedef int XLogRecPtr ;
struct TYPE_6__ {int maxoff; scalar_t__ rightlink; } ;
struct TYPE_5__ {char* data; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_2__ PGAlignedBlock ;
typedef int OffsetNumber ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,int ,int,int) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int VAR_8 ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,char*,size_t) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 (char*,scalar_t__,int) ;

__attribute__((used)) static int32
FUNC_22(Relation VAR_9, Buffer VAR_10,
     IndexTuple *VAR_11, int32 VAR_12, BlockNumber VAR_13)
{
 Page VAR_14 = FUNC_1(VAR_10);
 int32 VAR_15,
    VAR_16,
    VAR_17 = 0;
 OffsetNumber VAR_18,
    VAR_19;
 PGAlignedBlock VAR_20;
 char *VAR_21;

 FUNC_13();

 FUNC_3(VAR_10, VAR_3);

 VAR_19 = VAR_2;
 VAR_21 = VAR_20.data;

 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
 {
  int VAR_22 = FUNC_6(VAR_11[VAR_15]);

  FUNC_21(VAR_21, VAR_11[VAR_15], VAR_22);
  VAR_21 += VAR_22;
  VAR_17 += VAR_22;

  VAR_18 = FUNC_8(VAR_14, (Item) VAR_11[VAR_15], VAR_22, VAR_19, 0, 0);

  if (VAR_18 == VAR_5)
   FUNC_20(VAR_1, "failed to add item to index page in \"%s\"",
     FUNC_11(VAR_9));

  VAR_19++;
 }

 FUNC_0(VAR_17 <= VAR_0);

 FUNC_4(VAR_14)->rightlink = VAR_13;






 if (VAR_13 == VAR_4)
 {
  FUNC_5(VAR_14);
  FUNC_4(VAR_14)->maxoff = 1;
 }
 else
 {
  FUNC_4(VAR_14)->maxoff = 0;
 }

 FUNC_7(VAR_10);

 if (FUNC_12(VAR_9))
 {
  ginxlogInsertListPage VAR_23;
  XLogRecPtr VAR_24;

  VAR_23.rightlink = VAR_13;
  VAR_23.ntuples = VAR_12;

  FUNC_15();
  FUNC_19((char *) &VAR_23, sizeof(ginxlogInsertListPage));

  FUNC_18(0, VAR_10, VAR_6);
  FUNC_17(0, VAR_20.data, VAR_17);

  VAR_24 = FUNC_16(VAR_7, VAR_8);
  FUNC_10(VAR_14, VAR_24);
 }


 VAR_16 = FUNC_9(VAR_14);

 FUNC_14(VAR_10);

 FUNC_2();

 return VAR_16;
}
