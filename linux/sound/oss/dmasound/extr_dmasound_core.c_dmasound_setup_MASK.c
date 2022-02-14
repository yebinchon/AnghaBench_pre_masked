
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char*,int ,int*) ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(char *VAR_7)
{
 int VAR_8[6], VAR_9;

 VAR_7 = FUNC_1(VAR_7, FUNC_0(VAR_8), VAR_8);







 switch (VAR_8[0]) {
 case 3:
  if ((VAR_8[3] < 0) || (VAR_8[3] > VAR_1))
   FUNC_2("dmasound_setup: invalid catch radius, using default = %d\n", VAR_4);
  else
   VAR_4 = VAR_8[3];

 case 2:
  if (VAR_8[1] < VAR_2)
   FUNC_2("dmasound_setup: invalid number of buffers, using default = %d\n", VAR_5);
  else
   VAR_5 = VAR_8[1];

 case 1:
  if ((VAR_9 = VAR_8[2]) < 256)
   VAR_9 <<= 10 ;
                if (VAR_9 < VAR_3 || VAR_9 > VAR_0)
                        FUNC_2("dmasound_setup: invalid write buffer size, using default = %d\n", VAR_6);
                else
                        VAR_6 = VAR_9;
 case 0:
  break;
 default:
  FUNC_2("dmasound_setup: invalid number of arguments\n");
  return 0;
 }
 return 1;
}
