
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct FTW {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const char *VAR_4, const struct stat *VAR_5, int VAR_6, struct FTW *VAR_7)
{
 (void) VAR_4;
 (void) VAR_7;

 if (VAR_5->st_size && (VAR_6 == VAR_1 || VAR_6 == VAR_0))
  VAR_2 += VAR_5->st_size;

 ++VAR_3;
 return 0;
}
