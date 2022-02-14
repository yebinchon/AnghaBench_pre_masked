
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_4(bool VAR_2, const char *VAR_3, const char *VAR_4)
{
 if (!VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("cannot convert value from %s to %s without timezone usage",
      VAR_3, VAR_4),
     FUNC_2("Use *_tz() function for timezone support.")));
}
