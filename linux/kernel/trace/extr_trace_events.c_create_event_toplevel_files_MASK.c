
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {struct dentry* event_dir; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 struct trace_array* VAR_5 ;
 struct trace_array* VAR_6 ;
 struct dentry* FUNC_1 (char*,int,struct dentry*,struct trace_array*,int *) ;
 struct dentry* FUNC_2 (char*,struct dentry*) ;
 struct dentry* FUNC_3 (char*,int,struct dentry*,struct trace_array*,int *) ;

__attribute__((used)) static int
FUNC_4(struct dentry *VAR_7, struct trace_array *VAR_8)
{
 struct dentry *VAR_9;
 struct dentry *VAR_10;

 VAR_10 = FUNC_3("set_event", 0644, VAR_7,
        VAR_8, &VAR_1);
 if (!VAR_10) {
  FUNC_0("Could not create tracefs 'set_event' entry\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_2("events", VAR_7);
 if (!VAR_9) {
  FUNC_0("Could not create tracefs 'events' directory\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_1("enable", 0644, VAR_9,
      VAR_8, &VAR_4);
 if (!VAR_10) {
  FUNC_0("Could not create tracefs 'enable' entry\n");
  return -VAR_0;
 }



 VAR_10 = FUNC_3("set_event_pid", 0644, VAR_7,
        VAR_8, &VAR_2);
 if (!VAR_10)
  FUNC_0("Could not create tracefs 'set_event_pid' entry\n");


 VAR_10 = FUNC_1("header_page", 0444, VAR_9,
      VAR_6,
      &VAR_3);
 if (!VAR_10)
  FUNC_0("Could not create tracefs 'header_page' entry\n");

 VAR_10 = FUNC_1("header_event", 0444, VAR_9,
      VAR_5,
      &VAR_3);
 if (!VAR_10)
  FUNC_0("Could not create tracefs 'header_event' entry\n");

 VAR_8->event_dir = VAR_9;

 return 0;
}
