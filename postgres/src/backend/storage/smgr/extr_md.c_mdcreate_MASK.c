
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dbNode; int spcNode; } ;
struct TYPE_10__ {TYPE_1__ node; } ;
struct TYPE_9__ {scalar_t__ mdfd_segno; scalar_t__ mdfd_vfd; } ;
struct TYPE_8__ {scalar_t__* md_num_open_segs; TYPE_3__** md_seg_fds; TYPE_4__ smgr_rnode; } ;
typedef TYPE_2__* SMgrRelation ;
typedef TYPE_3__ MdfdVec ;
typedef size_t ForkNumber ;
typedef scalar_t__ File ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,size_t,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int VAR_5 ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (TYPE_4__,size_t) ;

void
FUNC_9(SMgrRelation VAR_6, ForkNumber VAR_7, bool VAR_8)
{
 MdfdVec *VAR_9;
 char *VAR_10;
 File VAR_11;

 if (VAR_8 && VAR_6->md_num_open_segs[VAR_7] > 0)
  return;

 FUNC_0(VAR_6->md_num_open_segs[VAR_7] == 0);
 FUNC_2(VAR_6->smgr_rnode.node.spcNode,
       VAR_6->smgr_rnode.node.dbNode,
       VAR_8);

 VAR_10 = FUNC_8(VAR_6->smgr_rnode, VAR_7);

 VAR_11 = FUNC_1(VAR_10, VAR_3 | VAR_1 | VAR_2 | VAR_4);

 if (VAR_11 < 0)
 {
  int VAR_12 = VAR_5;

  if (VAR_8)
   VAR_11 = FUNC_1(VAR_10, VAR_3 | VAR_4);
  if (VAR_11 < 0)
  {

   VAR_5 = VAR_12;
   FUNC_4(VAR_0,
     (FUNC_5(),
      FUNC_6("could not create file \"%s\": %m", VAR_10)));
  }
 }

 FUNC_7(VAR_10);

 FUNC_3(VAR_6, VAR_7, 1);
 VAR_9 = &VAR_6->md_seg_fds[VAR_7][0];
 VAR_9->mdfd_vfd = VAR_11;
 VAR_9->mdfd_segno = 0;
}
