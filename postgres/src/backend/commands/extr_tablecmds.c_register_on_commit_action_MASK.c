
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int deleting_subid; int creating_subid; scalar_t__ oncommit; int relid; } ;
typedef TYPE_1__ OnCommitItem ;
typedef scalar_t__ OnCommitAction ;
typedef int Oid ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;

void
FUNC_4(Oid VAR_5, OnCommitAction VAR_6)
{
 OnCommitItem *VAR_7;
 MemoryContext VAR_8;





 if (VAR_6 == VAR_2 || VAR_6 == VAR_3)
  return;

 VAR_8 = FUNC_1(VAR_0);

 VAR_7 = (OnCommitItem *) FUNC_3(sizeof(OnCommitItem));
 VAR_7->relid = VAR_5;
 VAR_7->oncommit = VAR_6;
 VAR_7->creating_subid = FUNC_0();
 VAR_7->deleting_subid = VAR_1;






 VAR_4 = FUNC_2(VAR_7, VAR_4);

 FUNC_1(VAR_8);
}
