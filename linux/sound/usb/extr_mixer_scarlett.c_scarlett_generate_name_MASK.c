
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static void FUNC_1(int VAR_5, char *VAR_6, int VAR_7[])
{
 if (VAR_5 > VAR_7[VAR_2])
  FUNC_0(VAR_6, "Mix %c",
   'A'+(VAR_5 - VAR_7[VAR_2] - 1));
 else if (VAR_5 > VAR_7[VAR_0])
  FUNC_0(VAR_6, "ADAT %d", VAR_5 - VAR_7[VAR_0]);
 else if (VAR_5 > VAR_7[VAR_4])
  FUNC_0(VAR_6, "SPDIF %d", VAR_5 - VAR_7[VAR_4]);
 else if (VAR_5 > VAR_7[VAR_1])
  FUNC_0(VAR_6, "Analog %d", VAR_5 - VAR_7[VAR_1]);
 else if (VAR_5 > VAR_7[VAR_3])
  FUNC_0(VAR_6, "PCM %d", VAR_5 - VAR_7[VAR_3]);
 else
  FUNC_0(VAR_6, "Off");
}
