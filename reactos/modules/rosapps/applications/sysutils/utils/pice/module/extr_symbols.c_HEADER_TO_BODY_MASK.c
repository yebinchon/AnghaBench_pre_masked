
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* PVOID ;
typedef scalar_t__ POBJECT_HEADER ;
typedef int OBJECT_HEADER ;
typedef int COMMON_BODY_HEADER ;



PVOID FUNC_0(POBJECT_HEADER VAR_0)
{
   return(((void *)VAR_0)+sizeof(OBJECT_HEADER)-sizeof(COMMON_BODY_HEADER));
}
