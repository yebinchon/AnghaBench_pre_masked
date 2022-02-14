
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


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ,int ,int,int,int ) ;

void
FUNC_3(SMgrRelation VAR_4, ForkNumber VAR_5,
   BlockNumber VAR_6, BlockNumber VAR_7)
{




 while (VAR_7 > 0)
 {
  BlockNumber VAR_8 = VAR_7;
  off_t VAR_9;
  MdfdVec *VAR_10;
  int VAR_11,
     VAR_12;

  VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, 1 ,
       VAR_1);





  if (!VAR_10)
   return;


  VAR_11 = VAR_6 / VAR_2;


  VAR_12 = (VAR_6 + VAR_7 - 1) / VAR_2;
  if (VAR_11 != VAR_12)
   VAR_8 = VAR_2 - (VAR_6 % ((BlockNumber) VAR_2));

  FUNC_0(VAR_8 >= 1);
  FUNC_0(VAR_8 <= VAR_7);

  VAR_9 = (off_t) VAR_0 * (VAR_6 % ((BlockNumber) VAR_2));

  FUNC_1(VAR_10->mdfd_vfd, VAR_9, (off_t) VAR_0 * VAR_8, VAR_3);

  VAR_7 -= VAR_8;
  VAR_6 += VAR_8;
 }
}
