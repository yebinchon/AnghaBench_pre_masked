
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_9__ {int lastsz; TYPE_1__* anal; scalar_t__ cur; scalar_t__ old; } ;
struct TYPE_8__ {int reg; } ;
typedef TYPE_2__ RAnalEsil ;


 void* FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,scalar_t__*) ;
 char* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static bool FUNC_7(RAnalEsil *VAR_0) {
 ut64 VAR_1, VAR_2;
 bool VAR_3 = 0;
 char *VAR_4 = FUNC_3 (VAR_0);
 char *VAR_5 = FUNC_3 (VAR_0);
 if (VAR_4 && FUNC_2 (VAR_0, VAR_4, &VAR_1)) {
  if (VAR_5 && FUNC_2 (VAR_0, VAR_5, &VAR_2)) {
   VAR_0->old = VAR_1;
   VAR_0->cur = VAR_1 - VAR_2;
   VAR_3 = 1;
   if (FUNC_5 (VAR_0->anal->reg, VAR_4, -1)) {
    VAR_0->lastsz = FUNC_0 (VAR_0, VAR_4);
   } else if (FUNC_5 (VAR_0->anal->reg, VAR_5, -1)) {
    VAR_0->lastsz = FUNC_0 (VAR_0, VAR_5);
   } else {

    VAR_0->lastsz = 64;
   }
   FUNC_4 (VAR_0, (VAR_1 != VAR_2) &
                              !FUNC_6 (VAR_1, VAR_2, VAR_0->lastsz));
  }
 }
 FUNC_1 (VAR_4);
 FUNC_1 (VAR_5);
 return VAR_3;
}
