
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, int VAR_1)
{
 char VAR_2 = VAR_0[0];
 int VAR_3;


 if (VAR_2 < 'a' || VAR_2 > 'z')
  FUNC_0(1, 0, "data initial byte out of range");

 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2 == 'z')
   VAR_2 = 'a';
  else
   VAR_2++;

  if (VAR_0[VAR_3] != VAR_2)
   FUNC_0(1, 0, "data[%d]: len %d, %c(%hhu) != %c(%hhu)\n",
         VAR_3, VAR_1,
         FUNC_1(VAR_0[VAR_3]), VAR_0[VAR_3],
         FUNC_1(VAR_2), VAR_2);
 }
}
