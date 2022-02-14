
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* md_num_open_segs; int ** md_seg_fds; } ;
typedef TYPE_1__* SMgrRelation ;
typedef int MdfdVec ;
typedef size_t ForkNumber ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(SMgrRelation VAR_1,
     ForkNumber VAR_2,
     int VAR_3)
{
 if (VAR_3 == 0)
 {
  if (VAR_1->md_num_open_segs[VAR_2] > 0)
  {
   FUNC_1(VAR_1->md_seg_fds[VAR_2]);
   VAR_1->md_seg_fds[VAR_2] = ((void*)0);
  }
 }
 else if (VAR_1->md_num_open_segs[VAR_2] == 0)
 {
  VAR_1->md_seg_fds[VAR_2] =
   FUNC_0(VAR_0, sizeof(MdfdVec) * VAR_3);
 }
 else
 {






  VAR_1->md_seg_fds[VAR_2] =
   FUNC_2(VAR_1->md_seg_fds[VAR_2],
      sizeof(MdfdVec) * VAR_3);
 }

 VAR_1->md_num_open_segs[VAR_2] = VAR_3;
}
