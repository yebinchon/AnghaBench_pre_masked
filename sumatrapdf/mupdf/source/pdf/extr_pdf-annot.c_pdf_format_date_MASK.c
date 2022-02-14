
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int fz_context ;


 int FUNC_0 (char*,char*,int) ;
 struct tm* FUNC_1 (int *) ;
 struct tm* FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (char*,int,char*,struct tm*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, char *VAR_1, int VAR_2, time_t VAR_3)
{



 struct tm *VAR_4 = FUNC_1(&VAR_3);

 if (!VAR_4)
  FUNC_0(VAR_1, "D:19700101000000Z", VAR_2);
 else
  FUNC_3(VAR_1, VAR_2, "D:%Y%m%d%H%M%SZ", VAR_4);
}
