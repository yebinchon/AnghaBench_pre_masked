
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

void
FUNC_2(const char *VAR_1, int VAR_2,
    const char *VAR_3, const char *VAR_4,
    const char *VAR_5, const char *VAR_6, int VAR_7)
{
 FUNC_1(VAR_0, "%s:%d: %s", VAR_1, VAR_2, VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_1(VAR_0, " (%s)", VAR_6);
 if (VAR_7 >= 0 && VAR_3 == ((void*)0))
  FUNC_1(VAR_0, " at column %d", VAR_7 + 1);
 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_0, " in command \"%s\"", VAR_4);
 FUNC_1(VAR_0, "\n");
 if (VAR_3 != ((void*)0))
 {
  FUNC_1(VAR_0, "%s\n", VAR_3);
  if (VAR_7 >= 0)
  {
   int VAR_8;

   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    FUNC_1(VAR_0, " ");
   FUNC_1(VAR_0, "^ error found here\n");
  }
 }
 FUNC_0(1);
}
