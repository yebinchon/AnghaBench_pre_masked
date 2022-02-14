
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wint_t ;
typedef int wchar_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ lc; } ;
typedef TYPE_2__ _Locale_ctype_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int,int *,int) ;

wint_t FUNC_1(_Locale_ctype_t* VAR_1, wint_t VAR_2) {
  wchar_t VAR_3 = VAR_2;
  wchar_t VAR_4;

  FUNC_0(VAR_1->lc.id, VAR_0, &VAR_3, 1, &VAR_4, 1);
  return VAR_4;
}
