
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_0)
{
 FUNC_1(FUNC_0("Specify location manually.\n"), VAR_0);
 FUNC_1("\n", VAR_0);



 FUNC_1(FUNC_0("  lat=N\t\tLatitude\n"
  "  lon=N\t\tLongitude\n"), VAR_0);
 FUNC_1("\n", VAR_0);
 FUNC_1(FUNC_0("Both values are expected to be floating point numbers,\n"
  "negative values representing west / south, respectively.\n"), VAR_0);
 FUNC_1("\n", VAR_0);
}
