
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vncBuffer ;
typedef int HGLYPH ;




 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int,int,int,int,int *,int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int,int) ;
 int FUNC_6 (int ,int,int,int,int,int *,int,int,int) ;
 int FUNC_7 (int*,int*,int*,int*) ;

void
FUNC_8(int VAR_1,
                  int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                 HGLYPH VAR_6, int VAR_7, int VAR_8,
                     int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 vncBuffer *VAR_15 = FUNC_3(VAR_6);

 VAR_2 &= 0xffff;
 VAR_3 &= 0xffff;



 if (VAR_1 == 128 && VAR_10 == VAR_9)
  VAR_9 = VAR_10 ^ 0xff;

 VAR_13 = VAR_2;
 VAR_14 = VAR_3;

 for (VAR_12 = VAR_8; VAR_12 < VAR_8 + VAR_5; VAR_12++)
 {
  for (VAR_11 = VAR_7; VAR_11 < VAR_7 + VAR_4; VAR_11++)
  {
   FUNC_5(VAR_15, VAR_11, VAR_12, FUNC_4(VAR_15, VAR_11, VAR_12) ? VAR_10 : VAR_9);
  }
 }

 switch (VAR_1)
 {
  case 128:
   if (FUNC_7(&VAR_2, &VAR_3, &VAR_4, &VAR_5))
   {

    VAR_7 += VAR_2 - VAR_13;
    VAR_8 += VAR_3 - VAR_14;
    FUNC_6(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_15, VAR_7, VAR_8, VAR_9);
   }
   break;
  case 129:
   if (FUNC_7(&VAR_2, &VAR_3, &VAR_4, &VAR_5))
   {

    VAR_7 += VAR_2 - VAR_13;
    VAR_8 += VAR_3 - VAR_14;
    FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_15, VAR_7, VAR_8);
   }
   break;

  default:
   FUNC_0("mix %d\n", VAR_1);
 }
 FUNC_2(VAR_15);
}
