
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_time_t ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,scalar_t__,int ,int ) ;
 int FUNC_3 (char*,scalar_t__,char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char const*,scalar_t__) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static char *
FUNC_7(pg_time_t VAR_4, const char *VAR_5)
{
 char *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_2);

 FUNC_3(VAR_6, VAR_2, "%s/", VAR_0);

 VAR_7 = FUNC_6(VAR_6);


 FUNC_2(VAR_6 + VAR_7, VAR_2 - VAR_7, VAR_1,
    FUNC_1(&VAR_4, VAR_3));

 if (VAR_5 != ((void*)0))
 {
  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7 > 4 && (FUNC_4(VAR_6 + (VAR_7 - 4), ".log") == 0))
   VAR_7 -= 4;
  FUNC_5(VAR_6 + VAR_7, VAR_5, VAR_2 - VAR_7);
 }

 return VAR_6;
}
