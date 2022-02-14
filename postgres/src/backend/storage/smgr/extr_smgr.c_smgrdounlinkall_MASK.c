
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* smgr_unlink ) (int ,int ,int) ;int (* smgr_close ) (TYPE_1__*,int ) ;} ;
struct TYPE_5__ {int smgr_which; int smgr_rnode; } ;
typedef TYPE_1__* SMgrRelation ;
typedef int RelFileNodeBackend ;
typedef int ForkNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,int ,int) ;

void
FUNC_6(SMgrRelation *VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 RelFileNodeBackend *VAR_6;
 ForkNumber VAR_7;

 if (VAR_3 == 0)
  return;





 VAR_6 = FUNC_2(sizeof(RelFileNodeBackend) * VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  RelFileNodeBackend VAR_8 = VAR_2[VAR_5]->smgr_rnode;
  int VAR_9 = VAR_2[VAR_5]->smgr_which;

  VAR_6[VAR_5] = VAR_8;


  for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++)
   VAR_1[VAR_9].smgr_close(VAR_2[VAR_5], VAR_7);
 }





 FUNC_1(VAR_6, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(VAR_6[VAR_5]);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  int VAR_10 = VAR_2[VAR_5]->smgr_which;

  for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++)
   VAR_1[VAR_10].smgr_unlink(VAR_6[VAR_5], VAR_7, VAR_4);
 }

 FUNC_3(VAR_6);
}
