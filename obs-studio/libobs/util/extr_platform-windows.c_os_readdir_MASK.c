
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct os_dirent {int directory; int d_name; } ;
struct TYPE_6__ {int cFileName; } ;
struct TYPE_5__ {int first; struct os_dirent out; TYPE_3__ wfd; int handle; } ;
typedef TYPE_1__ os_dir_t ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,int) ;

struct os_dirent *FUNC_3(os_dir_t *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 if (VAR_0->first) {
  VAR_0->first = 0;
 } else {
  if (!FUNC_0(VAR_0->handle, &VAR_0->wfd))
   return ((void*)0);
 }

 FUNC_2(VAR_0->wfd.cFileName, 0, VAR_0->out.d_name,
         sizeof(VAR_0->out.d_name));

 VAR_0->out.directory = FUNC_1(&VAR_0->wfd);

 return &VAR_0->out;
}
