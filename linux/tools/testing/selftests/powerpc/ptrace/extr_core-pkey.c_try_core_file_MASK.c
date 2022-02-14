
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime; int st_size; } ;
struct shared_info {scalar_t__ core_time; } ;
typedef int pid_t ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct stat*) ;

__attribute__((used)) static off_t FUNC_1(const char *VAR_1, struct shared_info *VAR_2,
      pid_t VAR_3)
{
 struct stat VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_5 == -1)
  return VAR_0;


 return VAR_4.st_mtime >= VAR_2->core_time ? VAR_4.st_size : VAR_0;
}
