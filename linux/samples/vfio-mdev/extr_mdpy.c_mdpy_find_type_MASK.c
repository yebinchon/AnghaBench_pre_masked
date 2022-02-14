
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdpy_type {int name; } ;
struct kobject {int name; } ;


 int FUNC_0 (struct mdpy_type const*) ;
 struct mdpy_type const* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static const struct mdpy_type *FUNC_2(struct kobject *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (FUNC_1(VAR_0[VAR_2].name, VAR_1->name) == 0)
   return VAR_0 + VAR_2;
 return ((void*)0);
}
