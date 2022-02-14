
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xlrec ;
struct TYPE_2__ {int forkNum; int rnode; } ;
typedef TYPE_1__ xl_smgr_create ;
typedef int RelFileNode ;
typedef int ForkNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(const RelFileNode *VAR_3, ForkNumber VAR_4)
{
 xl_smgr_create VAR_5;




 VAR_5.rnode = *VAR_3;
 VAR_5.forkNum = VAR_4;

 FUNC_0();
 FUNC_2((char *) &VAR_5, sizeof(VAR_5));
 FUNC_1(VAR_0, VAR_1 | VAR_2);
}
