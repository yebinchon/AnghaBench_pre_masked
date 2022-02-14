
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static u64 FUNC_2(u64 VAR_1)
{
 if (VAR_1 != 0) {
  return FUNC_0(VAR_0, VAR_1);
 } else {
  FUNC_1("invalid rate from userspace: %llu\n",
        VAR_1);
  return 0;
 }
}
