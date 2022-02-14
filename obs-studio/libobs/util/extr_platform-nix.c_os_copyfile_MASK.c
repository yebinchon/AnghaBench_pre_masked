
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int data ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (int *,int,int,int *) ;
 size_t FUNC_4 (int *,int,size_t,int *) ;
 scalar_t__ FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_0, const char *VAR_1)
{
 FILE *VAR_2 = ((void*)0);
 FILE *VAR_3 = ((void*)0);
 uint8_t VAR_4[4096];
 int VAR_5 = -1;
 size_t VAR_6;

 if (FUNC_5(VAR_1))
  return -1;

 VAR_3 = FUNC_2(VAR_0, "rb");
 if (!VAR_3)
  return -1;

 VAR_2 = FUNC_2(VAR_1, "ab+");
 if (!VAR_2)
  goto error;

 do {
  VAR_6 = FUNC_3(VAR_4, 1, sizeof(VAR_4), VAR_3);
  if (VAR_6)
   VAR_6 = FUNC_4(VAR_4, 1, VAR_6, VAR_2);
 } while (VAR_6 == sizeof(VAR_4));

 VAR_5 = FUNC_1(VAR_3) ? 0 : -1;

error:
 if (VAR_2)
  FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 return VAR_5;
}
