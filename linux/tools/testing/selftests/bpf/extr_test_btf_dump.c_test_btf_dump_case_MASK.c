
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int test_file ;
struct TYPE_2__ {int * ctx; } ;
struct btf_dump_test_case {char* name; TYPE_1__ opts; } ;
struct btf {int dummy; } ;
typedef int out_file ;
typedef int diff_cmd ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct btf*) ;
 int FUNC_2 (struct btf*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct btf*) ;
 struct btf* FUNC_5 (char*,int *) ;
 int FUNC_6 (struct btf*,TYPE_1__*) ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,char*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int,char*,char*,...) ;
 int VAR_2 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;

int FUNC_16(int VAR_3, struct btf_dump_test_case *VAR_4)
{
 char VAR_5[256], VAR_6[256], VAR_7[1024];
 struct btf *VAR_8 = ((void*)0);
 int VAR_9 = 0, VAR_10 = -1;
 FILE *VAR_11 = ((void*)0);

 FUNC_10(VAR_2, "Test case #%d (%s): ", VAR_3, VAR_4->name);

 FUNC_13(VAR_5, sizeof(VAR_5), "%s.o", VAR_4->name);

 VAR_8 = FUNC_5(VAR_5, ((void*)0));
 if (FUNC_0(FUNC_1(VAR_8),
     "failed to load test BTF: %ld\n", FUNC_2(VAR_8))) {
  VAR_9 = -FUNC_2(VAR_8);
  VAR_8 = ((void*)0);
  goto done;
 }

 FUNC_13(VAR_6, sizeof(VAR_6),
   "/tmp/%s.output.XXXXXX", VAR_4->name);
 VAR_10 = FUNC_11(VAR_6);
 if (FUNC_0(VAR_10 < 0, "failed to create temp output file: %d\n", VAR_10)) {
  VAR_9 = VAR_10;
  goto done;
 }
 VAR_11 = FUNC_9(VAR_10, "w");
 if (FUNC_0(VAR_11 == ((void*)0), "failed to open temp output file: %s(%d)\n",
    FUNC_14(VAR_1), VAR_1)) {
  FUNC_7(VAR_10);
  goto done;
 }

 VAR_4->opts.ctx = VAR_11;
 VAR_9 = FUNC_6(VAR_8, &VAR_4->opts);
 FUNC_8(VAR_11);
 FUNC_7(VAR_10);
 if (FUNC_0(VAR_9, "failure during C dumping: %d\n", VAR_9)) {
  goto done;
 }

 FUNC_13(VAR_5, sizeof(VAR_5), "progs/%s.c", VAR_4->name);
 if (FUNC_3(VAR_5, VAR_0) == -1)




  FUNC_13(VAR_5, sizeof(VAR_5), "%s.c",
   VAR_4->name);







 FUNC_13(VAR_7, sizeof(VAR_7),
   "awk '/START-EXPECTED-OUTPUT/{out=1;next} "
   "/END-EXPECTED-OUTPUT/{out=0} "
   "/\\/\\*|\\*\\//{next} "
   "out {sub(/^[ \\t]*\\*/, \"\"); print}' '%s' | diff -u - '%s'",
   VAR_5, VAR_6);
 VAR_9 = FUNC_15(VAR_7);
 if (FUNC_0(VAR_9,
    "differing test output, output=%s, err=%d, diff cmd:\n%s\n",
    VAR_6, VAR_9, VAR_7))
  goto done;

 FUNC_12(VAR_6);
 FUNC_10(VAR_2, "OK\n");

done:
 FUNC_4(VAR_8);
 return VAR_9;
}
