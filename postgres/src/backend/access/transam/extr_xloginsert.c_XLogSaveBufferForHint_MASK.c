
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_6__ {int delayChkpt; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_4__ {int pd_lower; int pd_upper; } ;
typedef int RelFileNode ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef TYPE_2__ PGAlignedBlock ;
typedef int ForkNumber ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *,int *) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *,int ,int ,int,int) ;
 int FUNC_9 (int,char*,int) ;

XLogRecPtr
FUNC_10(Buffer VAR_7, bool VAR_8)
{
 XLogRecPtr VAR_9 = VAR_1;
 XLogRecPtr VAR_10;
 XLogRecPtr VAR_11;




 FUNC_0(VAR_2->delayChkpt);




 VAR_11 = FUNC_5();







 VAR_10 = FUNC_2(VAR_7);

 if (VAR_10 <= VAR_11)
 {
  int VAR_12;
  PGAlignedBlock VAR_13;
  char *VAR_14 = (char *) FUNC_1(VAR_7);
  RelFileNode VAR_15;
  ForkNumber VAR_16;
  BlockNumber VAR_17;






  if (VAR_8)
  {

   Page VAR_18 = FUNC_3(VAR_7);
   uint16 VAR_19 = ((PageHeader) VAR_18)->pd_lower;
   uint16 VAR_20 = ((PageHeader) VAR_18)->pd_upper;

   FUNC_9(VAR_13.data, VAR_14, VAR_19);
   FUNC_9(VAR_13.data + VAR_20, VAR_14 + VAR_20, VAR_0 - VAR_20);
  }
  else
   FUNC_9(VAR_13.data, VAR_14, VAR_0);

  FUNC_6();

  VAR_12 = VAR_3;
  if (VAR_8)
   VAR_12 |= VAR_4;

  FUNC_4(VAR_7, &VAR_15, &VAR_16, &VAR_17);
  FUNC_8(0, &VAR_15, VAR_16, VAR_17, VAR_13.data, VAR_12);

  VAR_9 = FUNC_7(VAR_5, VAR_6);
 }

 return VAR_9;
}
