
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t lruMoreRecently; size_t lruLessRecently; int fileName; } ;
typedef TYPE_1__ Vfd ;
typedef size_t File ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,size_t,int ) ;

__attribute__((used)) static void
FUNC_4(File VAR_2)
{
 Vfd *VAR_3;

 FUNC_0(VAR_2 != 0);

 FUNC_1(FUNC_3(VAR_0, "Insert %d (%s)",
      VAR_2, VAR_1[VAR_2].fileName));
 FUNC_1(FUNC_2());

 VAR_3 = &VAR_1[VAR_2];

 VAR_3->lruMoreRecently = 0;
 VAR_3->lruLessRecently = VAR_1[0].lruLessRecently;
 VAR_1[0].lruLessRecently = VAR_2;
 VAR_1[VAR_3->lruLessRecently].lruMoreRecently = VAR_2;

 FUNC_1(FUNC_2());
}
