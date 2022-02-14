
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*,size_t,int,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (char*,char) ;

void FUNC_10(const char *VAR_1, void *VAR_2, size_t VAR_3)
{
 char *VAR_4 = FUNC_7(VAR_1);
 FILE *VAR_5;
 char *VAR_6;

 if (!VAR_4) {
  FUNC_5("WARNING: Not enough memory, skip object dumping\n");
  return;
 }

 VAR_6 = FUNC_9(VAR_4, '.');
 if (!VAR_6 || (FUNC_6(VAR_6, ".c") != 0)) {
  FUNC_5("WARNING: invalid llvm source path: '%s', skip object dumping\n",
      VAR_4);
  goto out;
 }

 VAR_6[1] = 'o';
 VAR_5 = FUNC_1(VAR_4, "wb");
 if (!VAR_5) {
  FUNC_5("WARNING: failed to open '%s': %s, skip object dumping\n",
      VAR_4, FUNC_8(VAR_0));
  goto out;
 }

 FUNC_4("LLVM: dumping %s\n", VAR_4);
 if (FUNC_3(VAR_2, VAR_3, 1, VAR_5) != 1)
  FUNC_5("WARNING: failed to write to file '%s': %s, skip object dumping\n",
      VAR_4, FUNC_8(VAR_0));
 FUNC_0(VAR_5);
out:
 FUNC_2(VAR_4);
}
