
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file; } ;
typedef TYPE_1__ prog_state ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_1, void *VAR_2)
{
 prog_state *VAR_3 = (prog_state *)VAR_2;
 int VAR_4 = FUNC_0(VAR_3->file);
 if (VAR_4 < 0)
  FUNC_2(VAR_1, "cannot fclose: %s", FUNC_3(VAR_0));
 FUNC_1(VAR_1, VAR_2);
}
