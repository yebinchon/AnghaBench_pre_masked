
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {int rd_smgr; } ;
typedef TYPE_1__* Relation ;
typedef int ForkNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;

uint64
FUNC_2(Relation VAR_3, ForkNumber VAR_4)
{
 uint64 VAR_5 = 0;


 FUNC_0(VAR_3);


 if (VAR_4 == VAR_1)
 {
  for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
   VAR_5 += FUNC_1(VAR_3->rd_smgr, VAR_6);
 }
 else
  VAR_5 = FUNC_1(VAR_3->rd_smgr, VAR_4);

 return VAR_5 * VAR_0;
}
