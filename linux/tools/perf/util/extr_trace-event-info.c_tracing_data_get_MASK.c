
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_data {int temp; scalar_t__ size; int temp_file; } ;
struct tracepoint_path {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tracing_data*) ;
 struct tracepoint_path* FUNC_2 (struct list_head*) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 struct tracing_data* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct tracepoint_path*) ;
 int FUNC_9 (struct tracepoint_path*) ;
 int FUNC_10 (struct tracepoint_path*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int,char*) ;
 int FUNC_16 () ;
 int FUNC_17 (struct tracing_data**) ;

struct tracing_data *FUNC_18(struct list_head *VAR_3,
          int VAR_4, bool VAR_5)
{
 struct tracepoint_path *VAR_6;
 struct tracing_data *VAR_7;
 int VAR_8;

 VAR_2 = VAR_4;

 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_4(sizeof(*VAR_7));
 if (!VAR_7)
  return ((void*)0);

 VAR_7->temp = VAR_5;
 VAR_7->size = 0;

 if (VAR_5) {
  int VAR_9;

  FUNC_15(VAR_7->temp_file, sizeof(VAR_7->temp_file),
    "/tmp/perf-XXXXXX");
  if (!FUNC_5(VAR_7->temp_file)) {
   FUNC_7("Can't make temp file");
   FUNC_1(VAR_7);
   return ((void*)0);
  }

  VAR_9 = FUNC_6(VAR_7->temp_file, VAR_0);
  if (VAR_9 < 0) {
   FUNC_7("Can't read '%s'", VAR_7->temp_file);
   FUNC_1(VAR_7);
   return ((void*)0);
  }





  VAR_2 = VAR_9;
 }

 VAR_8 = FUNC_16();
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_12();
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_13();
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_11();
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_14();

out:




 if (VAR_5) {
  VAR_7->size = FUNC_3(VAR_2, 0, VAR_1);
  FUNC_0(VAR_2);
  VAR_2 = VAR_4;
 }

 if (VAR_8)
  FUNC_17(&VAR_7);

 FUNC_8(VAR_6);
 return VAR_7;
}
