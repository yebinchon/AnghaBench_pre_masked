
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_1__*,size_t) ;

void
FUNC_7(SMgrRelation VAR_2, ForkNumber VAR_3)
{
 int VAR_4;





 FUNC_6(VAR_2, VAR_3);

 VAR_4 = VAR_2->md_num_open_segs[VAR_3];

 while (VAR_4 > 0)
 {
  MdfdVec *VAR_5 = &VAR_2->md_seg_fds[VAR_3][VAR_4 - 1];

  if (FUNC_1(VAR_5->mdfd_vfd, VAR_1) < 0)
   FUNC_3(FUNC_2(VAR_0),
     (FUNC_4(),
      FUNC_5("could not fsync file \"%s\": %m",
       FUNC_0(VAR_5->mdfd_vfd))));
  VAR_4--;
 }
}
