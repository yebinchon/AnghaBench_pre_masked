
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*) ;
 char* FUNC_1 (void const*,int,int*) ;
 int FUNC_2 (void const*,int) ;

__attribute__((used)) static int FUNC_3(const void *VAR_0, int VAR_1)
{
 int VAR_2 = 0, VAR_3;
 const char *VAR_4;

 FUNC_0(VAR_0);

 for (;;) {
  VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
  if (!VAR_4)
   return VAR_3;


  if (VAR_3 == 0)
   break;

  VAR_1 = FUNC_2(VAR_0, VAR_1);
  if (VAR_1 < 0)
   return VAR_1;
  VAR_2 += VAR_3 + 1;
 }


 if (VAR_2 == 0)
  VAR_2++;
 return VAR_2;
}
