
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mdfd_vfd; } ;
struct TYPE_5__ {int* md_num_open_segs; TYPE_2__** md_seg_fds; } ;
typedef TYPE_1__* SMgrRelation ;
typedef TYPE_2__ MdfdVec ;
typedef size_t ForkNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t,int ) ;

void
FUNC_2(SMgrRelation VAR_0, ForkNumber VAR_1)
{
 int VAR_2 = VAR_0->md_num_open_segs[VAR_1];


 if (VAR_2 == 0)
  return;


 while (VAR_2 > 0)
 {
  MdfdVec *VAR_3 = &VAR_0->md_seg_fds[VAR_1][VAR_2 - 1];


  if (VAR_3->mdfd_vfd >= 0)
  {
   FUNC_0(VAR_3->mdfd_vfd);
   VAR_3->mdfd_vfd = -1;
  }

  VAR_2--;
 }


 FUNC_1(VAR_0, VAR_1, 0);
}
