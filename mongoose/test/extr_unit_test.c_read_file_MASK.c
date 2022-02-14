
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (int ,struct stat*) ;
 scalar_t__ FUNC_4 (size_t) ;
 int * FUNC_5 (char const*,char*) ;

__attribute__((used)) static char *FUNC_6(const char *VAR_0, size_t *VAR_1) {
  FILE *VAR_2;
  struct stat VAR_3;
  char *VAR_4 = ((void*)0);
  if ((VAR_2 = FUNC_5(VAR_0, "rb")) != ((void*)0) && !FUNC_3(FUNC_1(VAR_2), &VAR_3)) {
    *VAR_1 = VAR_3.st_size;
    VAR_4 = (char *) FUNC_4(*VAR_1);
    FUNC_2(VAR_4, 1, *VAR_1, VAR_2);
    FUNC_0(VAR_2);
  }
  return VAR_4;
}
