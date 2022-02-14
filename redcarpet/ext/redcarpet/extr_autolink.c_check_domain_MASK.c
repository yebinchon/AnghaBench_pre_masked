
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (char) ;
 int * FUNC_1 (char*,char) ;

__attribute__((used)) static size_t
FUNC_2(uint8_t *VAR_0, size_t VAR_1, int VAR_2)
{
 size_t VAR_3, VAR_4 = 0;

 if (!FUNC_0(VAR_0[0]))
  return 0;

 for (VAR_3 = 1; VAR_3 < VAR_1 - 1; ++VAR_3) {
  if (FUNC_1(".:", VAR_0[VAR_3]) != ((void*)0)) VAR_4++;
  else if (!FUNC_0(VAR_0[VAR_3]) && VAR_0[VAR_3] != '-') break;
 }

 if (VAR_2) {




  return VAR_3;
 } else {


  return VAR_4 ? VAR_3 : 0;
 }
}
