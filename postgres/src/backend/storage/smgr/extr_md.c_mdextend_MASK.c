
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_13__ {int mdfd_vfd; } ;
struct TYPE_12__ {int smgr_rnode; } ;
typedef TYPE_1__* SMgrRelation ;
typedef TYPE_2__ MdfdVec ;
typedef int ForkNumber ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ,...) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_13 (int ,int ) ;

void
FUNC_14(SMgrRelation VAR_8, ForkNumber VAR_9, BlockNumber VAR_10,
   char *VAR_11, bool VAR_12)
{
 off_t VAR_13;
 int VAR_14;
 MdfdVec *VAR_15;
 if (VAR_10 == VAR_5)
  FUNC_6(VAR_3,
    (FUNC_7(VAR_2),
     FUNC_10("cannot extend file \"%s\" beyond %u blocks",
      FUNC_13(VAR_8->smgr_rnode, VAR_9),
      VAR_5)));

 VAR_15 = FUNC_4(VAR_8, VAR_9, VAR_10, VAR_12, VAR_4);

 VAR_13 = (off_t) VAR_0 * (VAR_10 % ((BlockNumber) VAR_6));

 FUNC_0(VAR_13 < (off_t) VAR_0 * VAR_6);

 if ((VAR_14 = FUNC_2(VAR_15->mdfd_vfd, VAR_11, VAR_0, VAR_13, VAR_7)) != VAR_0)
 {
  if (VAR_14 < 0)
   FUNC_6(VAR_3,
     (FUNC_8(),
      FUNC_10("could not extend file \"%s\": %m",
       FUNC_1(VAR_15->mdfd_vfd)),
      FUNC_9("Check free disk space.")));

  FUNC_6(VAR_3,
    (FUNC_7(VAR_1),
     FUNC_10("could not extend file \"%s\": wrote only %d of %d bytes at block %u",
      FUNC_1(VAR_15->mdfd_vfd),
      VAR_14, VAR_0, VAR_10),
     FUNC_9("Check free disk space.")));
 }

 if (!VAR_12 && !FUNC_3(VAR_8))
  FUNC_12(VAR_8, VAR_9, VAR_15);

 FUNC_0(FUNC_5(VAR_8, VAR_9, VAR_15) <= ((BlockNumber) VAR_6));
}
