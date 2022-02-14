
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;

uint32
FUNC_3(int VAR_3,
      Datum VAR_4,
      Datum VAR_5,
      Datum VAR_6,
      Datum VAR_7)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_2 ||
  !FUNC_1(VAR_1[VAR_3]))
  FUNC_2(VAR_0, "invalid cache ID: %d", VAR_3);

 return FUNC_0(VAR_1[VAR_3], VAR_4, VAR_5, VAR_6, VAR_7);
}
