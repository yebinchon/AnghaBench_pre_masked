
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef scalar_t__ cdio_log_level_t ;
typedef int buf ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(cdio_log_level_t VAR_1, const char VAR_2[], va_list VAR_3)
{
  char VAR_4[1024] = { 0, };
 static int VAR_5 = 0;

  if (VAR_1 < VAR_0) return;

  if (VAR_5) {

    FUNC_1(0);
  }

  VAR_5 = 1;

  FUNC_2(VAR_4, sizeof(VAR_4)-1, VAR_2, VAR_3);

  FUNC_0(VAR_1, VAR_4);

  VAR_5 = 0;
}
