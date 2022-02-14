
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int STREAM ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int,int,int *,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,int,int,int,int,int,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

void
FUNC_10(STREAM VAR_0)
{
 uint16 VAR_1;
 uint16 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 uint16 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 uint8 *VAR_15, *VAR_16;
 int VAR_17;

 FUNC_3(VAR_0, VAR_1);

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
 {
  FUNC_3(VAR_0, VAR_2);
  FUNC_3(VAR_0, VAR_3);
  FUNC_3(VAR_0, VAR_4);
  FUNC_3(VAR_0, VAR_5);
  FUNC_3(VAR_0, VAR_6);
  FUNC_3(VAR_0, VAR_7);
  FUNC_3(VAR_0, VAR_10);
  VAR_11 = (VAR_10 + 7) / 8;
  FUNC_3(VAR_0, VAR_12);
  FUNC_3(VAR_0, VAR_13);

  VAR_8 = VAR_4 - VAR_2 + 1;
  VAR_9 = VAR_5 - VAR_3 + 1;

  FUNC_0(("BITMAP_UPDATE(l=%d,t=%d,r=%d,b=%d,w=%d,h=%d,Bpp=%d,cmp=%d)\n",
         VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_11, VAR_12));

  if (!VAR_12)
  {
   int VAR_18;
   VAR_16 = (uint8 *) FUNC_9(VAR_6 * VAR_7 * VAR_11);
   for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++)
   {
    FUNC_4(VAR_0, &VAR_16[(VAR_7 - VAR_18 - 1) * (VAR_6 * VAR_11)],
       VAR_6 * VAR_11);
   }
   FUNC_7(VAR_2, VAR_3, VAR_8, VAR_9, VAR_6, VAR_7, VAR_16);
   FUNC_8(VAR_16);
   continue;
  }


  if (VAR_12 & 0x400)
  {
   VAR_14 = VAR_13;
  }
  else
  {
   FUNC_6(VAR_0, 2);
   FUNC_3(VAR_0, VAR_14);
   FUNC_6(VAR_0, 4);
  }
  FUNC_5(VAR_0, VAR_15, VAR_14);
  VAR_16 = (uint8 *) FUNC_9(VAR_6 * VAR_7 * VAR_11);
  if (FUNC_2(VAR_16, VAR_6, VAR_7, VAR_15, VAR_14, VAR_11))
  {
   FUNC_7(VAR_2, VAR_3, VAR_8, VAR_9, VAR_6, VAR_7, VAR_16);
  }
  else
  {
   FUNC_1(("Failed to decompress data\n"));
  }

  FUNC_8(VAR_16);
 }
}
