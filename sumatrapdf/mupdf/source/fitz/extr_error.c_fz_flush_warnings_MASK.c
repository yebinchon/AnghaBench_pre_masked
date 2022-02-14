
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; scalar_t__* message; int print_user; int (* print ) (int ,char*) ;} ;
struct TYPE_5__ {TYPE_1__ warn; } ;
typedef TYPE_2__ fz_context ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(fz_context *VAR_0)
{
 if (VAR_0->warn.count > 1)
 {
  char VAR_1[50];
  FUNC_0(VAR_1, sizeof VAR_1, "... repeated %d times...", VAR_0->warn.count);
  if (VAR_0->warn.print)
   VAR_0->warn.print(VAR_0->warn.print_user, VAR_1);
 }
 VAR_0->warn.message[0] = 0;
 VAR_0->warn.count = 0;
}
