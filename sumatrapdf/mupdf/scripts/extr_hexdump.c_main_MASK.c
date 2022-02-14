
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_2 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int VAR_3 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;

int
FUNC_10(int VAR_4, char **VAR_5)
{
 FILE *VAR_6;
 FILE *VAR_7;
 char VAR_8[256];
 char *VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (VAR_4 < 3)
 {
  FUNC_2(VAR_2, "usage: hexdump [-0] [-s] output.c input.dat\n");
  return 1;
 }

 VAR_3 = 0;
 VAR_12 = 1;

 if (!FUNC_6(VAR_5[VAR_12], "-s")) {
  ++VAR_12;
  VAR_3 = 1;
 }

 VAR_6 = FUNC_1(VAR_5[VAR_12], "wb");
 if (!VAR_6)
 {
  FUNC_2(VAR_2, "hexdump: could not open output file '%s'\n", VAR_5[VAR_12]);
  return 1;
 }

 for (VAR_11 = VAR_12+1; VAR_11 < VAR_4; VAR_11++)
 {
  VAR_7 = FUNC_1(VAR_5[VAR_11], "rb");
  if (!VAR_7)
  {
   FUNC_0(VAR_6);
   FUNC_2(VAR_2, "hexdump: could not open input file '%s'\n", VAR_5[VAR_11]);
   return 1;
  }

  VAR_9 = FUNC_9(VAR_5[VAR_11], '/');
  if (!VAR_9)
   VAR_9 = FUNC_9(VAR_5[VAR_11], '\\');
  if (VAR_9)
   VAR_9++;
  else
   VAR_9 = VAR_5[VAR_11];

  if (FUNC_8(VAR_9) >= sizeof(VAR_8))
  {
   FUNC_0(VAR_7);
   FUNC_0(VAR_6);
   FUNC_2(VAR_2, "hexdump: filename '%s' too long\n", VAR_9);
   return 1;
  }

  FUNC_7(VAR_8, VAR_9);
  for (VAR_10 = VAR_8; *VAR_10; ++VAR_10)
  {
   if (*VAR_10 == '/' || *VAR_10 == '.' || *VAR_10 == '\\' || *VAR_10 == '-')
    *VAR_10 = '_';
  }

  FUNC_3(VAR_7, 0, VAR_0);
  VAR_13 = FUNC_4(VAR_7);
  FUNC_3(VAR_7, 0, VAR_1);

  FUNC_2(*VAR_6, "const unsigned char _binary_%s[%d] =", VAR_8, VAR_13);
  FUNC_2(*VAR_6, VAR_3 ? "\n" : " {\n");
  FUNC_5(VAR_6, VAR_7);
  FUNC_2(*VAR_6, VAR_3 ? ";\n" : "};\n");
  FUNC_2(*VAR_6, "unsigned int _binary_%s_size = %d;\n", VAR_8, VAR_13);

  FUNC_0(VAR_7);
 }

 if (FUNC_0(VAR_6))
 {
  FUNC_2(VAR_2, "hexdump: could not close output file '%s'\n", VAR_5[1]);
  return 1;
 }

 return 0;
}
