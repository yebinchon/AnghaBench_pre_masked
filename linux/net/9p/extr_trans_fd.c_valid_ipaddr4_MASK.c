
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*,int*,int*,int*,int*) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4[4];

 VAR_2 = FUNC_0(VAR_1, "%d.%d.%d.%d", &VAR_4[0], &VAR_4[1], &VAR_4[2], &VAR_4[3]);
 if (VAR_2 != 4)
  return -VAR_0;
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  if (VAR_4[VAR_3] > 255)
   return -VAR_0;
 }
 return 0;
}
