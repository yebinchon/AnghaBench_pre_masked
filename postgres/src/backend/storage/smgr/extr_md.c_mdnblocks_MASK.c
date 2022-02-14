
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* md_num_open_segs; int ** md_seg_fds; } ;
typedef TYPE_1__* SMgrRelation ;
typedef int MdfdVec ;
typedef size_t ForkNumber ;
typedef size_t BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (TYPE_1__*,size_t,size_t,int ) ;
 size_t FUNC_2 (TYPE_1__*,size_t,int *) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (TYPE_1__*,size_t,int ) ;

BlockNumber
FUNC_5(SMgrRelation VAR_3, ForkNumber VAR_4)
{
 MdfdVec *VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_0);
 BlockNumber VAR_6;
 BlockNumber VAR_7 = 0;


 FUNC_0(VAR_3->md_num_open_segs[VAR_4] > 0);
 VAR_7 = VAR_3->md_num_open_segs[VAR_4] - 1;
 VAR_5 = &VAR_3->md_seg_fds[VAR_4][VAR_7];

 for (;;)
 {
  VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_6 > ((BlockNumber) VAR_2))
   FUNC_3(VAR_1, "segment too big");
  if (VAR_6 < ((BlockNumber) VAR_2))
   return (VAR_7 * ((BlockNumber) VAR_2)) + VAR_6;




  VAR_7++;
  VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_7, 0);
  if (VAR_5 == ((void*)0))
   return VAR_7 * ((BlockNumber) VAR_2);
 }
}
