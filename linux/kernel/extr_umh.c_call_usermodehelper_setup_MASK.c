
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {char const* path; char** argv; char** envp; void (* cleanup ) (struct subprocess_info*) ;int (* init ) (struct subprocess_info*,struct cred*) ;void* data; int work; } ;
typedef int gfp_t ;


 char const* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct subprocess_info* FUNC_1 (int,int ) ;

struct subprocess_info *FUNC_2(const char *VAR_2, char **VAR_3,
  char **VAR_4, gfp_t VAR_5,
  int (*VAR_6)(struct subprocess_info *VAR_7, struct cred *VAR_8),
  void (*VAR_9)(struct subprocess_info *VAR_10),
  void *VAR_11)
{
 struct subprocess_info *VAR_12;
 VAR_12 = FUNC_1(sizeof(struct subprocess_info), VAR_5);
 if (!VAR_12)
  goto out;

 FUNC_0(&VAR_12->work, VAR_1);




 VAR_12->path = VAR_2;

 VAR_12->argv = VAR_3;
 VAR_12->envp = VAR_4;

 VAR_12->cleanup = VAR_9;
 VAR_12->init = VAR_6;
 VAR_12->data = VAR_11;
  out:
 return VAR_12;
}
