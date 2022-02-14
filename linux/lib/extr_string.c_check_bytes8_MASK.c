
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u8 ;



__attribute__((used)) static void *FUNC_0(const u8 *VAR_0, u8 VAR_1, unsigned int VAR_2)
{
 while (VAR_2) {
  if (*VAR_0 != VAR_1)
   return (void *)VAR_0;
  VAR_0++;
  VAR_2--;
 }
 return ((void*)0);
}
