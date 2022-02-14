
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* Reil; } ;
struct TYPE_11__ {int lastsz; int cur; } ;
typedef int RAnalReilArg ;
typedef TYPE_2__ RAnalEsil ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;

void FUNC_8(RAnalEsil *VAR_0) {
 if (!VAR_0->Reil->lastsz || VAR_0->Reil->lastsz == 0) {
  FUNC_2(VAR_0, 0);
  return;
 }

 RAnalReilArg *VAR_1;

 FUNC_2(VAR_0, VAR_0->Reil->lastsz - 1);
 FUNC_2(VAR_0, 1);
 FUNC_4(VAR_0);
 FUNC_1(VAR_0, VAR_0->Reil->cur);
 FUNC_3(VAR_0);

 VAR_1 = FUNC_6(VAR_0);
 if (!VAR_1) {
  return;
 }

 FUNC_2(VAR_0, VAR_0->Reil->lastsz - 1);
 FUNC_7(VAR_0, VAR_1);
 FUNC_5(VAR_0);

 FUNC_0 (VAR_1);
}
