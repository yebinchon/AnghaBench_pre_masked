
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct perf_data {int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;

__attribute__((used)) static bool FUNC_1(struct perf_data *VAR_2)
{
 struct stat VAR_3;

 if (FUNC_0(VAR_2->path, &VAR_3))
  return 0;

 return (VAR_3.st_mode & VAR_1) == VAR_0;
}
