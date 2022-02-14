
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kset; } ;
struct foo_obj {TYPE_1__ kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int *,char*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 struct foo_obj* FUNC_3 (int,int ) ;

__attribute__((used)) static struct foo_obj *FUNC_4(const char *VAR_4)
{
 struct foo_obj *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);





 VAR_5->kobj.kset = VAR_2;







 VAR_6 = FUNC_0(&VAR_5->kobj, &VAR_3, ((void*)0), "%s", VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->kobj);
  return ((void*)0);
 }





 FUNC_2(&VAR_5->kobj, VAR_1);

 return VAR_5;
}
