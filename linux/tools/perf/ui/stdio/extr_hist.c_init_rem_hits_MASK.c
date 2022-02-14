
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sym; } ;
struct TYPE_7__ {TYPE_1__ ms; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 VAR_1 = FUNC_1(sizeof(*VAR_1) + 6);
 if (!VAR_1) {
  FUNC_0(VAR_2, "Not enough memory to display remaining hits\n");
  return;
 }

 FUNC_2(VAR_1->name, "[...]");
 VAR_0.ms.sym = VAR_1;
}
