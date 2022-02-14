
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {TYPE_2__ d_name; } ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct path const*,char*,int ) ;
 int FUNC_4 (char*,int ,int ) ;

const char *FUNC_5(const struct path *VAR_2, char **VAR_3, char *VAR_4)
{
 char *VAR_5 = ((void*)0);

 *VAR_3 = FUNC_1();
 if (*VAR_3) {
  VAR_5 = FUNC_3(VAR_2, *VAR_3, VAR_1);
  if (FUNC_0(VAR_5)) {
   FUNC_2(*VAR_3);
   *VAR_3 = ((void*)0);
   VAR_5 = ((void*)0);
  }
 }

 if (!VAR_5) {
  FUNC_4(VAR_4, VAR_2->dentry->d_name.name, VAR_0);
  VAR_5 = VAR_4;
 }

 return VAR_5;
}
