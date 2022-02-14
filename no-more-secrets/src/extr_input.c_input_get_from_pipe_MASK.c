
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char**,int *) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(unsigned char** VAR_1)
{
 int VAR_2;

 if (FUNC_2(VAR_0))
 {
  FUNC_0("Input data from a piped or redirected source is required.");
  return -1;
 }

 VAR_2 = FUNC_1(VAR_1, ((void*)0));
 if (VAR_2 < 0)
 {
  FUNC_0("Could not get input.");
  return -1;
 }
 if (VAR_2 == 0)
 {
  FUNC_0("No input provided.");
  return -1;
 }

 return VAR_2;
}
