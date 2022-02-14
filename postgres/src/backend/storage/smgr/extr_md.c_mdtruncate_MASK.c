
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_10__ {int mdfd_vfd; } ;
struct TYPE_9__ {int* md_num_open_segs; TYPE_2__** md_seg_fds; int smgr_rnode; } ;
typedef TYPE_1__* SMgrRelation ;
typedef TYPE_2__ MdfdVec ;
typedef size_t ForkNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,size_t,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (TYPE_1__*,size_t) ;
 int FUNC_10 (TYPE_1__*,size_t,TYPE_2__*) ;
 int FUNC_11 (int ,size_t) ;

void
FUNC_12(SMgrRelation VAR_5, ForkNumber VAR_6, BlockNumber VAR_7)
{
 BlockNumber VAR_8;
 BlockNumber VAR_9;
 int VAR_10;





 VAR_8 = FUNC_9(VAR_5, VAR_6);
 if (VAR_7 > VAR_8)
 {

  if (VAR_2)
   return;
  FUNC_6(VAR_1,
    (FUNC_8("could not truncate file \"%s\" to %u blocks: it's only %u blocks now",
      FUNC_11(VAR_5->smgr_rnode, VAR_6),
      VAR_7, VAR_8)));
 }
 if (VAR_7 == VAR_8)
  return;





 VAR_10 = VAR_5->md_num_open_segs[VAR_6];
 while (VAR_10 > 0)
 {
  MdfdVec *VAR_11;

  VAR_9 = (VAR_10 - 1) * VAR_3;

  VAR_11 = &VAR_5->md_seg_fds[VAR_6][VAR_10 - 1];

  if (VAR_9 > VAR_7)
  {




   if (FUNC_3(VAR_11->mdfd_vfd, 0, VAR_4) < 0)
    FUNC_6(VAR_1,
      (FUNC_7(),
       FUNC_8("could not truncate file \"%s\": %m",
        FUNC_2(VAR_11->mdfd_vfd))));

   if (!FUNC_4(VAR_5))
    FUNC_10(VAR_5, VAR_6, VAR_11);


   FUNC_0(VAR_11 != &VAR_5->md_seg_fds[VAR_6][0]);

   FUNC_1(VAR_11->mdfd_vfd);
   FUNC_5(VAR_5, VAR_6, VAR_10 - 1);
  }
  else if (VAR_9 + ((BlockNumber) VAR_3) > VAR_7)
  {







   BlockNumber VAR_12 = VAR_7 - VAR_9;

   if (FUNC_3(VAR_11->mdfd_vfd, (off_t) VAR_12 * VAR_0, VAR_4) < 0)
    FUNC_6(VAR_1,
      (FUNC_7(),
       FUNC_8("could not truncate file \"%s\" to %u blocks: %m",
        FUNC_2(VAR_11->mdfd_vfd),
        VAR_7)));
   if (!FUNC_4(VAR_5))
    FUNC_10(VAR_5, VAR_6, VAR_11);
  }
  else
  {




   break;
  }
  VAR_10--;
 }
}
