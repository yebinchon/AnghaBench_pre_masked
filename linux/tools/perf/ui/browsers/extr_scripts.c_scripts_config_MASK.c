
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_config {size_t index; int extra_format; int * paths; int * names; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char const*,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 struct script_config *VAR_4 = VAR_3;

 if (!FUNC_2(VAR_1, "scripts."))
  return -1;
 if (VAR_4->index >= VAR_0)
  return -1;
 VAR_4->names[VAR_4->index] = FUNC_1(VAR_1 + 7);
 if (!VAR_4->names[VAR_4->index])
  return -1;
 if (FUNC_0(&VAR_4->paths[VAR_4->index], "%s %d", VAR_2,
       VAR_4->extra_format) < 0)
  return -1;
 VAR_4->index++;
 return 0;
}
