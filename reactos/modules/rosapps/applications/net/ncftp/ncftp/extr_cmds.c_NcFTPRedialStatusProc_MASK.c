
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * FTPCIPtr ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(const FTPCIPtr VAR_3, int VAR_4, int VAR_5)
{
 VAR_0 = (VAR_3 != ((void*)0));
 if (VAR_4 == VAR_1) {
  if (VAR_5 > 0) {
   FUNC_0("Redialing (try %d)...", VAR_5);
   FUNC_1(1);
  }
 } else if (VAR_4 == VAR_2) {
  FUNC_0("Sleeping %d seconds...", VAR_5);
 }
}
