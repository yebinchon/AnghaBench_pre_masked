
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source_location {int dummy; } ;
struct TYPE_2__ {int in_ubsan; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct source_location*) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct source_location *VAR_2,
   unsigned long *VAR_3)
{
 VAR_0->in_ubsan++;
 FUNC_2(&VAR_1, *VAR_3);

 FUNC_0("========================================"
  "========================================\n");
 FUNC_1("UBSAN: Undefined behaviour in", VAR_2);
}
