
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_15__ {int mdfd_vfd; } ;
struct TYPE_12__ {int relNode; int dbNode; int spcNode; } ;
struct TYPE_13__ {int backend; TYPE_1__ node; } ;
struct TYPE_14__ {TYPE_2__ smgr_rnode; } ;
typedef TYPE_3__* SMgrRelation ;
typedef TYPE_4__ MdfdVec ;
typedef int ForkNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int,int ,int ,int ,int ,int,int) ;
 int FUNC_5 (int ,int,int ,int ,int ,int ) ;
 int VAR_6 ;
 TYPE_4__* FUNC_6 (TYPE_3__*,int ,int,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int,int ,...) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*,int ,TYPE_4__*) ;

void
FUNC_14(SMgrRelation VAR_7, ForkNumber VAR_8, BlockNumber VAR_9,
  char *VAR_10, bool VAR_11)
{
 off_t VAR_12;
 int VAR_13;
 MdfdVec *VAR_14;






 FUNC_5(VAR_8, VAR_9,
           VAR_7->smgr_rnode.node.spcNode,
           VAR_7->smgr_rnode.node.dbNode,
           VAR_7->smgr_rnode.node.relNode,
           VAR_7->smgr_rnode.backend);

 VAR_14 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_11,
      VAR_4 | VAR_3);

 VAR_12 = (off_t) VAR_0 * (VAR_9 % ((BlockNumber) VAR_5));

 FUNC_0(VAR_12 < (off_t) VAR_0 * VAR_5);

 VAR_13 = FUNC_2(VAR_14->mdfd_vfd, VAR_10, VAR_0, VAR_12, VAR_6);

 FUNC_4(VAR_8, VAR_9,
          VAR_7->smgr_rnode.node.spcNode,
          VAR_7->smgr_rnode.node.dbNode,
          VAR_7->smgr_rnode.node.relNode,
          VAR_7->smgr_rnode.backend,
          VAR_13,
          VAR_0);

 if (VAR_13 != VAR_0)
 {
  if (VAR_13 < 0)
   FUNC_7(VAR_2,
     (FUNC_9(),
      FUNC_11("could not write block %u in file \"%s\": %m",
       VAR_9, FUNC_1(VAR_14->mdfd_vfd))));

  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_11("could not write block %u in file \"%s\": wrote only %d of %d bytes",
      VAR_9,
      FUNC_1(VAR_14->mdfd_vfd),
      VAR_13, VAR_0),
     FUNC_10("Check free disk space.")));
 }

 if (!VAR_11 && !FUNC_3(VAR_7))
  FUNC_13(VAR_7, VAR_8, VAR_14);
}
