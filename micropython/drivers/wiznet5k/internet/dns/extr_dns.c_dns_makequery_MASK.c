
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;
typedef scalar_t__ cp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int * FUNC_1 (int *,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

int16_t FUNC_5(uint16_t VAR_2, char * VAR_3, uint8_t * VAR_4, uint16_t VAR_5)
{
 uint8_t *VAR_6;
 char *VAR_7;
 char VAR_8[VAR_1];
 char *VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;

 VAR_6 = VAR_4;

 VAR_0++;
 VAR_6 = FUNC_1(VAR_6, VAR_0);
 VAR_10 = (VAR_2 << 11) | 0x0100;
 VAR_6 = FUNC_1(VAR_6, VAR_10);
 VAR_6 = FUNC_1(VAR_6, 1);
 VAR_6 = FUNC_1(VAR_6, 0);
 VAR_6 = FUNC_1(VAR_6, 0);
 VAR_6 = FUNC_1(VAR_6, 0);

 FUNC_3(VAR_8, VAR_3);
 VAR_9 = VAR_8;
 VAR_11 = FUNC_4(VAR_9);
 for (;;)
 {

  VAR_7 = FUNC_2(VAR_9, '.');

  if (VAR_7 != ((void*)0)) VAR_5 = VAR_7 - VAR_9;
  else VAR_5 = VAR_11;

  *VAR_6++ = VAR_5;
  if (VAR_5 == 0) break;


  FUNC_0(VAR_6, VAR_9, VAR_5);
  VAR_6 += VAR_5;
  if (VAR_7 == ((void*)0))
  {
   *VAR_6++ = 0;
   break;
  }
  VAR_9 += VAR_5+1;
  VAR_11 -= VAR_5+1;
 }

 VAR_6 = FUNC_1(VAR_6, 0x0001);
 VAR_6 = FUNC_1(VAR_6, 0x0001);

 return ((int16_t)((uint32_t)(VAR_6) - (uint32_t)(VAR_4)));
}
