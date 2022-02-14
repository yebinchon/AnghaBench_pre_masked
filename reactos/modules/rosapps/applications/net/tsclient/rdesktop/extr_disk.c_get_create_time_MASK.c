
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_ctime; int st_atime; int st_mtime; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static time_t
FUNC_1(struct stat *VAR_0)
{
 time_t VAR_1, VAR_2;

 VAR_1 = FUNC_0(VAR_0->st_ctime, VAR_0->st_mtime);
 VAR_2 = FUNC_0(VAR_1, VAR_0->st_atime);

 if (VAR_2 != (time_t) 0)
  return VAR_2;

 return VAR_1;
}
