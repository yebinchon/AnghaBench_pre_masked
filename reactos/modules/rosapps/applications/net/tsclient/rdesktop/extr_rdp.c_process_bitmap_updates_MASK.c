
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int STREAM ;
typedef int RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int,int,int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,int,int,int,int,int,int,int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

void
FUNC_12(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 uint16 VAR_2;
 uint16 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 uint16 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 uint8 *VAR_16, *VAR_17;
 int VAR_18;

 FUNC_4(VAR_1, VAR_2);

 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++)
 {
  FUNC_4(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_4);
  FUNC_4(VAR_1, VAR_5);
  FUNC_4(VAR_1, VAR_6);
  FUNC_4(VAR_1, VAR_7);
  FUNC_4(VAR_1, VAR_8);
  FUNC_4(VAR_1, VAR_11);
  VAR_12 = (VAR_11 + 7) / 8;
  FUNC_4(VAR_1, VAR_13);
  FUNC_4(VAR_1, VAR_14);

  VAR_9 = VAR_5 - VAR_3 + 1;
  VAR_10 = VAR_6 - VAR_4 + 1;

  FUNC_0(("BITMAP_UPDATE(l=%d,t=%d,r=%d,b=%d,w=%d,h=%d,Bpp=%d,cmp=%d)\n",
         VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_12, VAR_13));

  if (!VAR_13)
  {
   FUNC_6(VAR_1, VAR_17, VAR_7 * VAR_8 * VAR_12);
   FUNC_9(VAR_0, VAR_3, VAR_4, VAR_9, VAR_10, VAR_7, VAR_8, VAR_17);

   continue;
  }


  if (VAR_13 & 0x400)
  {
   VAR_15 = VAR_14;
  }
  else
  {
   FUNC_7(VAR_1, 2);
   FUNC_4(VAR_1, VAR_15);
   FUNC_7(VAR_1, 4);
  }
  FUNC_6(VAR_1, VAR_16, VAR_15);
  VAR_17 = (uint8 *) FUNC_8(VAR_7 * VAR_8 * VAR_12);

  if(VAR_17 == ((void*)0))
   return;

  if (FUNC_2(VAR_17, VAR_7, VAR_8, VAR_16, VAR_15, VAR_12))
  {
   FUNC_9(VAR_0, VAR_3, VAR_4, VAR_9, VAR_10, VAR_7, VAR_8, VAR_17);
  }
  else
  {
   FUNC_1(("Failed to decompress data\n"));
  }

  FUNC_3(VAR_17);
 }
}
