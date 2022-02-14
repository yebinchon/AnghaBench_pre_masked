
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int segno; int forknum; int rnode; } ;
struct TYPE_5__ {int mdfd_vfd; } ;
typedef int SMgrRelation ;
typedef TYPE_1__ MdfdVec ;
typedef TYPE_2__ FileTag ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int ,int ,int,int,int) ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,int ) ;

int
FUNC_6(const FileTag *VAR_6, char *VAR_7)
{
 SMgrRelation VAR_8 = FUNC_4(VAR_6->rnode, VAR_2);
 MdfdVec *VAR_9;
 char *VAR_10;


 VAR_10 = FUNC_2(VAR_8, VAR_6->forknum, VAR_6->segno);
 FUNC_5(VAR_7, VAR_10, VAR_3);
 FUNC_3(VAR_10);


 VAR_9 = FUNC_1(VAR_8,
      VAR_6->forknum,
      VAR_6->segno * (BlockNumber) VAR_4,
      0,
      VAR_1 | VAR_0);
 if (VAR_9 == ((void*)0))
  return -1;


 return FUNC_0(VAR_9->mdfd_vfd, VAR_5);
}
