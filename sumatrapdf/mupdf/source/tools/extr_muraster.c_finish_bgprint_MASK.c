
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_2__ {int started; int solo; int start; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_4)
{
 int VAR_5;

 if (!VAR_3.active)
  return;


 VAR_5 = FUNC_2();
 if (VAR_5 == VAR_2)
 {

  return;
 }

 if (VAR_5 == VAR_1)
 {

  FUNC_0(VAR_4, VAR_0, "Failed to render page");
 }
 VAR_3.started = 1;
 VAR_3.solo = 1;
 FUNC_1(&VAR_3.start);
 VAR_5 = FUNC_2();
 if (VAR_5 != 0)
 {

  FUNC_0(VAR_4, VAR_0, "Failed to render page");
 }
}
