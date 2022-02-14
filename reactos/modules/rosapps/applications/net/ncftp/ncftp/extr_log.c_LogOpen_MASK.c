
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char*,char const* const,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;

void
FUNC_5(const char *const VAR_3)
{
 time_t VAR_4;
 FILE *VAR_5;

 if (VAR_2 == 0)
  return;

 FUNC_4(&VAR_4);
 VAR_5 = FUNC_2(VAR_1, VAR_0);
 if (VAR_5 != ((void*)0)) {
  (void) FUNC_3(VAR_5, "%s at %s", VAR_3, FUNC_0(&VAR_4));
  (void) FUNC_1(VAR_5);
 }
}
