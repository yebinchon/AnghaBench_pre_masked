
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef int uint32 ;
struct TYPE_6__ {int ReadRecPtr; int max_block_id; } ;
typedef TYPE_1__ XLogReaderState ;
typedef size_t RmgrId ;
typedef int RelFileNode ;
typedef scalar_t__ ForkNumber ;
typedef int BlockNumber ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_1__*,int,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_5(XLogReaderState *VAR_10)
{
 int VAR_11;
 RmgrId VAR_12 = FUNC_2(VAR_10);
 uint8 VAR_13 = FUNC_1(VAR_10);
 uint8 VAR_14 = VAR_13 & ~VAR_8;



 if (VAR_12 == VAR_1 && VAR_14 == VAR_4)
 {
 }
 else if (VAR_12 == VAR_1 && VAR_14 == VAR_5)
 {





 }
 else if (VAR_12 == VAR_2 && VAR_14 == VAR_6)
 {






 }
 else if (VAR_12 == VAR_2 && VAR_14 == VAR_7)
 {





 }
 else if (VAR_13 & VAR_9)
 {





  FUNC_3("WAL record modifies a relation, but record type is not recognized: "
     "lsn: %X/%X, rmgr: %s, info: %02X",
     (uint32) (VAR_10->ReadRecPtr >> 32), (uint32) (VAR_10->ReadRecPtr),
     VAR_3[VAR_12], VAR_13);
 }

 for (VAR_11 = 0; VAR_11 <= VAR_10->max_block_id; VAR_11++)
 {
  RelFileNode VAR_15;
  ForkNumber VAR_16;
  BlockNumber VAR_17;

  if (!FUNC_0(VAR_10, VAR_11, &VAR_15, &VAR_16, &VAR_17))
   continue;


  if (VAR_16 != VAR_0)
   continue;

  FUNC_4(VAR_16, VAR_15, VAR_17);
 }
}
