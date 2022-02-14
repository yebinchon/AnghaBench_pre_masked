
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct config_generic *VAR_2 = *(struct config_generic *const *) VAR_0;
 const struct config_generic *VAR_3 = *(struct config_generic *const *) VAR_1;

 return FUNC_0(VAR_2->name, VAR_3->name);
}
