
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usTransLength ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4(UINT8 VAR_5, UINT8 *VAR_6, CHAR *VAR_7, UINT16 VAR_8)
{
 UINT8 *VAR_9 = (VAR_6 + VAR_4);
 UINT16 VAR_10;
 UINT8 *VAR_11 = (VAR_6 + VAR_4);

 FUNC_2(VAR_11, VAR_1);
 FUNC_2(VAR_11, VAR_5);
 VAR_11 = FUNC_1(VAR_11, VAR_8 + VAR_2);

 if (VAR_8 <= VAR_3)
 {
  FUNC_1(VAR_11, VAR_8);
  VAR_11 = FUNC_1(VAR_11, VAR_8);
  FUNC_3((VAR_6 + VAR_4) + VAR_0, VAR_7, VAR_8);


  FUNC_0(VAR_6, VAR_8 + VAR_0);
 }
 else
 {

  VAR_10 = (VAR_8/VAR_3);
  FUNC_1(VAR_11, VAR_8 + VAR_2 + VAR_10*VAR_2);
  VAR_11 = FUNC_1(VAR_11, VAR_3);
  FUNC_3(VAR_6 + VAR_4 + VAR_0, VAR_7, VAR_3);
  VAR_8 -= VAR_3;
  VAR_7 += VAR_3;


  FUNC_0(VAR_6, VAR_3 + VAR_0);

  while (VAR_8)
  {
   if (VAR_8 <= VAR_3)
   {
    VAR_10 = VAR_8;
    VAR_8 = 0;

   }
   else
   {
    VAR_10 = VAR_3;
    VAR_8 -= VAR_10;
   }

   *(UINT16 *)VAR_9 = VAR_10;
   FUNC_3(VAR_9 + VAR_2, VAR_7, VAR_10);
   VAR_7 += VAR_10;


   FUNC_0((UINT8 *)VAR_9, VAR_10 + sizeof(VAR_10));
  }
 }
}
