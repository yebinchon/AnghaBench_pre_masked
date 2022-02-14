
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (short) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,char*) ;
 int VAR_1 ;

int
FUNC_4()
{
 short VAR_2;
 char *VAR_3;

 VAR_3 = FUNC_3(VAR_0, "");
 if (VAR_3)
  FUNC_1(VAR_1, "Successfully set locale to \"%s\"\n", VAR_3);
 else
 {
  FUNC_1(VAR_1, "Cannot setup locale. Either your libc does not provide\nlocale support, or your locale data is corrupt, or you have not set\nLANG or LC_CTYPE environment variable to proper value. Program aborted.\n");
  return 1;
 }

 FUNC_2("char#  char alnum alpha cntrl digit lower graph print punct space upper xdigit lo up\n");
 for (VAR_2 = 0; VAR_2 <= 255; VAR_2++)
  FUNC_0(VAR_2);

 return 0;
}
