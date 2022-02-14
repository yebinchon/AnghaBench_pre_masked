
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 scalar_t__ FUNC_0 (int,double*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (double) ;

__attribute__((used)) static bool
FUNC_4(int *VAR_1, void **VAR_2, GucSource VAR_3)
{
 if (*VAR_1 != 0)
 {
  FUNC_1("effective_io_concurrency must be set to 0 on platforms that lack posix_fadvise().");
  return 0;
 }
 return 1;

}
