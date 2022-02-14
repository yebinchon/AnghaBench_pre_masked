
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned long,...) ;
 int VAR_2 ;
 long FUNC_2 (unsigned long,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3, bool *VAR_4)
{

 FUNC_0(VAR_2);

 long VAR_5 = FUNC_2(VAR_3, 0, 0, 0, 0, 0, 0);
 if (VAR_5 == 0) {
  FUNC_1("[FAIL]\tsyscall %lu succeeded, but it should have failed\n", VAR_3);
  *VAR_4 = 0;
 } else if (VAR_1 != VAR_0) {
  FUNC_1("[FAIL]\tsyscall %lu had error code %d, but it should have reported ENOSYS\n", VAR_3, VAR_1);
  *VAR_4 = 0;
 }
}
