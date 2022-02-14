
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;

void
FUNC_3(int VAR_3, uint32 VAR_4)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_2)
  FUNC_2(VAR_0, "invalid cache ID: %d", VAR_3);


 if (!FUNC_1(VAR_1[VAR_3]))
  return;

 FUNC_0(VAR_1[VAR_3], VAR_4);
}
