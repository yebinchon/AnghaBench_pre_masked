
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int mdfd_vfd; int mdfd_segno; } ;
struct TYPE_7__ {int node; } ;
struct TYPE_8__ {TYPE_1__ smgr_rnode; } ;
typedef TYPE_2__* SMgrRelation ;
typedef TYPE_3__ MdfdVec ;
typedef int ForkNumber ;
typedef int FileTag ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(SMgrRelation VAR_4, ForkNumber VAR_5, MdfdVec *VAR_6)
{
 FileTag VAR_7;

 FUNC_3(VAR_7, VAR_4->smgr_rnode.node, VAR_5, VAR_6->mdfd_segno);


 FUNC_0(!FUNC_5(VAR_4));

 if (!FUNC_4(&VAR_7, VAR_2, 0 ))
 {
  FUNC_7(VAR_0,
    (FUNC_9("could not forward fsync request because request queue is full")));

  if (FUNC_2(VAR_6->mdfd_vfd, VAR_3) < 0)
   FUNC_7(FUNC_6(VAR_1),
     (FUNC_8(),
      FUNC_9("could not fsync file \"%s\": %m",
       FUNC_1(VAR_6->mdfd_vfd))));
 }
}
