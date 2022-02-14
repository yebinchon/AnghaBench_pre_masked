
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void **VAR_1, unsigned int VAR_2)
{
 *VAR_1 = FUNC_0(VAR_2, 1);
 if (!*VAR_1) {
  FUNC_1("failed to allocate memory for output data/ctx: %s",
        FUNC_2(VAR_0));
  return -1;
 }

 return 0;
}
