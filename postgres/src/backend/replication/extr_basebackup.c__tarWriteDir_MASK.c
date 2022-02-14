
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int int64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,int *,struct stat*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int64
FUNC_3(const char *VAR_2, int VAR_3, struct stat *VAR_4,
    bool VAR_5)
{


 if (FUNC_0(VAR_4->st_mode))



  VAR_4->st_mode = VAR_0 | VAR_1;

 return FUNC_1(VAR_2 + VAR_3 + 1, ((void*)0), VAR_4, VAR_5);
}
