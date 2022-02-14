
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int beid; int pid; } ;
struct TYPE_5__ {int (* cb_printf ) (char*) ;int off; } ;
typedef int RIODesc ;
typedef TYPE_1__ RIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ,int ,int const*,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(RIO *VAR_4, RIODesc *VAR_5, const ut8 *VAR_6, int VAR_7) {




 switch (VAR_3.beid) {
 case 0:
  return FUNC_1 (VAR_4, VAR_5, VAR_0, VAR_3.pid, VAR_4->off, VAR_6, VAR_7);
 case 1:
  return FUNC_1 (VAR_4, VAR_5, VAR_2, VAR_3.pid, VAR_4->off, VAR_6, VAR_7);
 case 2:
  return FUNC_1 (VAR_4, VAR_5, VAR_1, VAR_3.pid, VAR_4->off, VAR_6, VAR_7);
 default:
  VAR_4->cb_printf ("ERROR: Undefined beid in r2k__write.\n");
  return -1;
 }




}
