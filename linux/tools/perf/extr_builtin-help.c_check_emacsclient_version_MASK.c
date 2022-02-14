
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ buf; } ;
struct child_process {char const** argv; int err; int stdout_to_stderr; } ;
typedef int ec_process ;


 struct strbuf VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct child_process*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct child_process*,int ,int) ;
 scalar_t__ FUNC_5 (struct child_process*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct strbuf*,int,int) ;
 int FUNC_7 (struct strbuf*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct strbuf VAR_2 = VAR_0;
 struct child_process VAR_3;
 const char *VAR_4[] = { "emacsclient", "--version", ((void*)0) };
 int VAR_5;
 int VAR_6 = -1;


 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.argv = VAR_4;
 VAR_3.err = -1;
 VAR_3.stdout_to_stderr = 1;
 if (FUNC_5(&VAR_3)) {
  FUNC_3(VAR_1, "Failed to start emacsclient.\n");
  return -1;
 }
 if (FUNC_6(&VAR_2, VAR_3.err, 20) < 0) {
  FUNC_3(VAR_1, "Failed to read emacsclient version\n");
  goto out;
 }
 FUNC_1(VAR_3.err);





 FUNC_2(&VAR_3);

 if (!FUNC_9(VAR_2.buf, "emacsclient")) {
  FUNC_3(VAR_1, "Failed to parse emacsclient version.\n");
  goto out;
 }

 VAR_5 = FUNC_0(VAR_2.buf + FUNC_8("emacsclient"));

 if (VAR_5 < 22) {
  FUNC_3(VAR_1,
   "emacsclient version '%d' too old (< 22).\n",
   VAR_5);
 } else
  VAR_6 = 0;
out:
 FUNC_7(&VAR_2);
 return VAR_6;
}
