
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int mdfd_vfd; int mdfd_segno; } ;
struct TYPE_9__ {int* md_num_open_segs; TYPE_2__** md_seg_fds; } ;
typedef TYPE_1__* SMgrRelation ;
typedef TYPE_2__ MdfdVec ;
typedef size_t ForkNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,size_t,int) ;
 char* FUNC_3 (TYPE_1__*,size_t,int) ;
 int FUNC_4 (TYPE_1__*,size_t,TYPE_2__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static MdfdVec *
FUNC_6(SMgrRelation VAR_3, ForkNumber VAR_4, BlockNumber VAR_5,
     int VAR_6)
{
 MdfdVec *VAR_7;
 int VAR_8;
 char *VAR_9;

 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5);


 VAR_8 = FUNC_1(VAR_9, VAR_0 | VAR_1 | VAR_6);

 FUNC_5(VAR_9);

 if (VAR_8 < 0)
  return ((void*)0);

 if (VAR_5 <= VAR_3->md_num_open_segs[VAR_4])
  FUNC_2(VAR_3, VAR_4, VAR_5 + 1);


 VAR_7 = &VAR_3->md_seg_fds[VAR_4][VAR_5];
 VAR_7->mdfd_vfd = VAR_8;
 VAR_7->mdfd_segno = VAR_5;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_7) <= ((BlockNumber) VAR_2));


 return VAR_7;
}
