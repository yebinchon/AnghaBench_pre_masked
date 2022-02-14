
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {scalar_t__ path; scalar_t__ found; } ;


 struct fs* VAR_0 ;
 char const* FUNC_0 (struct fs*) ;

__attribute__((used)) static const char *FUNC_1(int VAR_1)
{
 struct fs *VAR_2 = &VAR_0[VAR_1];

 if (VAR_2->found)
  return (const char *)VAR_2->path;

 return FUNC_0(VAR_2);
}
