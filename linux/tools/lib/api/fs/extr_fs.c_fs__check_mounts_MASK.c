
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {char** mounts; int found; int path; int magic; } ;


 scalar_t__ FUNC_0 (char const* const,int ) ;
 int FUNC_1 (int ,char const* const) ;

__attribute__((used)) static bool FUNC_2(struct fs *VAR_0)
{
 const char * const *VAR_1;

 VAR_1 = VAR_0->mounts;
 while (*VAR_1) {
  if (FUNC_0(*VAR_1, VAR_0->magic) == 0) {
   VAR_0->found = 1;
   FUNC_1(VAR_0->path, *VAR_1);
   return 1;
  }
  VAR_1++;
 }

 return 0;
}
