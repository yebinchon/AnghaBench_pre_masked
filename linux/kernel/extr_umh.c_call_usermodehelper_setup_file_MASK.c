
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umh_info {char* cmdline; } ;
struct subprocess_info {char* path; int (* init ) (struct subprocess_info*,struct cred*) ;void (* cleanup ) (struct subprocess_info*) ;void* data; struct file* file; int work; int argv; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct subprocess_info*) ;
 struct subprocess_info* FUNC_3 (int,int ) ;

struct subprocess_info *FUNC_4(struct file *VAR_2,
  int (*VAR_3)(struct subprocess_info *VAR_4, struct cred *VAR_5),
  void (*VAR_6)(struct subprocess_info *VAR_7), void *VAR_8)
{
 struct subprocess_info *VAR_9;
 struct umh_info *VAR_10 = VAR_8;
 const char *VAR_11 = (VAR_10->cmdline) ? VAR_10->cmdline : "usermodehelper";

 VAR_9 = FUNC_3(sizeof(struct subprocess_info), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->argv = FUNC_1(VAR_0, VAR_11, ((void*)0));
 if (!VAR_9->argv) {
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 FUNC_0(&VAR_9->work, VAR_1);
 VAR_9->path = "none";
 VAR_9->file = VAR_2;
 VAR_9->init = VAR_3;
 VAR_9->cleanup = VAR_6;
 VAR_9->data = VAR_8;
 return VAR_9;
}
