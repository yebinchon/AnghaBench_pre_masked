
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* remit; } ;
struct TYPE_8__ {char* (* regs ) (TYPE_2__*,int) ;} ;
typedef TYPE_1__ REggEmit ;
typedef TYPE_2__ REgg ;


 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,char*,int ,char) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (TYPE_2__*,int) ;
 char* FUNC_7 (TYPE_2__*,int) ;
 char* FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_9(REgg *VAR_0, char **VAR_1, int VAR_2) {
 REggEmit *VAR_3 = VAR_0->remit;
 int VAR_4 = VAR_2;
 char VAR_5, *VAR_6;

 while (**VAR_1 && FUNC_2 (**VAR_1)) {
  (*VAR_1)++;
 }
 VAR_6 = *VAR_1 + 1;

 do {
  VAR_5 = (FUNC_1 (**VAR_1) && !(FUNC_3 (*VAR_1)))? **VAR_1: '=';
  *VAR_1 = (FUNC_1 (**VAR_1) && !(FUNC_3 (*VAR_1)))? *VAR_1 + 1: *VAR_1;
  VAR_4 = FUNC_0 (&VAR_6);
  if (VAR_4 > VAR_2) {
   FUNC_9 (VAR_0, VAR_1, VAR_4);
   FUNC_4 (VAR_0, VAR_3->regs (VAR_0, VAR_4 - 1),
    FUNC_5 (VAR_3->regs (VAR_0, VAR_2 - 1)), VAR_5);
   VAR_6 = *VAR_1 + 1;
  } else {
   FUNC_4 (VAR_0, *VAR_1, FUNC_5 (VAR_3->regs (VAR_0, VAR_2 - 1)), VAR_5);
   *VAR_1 = VAR_6;
   VAR_6++;
  }
 } while (**VAR_1 && VAR_4 >= VAR_2);
}
