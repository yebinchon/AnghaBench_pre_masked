
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int breaked; } ;
typedef int RThreadFunctionRet ;
typedef TYPE_1__ RThread ;


 int VAR_0 ;
 int FUNC_0 (char*,char const,char) ;
 int FUNC_1 (int) ;

__attribute__((used)) static RThreadFunctionRet FUNC_2(RThread *VAR_1) {
 const char *VAR_2 = "\\|/-";
 int VAR_3 = 0;
 if (VAR_1) {
  while (!VAR_1->breaked) {
   FUNC_0 ("%c] Loading..%c     \r[", VAR_2[VAR_3%4], "."[VAR_3%2]);
   FUNC_1 (100000);
   VAR_3++;
  }
 }
 return VAR_0;
}
