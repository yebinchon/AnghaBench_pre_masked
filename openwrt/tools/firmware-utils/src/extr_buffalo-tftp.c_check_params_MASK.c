
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_2 = -1;

 if (VAR_0 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto out;
 }

 if (VAR_1 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto out;
 }

 VAR_2 = 0;

out:
 return VAR_2;
}
