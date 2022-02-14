
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int mdfd_vfd; } ;
typedef int SMgrRelation ;
typedef TYPE_1__ MdfdVec ;
typedef int ForkNumber ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static BlockNumber
FUNC_5(SMgrRelation VAR_2, ForkNumber VAR_3, MdfdVec *VAR_4)
{
 off_t VAR_5;

 VAR_5 = FUNC_1(VAR_4->mdfd_vfd);
 if (VAR_5 < 0)
  FUNC_2(VAR_1,
    (FUNC_3(),
     FUNC_4("could not seek to end of file \"%s\": %m",
      FUNC_0(VAR_4->mdfd_vfd))));

 return (BlockNumber) (VAR_5 / VAR_0);
}
