
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {scalar_t__ cp; TYPE_1__ lc; } ;
typedef TYPE_2__ _Locale_ctype_t ;
typedef scalar_t__ UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ,char*,int,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,int,int *,int,char*,int,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(_Locale_ctype_t* VAR_6, int VAR_7) {
  char VAR_8[2], VAR_9[2];
  VAR_8[0] = (char)VAR_7; VAR_8[1] = 0;
  if ((UINT)FUNC_3(VAR_6->lc.id) == VAR_6->cp) {
    FUNC_0(VAR_6->lc.id, VAR_1 | VAR_2, VAR_8, 2, VAR_9, 2);
    return VAR_9[0];
  }
  else {
    wchar_t VAR_10[2];
    FUNC_1(VAR_6->cp, VAR_3, VAR_8, 2, VAR_10, 2);
    FUNC_2(FUNC_3(VAR_6->lc.id), VAR_4 | VAR_5, VAR_10, 2, VAR_8, 2, ((void*)0), VAR_0);

    FUNC_0(VAR_6->lc.id, VAR_1 | VAR_2, VAR_8, 2, VAR_9, 2);

    FUNC_1(FUNC_3(VAR_6->lc.id), VAR_3, VAR_9, 2, VAR_10, 2);
    FUNC_2(VAR_6->cp, VAR_4 | VAR_5, VAR_10, 2, VAR_9, 2, ((void*)0), VAR_0);
    return VAR_9[0];
  }
}
