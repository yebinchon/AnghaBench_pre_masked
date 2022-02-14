
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,long) ;
 int FUNC_2 (char*,int,struct dentry*,struct trace_array*,long,int *) ;
 struct dentry* FUNC_3 (char*,struct dentry*) ;
 int VAR_2 ;
 struct dentry* FUNC_4 (struct trace_array*,long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct trace_array *VAR_7, long VAR_8)
{
 struct dentry *VAR_9 = FUNC_4(VAR_7, VAR_8);
 struct dentry *VAR_10;
 char VAR_11[30];

 if (!VAR_9)
  return;

 FUNC_1(VAR_11, 30, "cpu%ld", VAR_8);
 VAR_10 = FUNC_3(VAR_11, VAR_9);
 if (!VAR_10) {
  FUNC_0("Could not create tracefs '%s' entry\n", VAR_11);
  return;
 }


 FUNC_2("trace_pipe", 0444, VAR_10,
    VAR_7, VAR_8, &VAR_5);


 FUNC_2("trace", 0644, VAR_10,
    VAR_7, VAR_8, &VAR_4);

 FUNC_2("trace_pipe_raw", 0444, VAR_10,
    VAR_7, VAR_8, &VAR_2);

 FUNC_2("stats", 0444, VAR_10,
    VAR_7, VAR_8, &VAR_6);

 FUNC_2("buffer_size_kb", 0444, VAR_10,
    VAR_7, VAR_8, &VAR_3);
}
