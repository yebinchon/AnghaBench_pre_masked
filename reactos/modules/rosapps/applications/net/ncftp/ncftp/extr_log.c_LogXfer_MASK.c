
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,char const* const,char const* const) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_3(const char *const VAR_3, const char *const VAR_4)
{
 FILE *VAR_5;

 if (VAR_2 == 0)
  return;

 VAR_5 = FUNC_1(VAR_1, VAR_0);
 if (VAR_5 != ((void*)0)) {
  (void) FUNC_2(VAR_5, "  %s %s\n", VAR_3, VAR_4);
  (void) FUNC_0(VAR_5);
 }
}
