
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 if (FUNC_0(VAR_1 + VAR_2, VAR_2, VAR_0)) {
  FUNC_1("mprotect");
  return 1;
 }

 return 0;
}
