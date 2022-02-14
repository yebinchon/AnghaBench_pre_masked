
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct os_dirent {char* d_name; int directory; } ;
struct dstr {int array; int member_0; } ;
struct TYPE_4__ {struct os_dirent out; int path; TYPE_2__* cur_dirent; int dir; } ;
typedef TYPE_1__ os_dir_t ;
struct TYPE_5__ {int d_name; } ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*,int ) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int) ;

struct os_dirent *FUNC_6(os_dir_t *VAR_0)
{
 struct dstr VAR_1 = {0};

 if (!VAR_0)
  return ((void*)0);

 VAR_0->cur_dirent = FUNC_4(VAR_0->dir);
 if (!VAR_0->cur_dirent)
  return ((void*)0);

 FUNC_5(VAR_0->out.d_name, VAR_0->cur_dirent->d_name, 255);

 FUNC_1(&VAR_1, VAR_0->path);
 FUNC_0(&VAR_1, "/");
 FUNC_0(&VAR_1, VAR_0->out.d_name);

 VAR_0->out.directory = FUNC_3(VAR_1.array);

 FUNC_2(&VAR_1);

 return &VAR_0->out;
}
