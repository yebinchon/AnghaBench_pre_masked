
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (void const*,unsigned char*,size_t) ;
 int FUNC_3 (int *,scalar_t__,unsigned char*,scalar_t__) ;

int FUNC_4(FILE *VAR_1, uint64_t VAR_2,
 const void *VAR_3, uint64_t VAR_4)
{
   int VAR_5 = 0;
   unsigned char *VAR_6 = FUNC_1(VAR_0, 16);

   if(VAR_6 == ((void*)0))
      return 0;

   if(!FUNC_3(VAR_1, VAR_2, VAR_6, VAR_4))
      goto out;

   if(FUNC_2(VAR_3, VAR_6, (size_t)VAR_4))
      goto out;

   VAR_5 = 1;

out:
   FUNC_0(VAR_6);
   return VAR_5;
}
