
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char*,int,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 if (FUNC_2(VAR_0) == -1) {
  if (VAR_5 == VAR_1 || VAR_5 == VAR_2) {
   FUNC_0(4);
  }
  FUNC_0(1);
 }
 if (FUNC_1(((void*)0), "/", ((void*)0), VAR_3|VAR_4, ((void*)0)) == -1) {
  FUNC_0(1);
 }
 if (FUNC_1(((void*)0), "/tmp", "tmpfs", 0, ((void*)0)) == -1) {
  FUNC_0(1);
 }
}
