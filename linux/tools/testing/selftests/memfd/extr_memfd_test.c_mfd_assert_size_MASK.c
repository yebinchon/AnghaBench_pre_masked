
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,long long,...) ;

__attribute__((used)) static void FUNC_3(int VAR_0, size_t VAR_1)
{
 struct stat VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_3 < 0) {
  FUNC_2("fstat(%d) failed: %m\n", VAR_0);
  FUNC_0();
 } else if (VAR_2.st_size != VAR_1) {
  FUNC_2("wrong file size %lld, but expected %lld\n",
         (long long)VAR_2.st_size, (long long)VAR_1);
  FUNC_0();
 }
}
