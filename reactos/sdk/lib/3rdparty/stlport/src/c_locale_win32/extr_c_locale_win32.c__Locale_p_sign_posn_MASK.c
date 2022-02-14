
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_5__ {TYPE_1__ lc; } ;
typedef TYPE_2__ _Locale_monetary_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

int FUNC_2(_Locale_monetary_t * VAR_3) {
  char VAR_4[2];
  if (VAR_3->lc.id != VAR_1) {
    FUNC_0(VAR_3->lc.id, VAR_2, VAR_4, 2);
    return FUNC_1(VAR_4);
  }
  else {
    return VAR_0;
  }
}
