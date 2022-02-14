
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ lc; } ;
typedef TYPE_2__ _Locale_monetary_t ;


 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_0 ;

int FUNC_1(_Locale_monetary_t * VAR_1) {
  char VAR_2[2];
  FUNC_0(VAR_1->lc.id, VAR_0, VAR_2, 2);
  if (VAR_2[0] == '0') return 0;
  else if (VAR_2[0] == '1') return 1;
  else return -1;
}
