
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {char const* path; int name; } ;


 scalar_t__ FUNC_0 (struct fs*) ;
 struct fs* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,int ,int *) ;
 char* FUNC_3 (struct fs*) ;

__attribute__((used)) static const char *FUNC_4(int VAR_1)
{
 struct fs *VAR_2 = &VAR_0[VAR_1];
 const char *VAR_3;

 if (FUNC_1(VAR_1))
  return (const char *)VAR_2->path;

 VAR_3 = FUNC_3(VAR_2);

 if (FUNC_2(((void*)0), VAR_3, VAR_2->name, 0, ((void*)0)) < 0)
  return ((void*)0);

 return FUNC_0(VAR_2) ? VAR_2->path : ((void*)0);
}
