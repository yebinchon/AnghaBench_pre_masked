
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 unsigned long long VAR_2 ;

bool FUNC_3(void)
{
 if (VAR_1)
  return 1;

 VAR_1 = FUNC_2(0, 0);
 if (!VAR_1) {
  FUNC_0(VAR_0, "Couldn't create libvlc instance");
  return 0;
 }

 VAR_2 = (uint64_t)FUNC_1() * 1000ULL;
 return 1;
}
