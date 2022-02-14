
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int*,int*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void *FUNC_4(void *VAR_1)
{
 int VAR_2, VAR_3 = *(u32 *) VAR_1;
 int VAR_4[17], VAR_5, VAR_6, VAR_7, VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < 10000; VAR_5++) {
  VAR_2 = FUNC_1(VAR_3, &VAR_8, VAR_4, VAR_0);
  if (FUNC_0(VAR_2)) {
   FUNC_2("lookup failed\n");
   goto out;
  }
  if (FUNC_0(VAR_4[0] != 0)) {
   FUNC_2("lookup #%d var[0]=%d\n", VAR_5, VAR_4[0]);
   goto out;
  }
  VAR_7 = VAR_4[1];
  for (VAR_6 = 2; VAR_6 < 17; VAR_6++) {
   if (VAR_4[VAR_6] == VAR_7)
    continue;
   FUNC_2("lookup #%d var[1]=%d var[%d]=%d\n",
          VAR_5, VAR_7, VAR_6, VAR_4[VAR_6]);
   FUNC_0(VAR_4[VAR_6] != VAR_7);
   goto out;
  }
 }
out:
 FUNC_3(VAR_1);
}
