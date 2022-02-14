
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
typedef int dstr ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char const* const,size_t) ;
 scalar_t__ FUNC_2 () ;
 struct tm* FUNC_3 (scalar_t__*) ;
 int FUNC_4 (char*,char*,int,unsigned int,int,char*) ;
 int FUNC_5 (char*,int,char*,struct tm*) ;
 int FUNC_6 (scalar_t__*) ;

void
FUNC_7(const char *const VAR_0, char *VAR_1, size_t VAR_2, int VAR_3, int VAR_4, time_t VAR_5)
{
 char VAR_6[64];
 char VAR_7[32];
 struct tm *VAR_8;

 if ((VAR_5 == (time_t) 0) || (VAR_5 == (time_t) -1))
  (void) FUNC_6(&VAR_5);
 VAR_8 = FUNC_3(&VAR_5);
 if (VAR_8 == ((void*)0)) {

  (void) FUNC_1(VAR_7, "19700101-000000", VAR_2);
 } else {
  (void) FUNC_5(VAR_7, sizeof(VAR_7), "%Y%m%d-%H%M%S", VAR_8);
 }
 (void) FUNC_1(VAR_1, VAR_0, VAR_2);
 (void) FUNC_4(VAR_6, "/%c-%010u-%04x-%s",
  VAR_3,
  (unsigned int) FUNC_2(),
  (VAR_4 % (16 * 16 * 16 * 16)),
  VAR_7
 );
 (void) FUNC_0(VAR_1, VAR_6, VAR_2);
}
