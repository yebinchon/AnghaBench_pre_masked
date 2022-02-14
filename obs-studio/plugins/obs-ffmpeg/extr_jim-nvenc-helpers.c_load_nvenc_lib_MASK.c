
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;

bool FUNC_1(void)
{
 if (sizeof(void *) == 8) {
  VAR_0 = FUNC_0("nvEncodeAPI64.dll");
 } else {
  VAR_0 = FUNC_0("nvEncodeAPI.dll");
 }

 return !!VAR_0;
}
