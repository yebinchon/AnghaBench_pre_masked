
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t num; TYPE_1__* array; } ;
struct TYPE_6__ {char const* name; TYPE_5__ children; } ;
typedef TYPE_1__ profile_entry ;


 int FUNC_0 (TYPE_5__) ;
 TYPE_1__* FUNC_1 (int ,char const*) ;

__attribute__((used)) static profile_entry *FUNC_2(profile_entry *VAR_0, const char *VAR_1)
{
 const size_t VAR_2 = VAR_0->children.num;
 for (size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  profile_entry *VAR_4 = &VAR_0->children.array[VAR_3];
  if (VAR_4->name == VAR_1)
   return VAR_4;
 }

 return FUNC_1(FUNC_0(VAR_0->children), VAR_1);
}
