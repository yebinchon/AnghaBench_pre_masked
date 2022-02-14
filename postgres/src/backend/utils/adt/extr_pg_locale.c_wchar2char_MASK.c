
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef TYPE_2__* pg_locale_t ;
typedef int locale_t ;
struct TYPE_4__ {int lt; } ;
struct TYPE_5__ {scalar_t__ provider; TYPE_1__ info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 size_t FUNC_2 (int ,int ,int const*,int,char*,size_t,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (char*,int const*,size_t) ;
 size_t FUNC_6 (char*,int const*,size_t,int ) ;

size_t
FUNC_7(char *VAR_4, const wchar_t *VAR_5, size_t VAR_6, pg_locale_t VAR_7)
{
 size_t VAR_8;

 FUNC_0(!VAR_7 || VAR_7->provider == VAR_0);

 if (VAR_6 == 0)
  return 0;
 if (VAR_7 == (pg_locale_t) 0)
 {

  VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_6);
 }
 else
 {
  FUNC_3(VAR_2, "wcstombs_l is not available");
  VAR_8 = 0;

 }

 return VAR_8;
}
