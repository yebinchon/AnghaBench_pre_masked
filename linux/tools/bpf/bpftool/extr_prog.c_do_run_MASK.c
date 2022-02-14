
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_test_run_attr {unsigned int data_size_out; unsigned int ctx_size_out; int prog_fd; unsigned int repeat; int retval; int duration; void* ctx_out; void* data_out; void* ctx_in; void* data_in; int ctx_size_in; int data_size_in; int member_0; } ;


 char* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 unsigned int VAR_0 ;
 int FUNC_3 (void**,unsigned int) ;
 int FUNC_4 (struct bpf_prog_test_run_attr*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,char*,char*,int *) ;
 int VAR_1 ;
 int FUNC_7 (int ,char*,int,char*,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (char*,void**,int *) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (void*,int,char*,char*) ;
 int FUNC_16 (int*,char***) ;
 int VAR_4 ;
 char* FUNC_17 (int ) ;
 void* FUNC_18 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_19(int VAR_5, char **VAR_6)
{
 char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 struct bpf_prog_test_run_attr VAR_11 = {0};
 const unsigned int VAR_12 = VAR_0;
 void *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 void *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 unsigned int VAR_17 = 1;
 int VAR_18, VAR_19;

 if (!FUNC_2(4))
  return -1;

 VAR_18 = FUNC_16(&VAR_5, &VAR_6);
 if (VAR_18 < 0)
  return -1;

 while (VAR_5) {
  if (FUNC_6(*VAR_6, "data_in", "data_out",
      "data_size_out", ((void*)0)))
   return -1;
  if (FUNC_6(*VAR_6, "ctx_in", "ctx_out",
      "ctx_size_out", ((void*)0)))
   return -1;

  if (FUNC_10(*VAR_6, "data_in")) {
   FUNC_1();
   if (!FUNC_2(1))
    return -1;

   VAR_7 = FUNC_0();
   if (FUNC_5(VAR_7, VAR_9))
    return -1;
  } else if (FUNC_10(*VAR_6, "data_out")) {
   FUNC_1();
   if (!FUNC_2(1))
    return -1;

   VAR_8 = FUNC_0();
  } else if (FUNC_10(*VAR_6, "data_size_out")) {
   char *VAR_20;

   FUNC_1();
   if (!FUNC_2(1))
    return -1;

   VAR_11.data_size_out = FUNC_18(*VAR_6, &VAR_20, 0);
   if (*VAR_20) {
    FUNC_14("can't parse %s as output data size",
          *VAR_6);
    return -1;
   }
   FUNC_1();
  } else if (FUNC_10(*VAR_6, "ctx_in")) {
   FUNC_1();
   if (!FUNC_2(1))
    return -1;

   VAR_9 = FUNC_0();
   if (FUNC_5(VAR_7, VAR_9))
    return -1;
  } else if (FUNC_10(*VAR_6, "ctx_out")) {
   FUNC_1();
   if (!FUNC_2(1))
    return -1;

   VAR_10 = FUNC_0();
  } else if (FUNC_10(*VAR_6, "ctx_size_out")) {
   char *VAR_21;

   FUNC_1();
   if (!FUNC_2(1))
    return -1;

   VAR_11.ctx_size_out = FUNC_18(*VAR_6, &VAR_21, 0);
   if (*VAR_21) {
    FUNC_14("can't parse %s as output context size",
          *VAR_6);
    return -1;
   }
   FUNC_1();
  } else if (FUNC_10(*VAR_6, "repeat")) {
   char *VAR_22;

   FUNC_1();
   if (!FUNC_2(1))
    return -1;

   VAR_17 = FUNC_18(*VAR_6, &VAR_22, 0);
   if (*VAR_22) {
    FUNC_14("can't parse %s as repeat number",
          *VAR_6);
    return -1;
   }
   FUNC_1();
  } else {
   FUNC_14("expected no more arguments, 'data_in', 'data_out', 'data_size_out', 'ctx_in', 'ctx_out', 'ctx_size_out' or 'repeat', got: '%s'?",
         *VAR_6);
   return -1;
  }
 }

 VAR_19 = FUNC_9(VAR_7, &VAR_13, &VAR_11.data_size_in);
 if (VAR_19)
  return -1;

 if (VAR_13) {
  if (!VAR_11.data_size_out)
   VAR_11.data_size_out = VAR_12;
  VAR_19 = FUNC_3(&VAR_14, VAR_11.data_size_out);
  if (VAR_19)
   goto free_data_in;
 }

 VAR_19 = FUNC_9(VAR_9, &VAR_15, &VAR_11.ctx_size_in);
 if (VAR_19)
  goto free_data_out;

 if (VAR_15) {
  if (!VAR_11.ctx_size_out)
   VAR_11.ctx_size_out = VAR_12;
  VAR_19 = FUNC_3(&VAR_16, VAR_11.ctx_size_out);
  if (VAR_19)
   goto free_ctx_in;
 }

 VAR_11.prog_fd = VAR_18;
 VAR_11.repeat = VAR_17;
 VAR_11.data_in = VAR_13;
 VAR_11.data_out = VAR_14;
 VAR_11.ctx_in = VAR_15;
 VAR_11.ctx_out = VAR_16;

 VAR_19 = FUNC_4(&VAR_11);
 if (VAR_19) {
  FUNC_14("failed to run program: %s", FUNC_17(VAR_1));
  goto free_ctx_out;
 }

 VAR_19 = 0;

 if (VAR_2)
  FUNC_12(VAR_3);




 if (VAR_11.data_size_out)
  VAR_19 += FUNC_15(VAR_11.data_out,
     VAR_11.data_size_out,
     VAR_8, "data_out");
 if (VAR_11.ctx_size_out)
  VAR_19 += FUNC_15(VAR_11.ctx_out,
     VAR_11.ctx_size_out,
     VAR_10, "ctx_out");

 if (VAR_2) {
  FUNC_13(VAR_3, "retval", VAR_11.retval);
  FUNC_13(VAR_3, "duration", VAR_11.duration);
  FUNC_11(VAR_3);
 } else {
  FUNC_7(VAR_4, "Return value: %u, duration%s: %uns\n",
   VAR_11.retval,
   VAR_17 > 1 ? " (average)" : "", VAR_11.duration);
 }

free_ctx_out:
 FUNC_8(VAR_16);
free_ctx_in:
 FUNC_8(VAR_15);
free_data_out:
 FUNC_8(VAR_14);
free_data_in:
 FUNC_8(VAR_13);

 return VAR_19;
}
