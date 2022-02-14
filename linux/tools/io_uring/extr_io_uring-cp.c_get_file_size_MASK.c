
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned long long st_size; int st_mode; } ;
typedef unsigned long long off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 scalar_t__ FUNC_3 (int,int ,unsigned long long*) ;

__attribute__((used)) static int FUNC_4(int VAR_1, off_t *VAR_2)
{
 struct stat VAR_3;

 if (FUNC_2(VAR_1, &VAR_3) < 0)
  return -1;
 if (FUNC_1(VAR_3.st_mode)) {
  *VAR_2 = VAR_3.st_size;
  return 0;
 } else if (FUNC_0(VAR_3.st_mode)) {
  unsigned long long VAR_4;

  if (FUNC_3(VAR_1, VAR_0, &VAR_4) != 0)
   return -1;

  *VAR_2 = VAR_4;
  return 0;
 }

 return -1;
}
