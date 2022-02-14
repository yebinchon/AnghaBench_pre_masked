
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vncBuffer ;
typedef size_t uint8 ;
typedef int HGLYPH ;


 size_t* VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int,int,int) ;

HGLYPH
FUNC_2(int VAR_2, int VAR_3, uint8 * VAR_4)
{
 int VAR_5, VAR_6;
 vncBuffer *VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, 8);


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  {
   int VAR_8 = VAR_5 / 8 + (VAR_6 * ((VAR_2 + 7) / 8));
   VAR_8 = VAR_1 ? VAR_0[VAR_4[VAR_8]] : VAR_4[VAR_8];
   VAR_8 = (VAR_8 >> (VAR_5 & 7)) & 0x01;
   FUNC_1(VAR_7, VAR_5, VAR_6, VAR_8 ? 0x7f : 0x00);
  }
 }

 return (HGLYPH) VAR_7;
}
