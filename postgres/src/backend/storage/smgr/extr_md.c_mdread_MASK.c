
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_11__ {int mdfd_vfd; } ;
struct TYPE_8__ {int relNode; int dbNode; int spcNode; } ;
struct TYPE_9__ {int backend; TYPE_1__ node; } ;
struct TYPE_10__ {TYPE_2__ smgr_rnode; } ;
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
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (int ,int,int ,int ,int ,int ,int,int) ;
 int FUNC_5 (int ,int,int ,int ,int ,int ) ;
 int VAR_7 ;
 TYPE_4__* FUNC_6 (TYPE_3__*,int ,int,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int,int ,...) ;
 scalar_t__ VAR_8 ;

void
FUNC_11(SMgrRelation VAR_9, ForkNumber VAR_10, BlockNumber VAR_11,
    char *VAR_12)
{
 off_t VAR_13;
 int VAR_14;
 MdfdVec *VAR_15;

 FUNC_5(VAR_10, VAR_11,
          VAR_9->smgr_rnode.node.spcNode,
          VAR_9->smgr_rnode.node.dbNode,
          VAR_9->smgr_rnode.node.relNode,
          VAR_9->smgr_rnode.backend);

 VAR_15 = FUNC_6(VAR_9, VAR_10, VAR_11, 0,
      VAR_4 | VAR_3);

 VAR_13 = (off_t) VAR_0 * (VAR_11 % ((BlockNumber) VAR_6));

 FUNC_0(VAR_13 < (off_t) VAR_0 * VAR_6);

 VAR_14 = FUNC_2(VAR_15->mdfd_vfd, VAR_12, VAR_0, VAR_13, VAR_7);

 FUNC_4(VAR_10, VAR_11,
            VAR_9->smgr_rnode.node.spcNode,
            VAR_9->smgr_rnode.node.dbNode,
            VAR_9->smgr_rnode.node.relNode,
            VAR_9->smgr_rnode.backend,
            VAR_14,
            VAR_0);

 if (VAR_14 != VAR_0)
 {
  if (VAR_14 < 0)
   FUNC_7(VAR_2,
     (FUNC_9(),
      FUNC_10("could not read block %u in file \"%s\": %m",
       VAR_11, FUNC_1(VAR_15->mdfd_vfd))));
  if (VAR_8 || VAR_5)
   FUNC_3(VAR_12, 0, VAR_0);
  else
   FUNC_7(VAR_2,
     (FUNC_8(VAR_1),
      FUNC_10("could not read block %u in file \"%s\": read only %d of %d bytes",
       VAR_11, FUNC_1(VAR_15->mdfd_vfd),
       VAR_14, VAR_0)));
 }
}
