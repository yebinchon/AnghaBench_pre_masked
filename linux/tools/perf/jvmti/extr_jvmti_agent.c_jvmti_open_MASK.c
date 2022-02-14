
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jitheader {int total_size; int pid; int flags; scalar_t__ timestamp; int version; int magic; } ;
typedef int header ;
typedef void FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,char*) ;
 int FUNC_4 (struct jitheader*,int,int,void*) ;
 scalar_t__ FUNC_5 (struct jitheader*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* VAR_7 ;
 int FUNC_8 (struct jitheader*,int ,int) ;
 int FUNC_9 (char*,int,int) ;
 char* VAR_8 ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (char*,int,char*,char*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,...) ;

void *FUNC_15(void)
{
 char VAR_10[VAR_6];
 struct jitheader VAR_11;
 int VAR_12, VAR_13;
 FILE *VAR_14;

 FUNC_7();




 if (!FUNC_10()) {
  if (VAR_9)
   FUNC_14("jvmti: arch timestamp not supported");
  else
   FUNC_14("jvmti: kernel does not support %d clock id", VAR_8);
 }

 FUNC_8(&VAR_11, 0, sizeof(VAR_11));




 if (FUNC_1() < 0)
  return ((void*)0);




 VAR_13 = FUNC_12(VAR_10, VAR_6, "%s/jit-%i.dump", VAR_7, FUNC_6());
 if (VAR_13 >= VAR_6) {
  FUNC_14("jvmti: cannot generate jitdump file full path because"
   " %s/jit-%i.dump is too long, please check the cwd,"
   " JITDUMPDIR, and HOME variables", VAR_7, FUNC_6());
  return ((void*)0);
 }

 VAR_12 = FUNC_9(VAR_10, VAR_3|VAR_5|VAR_4, 0666);
 if (VAR_12 == -1)
  return ((void*)0);




 if (FUNC_11(VAR_12)) {
  FUNC_14("jvmti: failed to create marker file");
  return ((void*)0);
 }

 VAR_14 = FUNC_3(VAR_12, "w+");
 if (!VAR_14) {
  FUNC_13("jvmti: cannot create %s", VAR_10);
  FUNC_0(VAR_12);
  goto error;
 }

 FUNC_14("jvmti: jitdump in %s", VAR_10);

 if (FUNC_5(&VAR_11)) {
  FUNC_13("get_e_machine failed\n");
  goto error;
 }

 VAR_11.magic = VAR_1;
 VAR_11.version = VAR_2;
 VAR_11.total_size = sizeof(VAR_11);
 VAR_11.pid = FUNC_6();

 VAR_11.timestamp = FUNC_10();

 if (VAR_9)
  VAR_11.flags |= VAR_0;

 if (!FUNC_4(&VAR_11, sizeof(VAR_11), 1, VAR_14)) {
  FUNC_13("jvmti: cannot write dumpfile header");
  goto error;
 }
 return VAR_14;
error:
 FUNC_2(VAR_14);
 return ((void*)0);
}
