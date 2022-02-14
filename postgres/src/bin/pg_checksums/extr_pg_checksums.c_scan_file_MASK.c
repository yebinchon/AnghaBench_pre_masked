
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_7__ {scalar_t__ data_checksum_version; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_5__ {int pd_checksum; } ;
typedef TYPE_1__* PageHeader ;
typedef TYPE_2__ PGAlignedBlock ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (int,int,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (char const*,int,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int ,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (int,int ,int) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_17, BlockNumber VAR_18)
{
 PGAlignedBlock VAR_19;
 PageHeader VAR_20 = (PageHeader) VAR_19.data;
 int VAR_21;
 BlockNumber VAR_22;
 int VAR_23;

 FUNC_0(VAR_14 == VAR_7 ||
     VAR_14 == VAR_6);

 VAR_23 = (VAR_14 == VAR_7) ? VAR_3 : VAR_2;
 VAR_21 = FUNC_5(VAR_17, VAR_4 | VAR_23, 0);

 if (VAR_21 < 0)
 {
  FUNC_7("could not open file \"%s\": %m", VAR_17);
  FUNC_3(1);
 }

 VAR_13++;

 for (VAR_22 = 0;; VAR_22++)
 {
  uint16 VAR_24;
  int VAR_25 = FUNC_10(VAR_21, VAR_19.data, VAR_0);

  if (VAR_25 == 0)
   break;
  if (VAR_25 != VAR_0)
  {
   if (VAR_25 < 0)
    FUNC_7("could not read block %u in file \"%s\": %m",
        VAR_22, VAR_17);
   else
    FUNC_7("could not read block %u in file \"%s\": read %d of %d",
        VAR_22, VAR_17, VAR_25, VAR_0);
   FUNC_3(1);
  }
  VAR_11++;


  if (FUNC_1(VAR_20))
   continue;

  VAR_24 = FUNC_6(VAR_19.data, VAR_22 + VAR_18 * VAR_8);
  VAR_12 += VAR_25;
  if (VAR_14 == VAR_6)
  {
   if (VAR_24 != VAR_20->pd_checksum)
   {
    if (VAR_1->data_checksum_version == VAR_5)
     FUNC_7("checksum verification failed in file \"%s\", block %u: calculated checksum %X but block contains %X",
         VAR_17, VAR_22, VAR_24, VAR_20->pd_checksum);
    VAR_10++;
   }
  }
  else if (VAR_14 == VAR_7)
  {
   int VAR_26;


   VAR_20->pd_checksum = VAR_24;


   if (FUNC_4(VAR_21, -VAR_0, VAR_9) < 0)
   {
    FUNC_7("seek failed for block %u in file \"%s\": %m", VAR_22, VAR_17);
    FUNC_3(1);
   }


   VAR_26 = FUNC_11(VAR_21, VAR_19.data, VAR_0);
   if (VAR_26 != VAR_0)
   {
    if (VAR_26 < 0)
     FUNC_7("could not write block %u in file \"%s\": %m",
         VAR_22, VAR_17);
    else
     FUNC_7("could not write block %u in file \"%s\": wrote %d of %d",
         VAR_22, VAR_17, VAR_26, VAR_0);
    FUNC_3(1);
   }
  }

  if (VAR_15)
   FUNC_9(0);
 }

 if (VAR_16)
 {
  if (VAR_14 == VAR_6)
   FUNC_8("checksums verified in file \"%s\"", VAR_17);
  if (VAR_14 == VAR_7)
   FUNC_8("checksums enabled in file \"%s\"", VAR_17);
 }

 FUNC_2(VAR_21);
}
