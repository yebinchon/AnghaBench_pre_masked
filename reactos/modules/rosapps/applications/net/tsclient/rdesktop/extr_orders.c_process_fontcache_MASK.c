
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef int HGLYPH ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,int,int,int,int,int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int *,int,int,int*) ;

__attribute__((used)) static void
FUNC_6(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 HGLYPH VAR_2;
 uint8 VAR_3, VAR_4;
 uint16 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;
 uint8 *VAR_12;

 FUNC_3(VAR_1, VAR_3);
 FUNC_3(VAR_1, VAR_4);

 FUNC_0(("FONTCACHE(font=%d,n=%d)\n", VAR_3, VAR_4));

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
 {
  FUNC_2(VAR_1, VAR_5);
  FUNC_2(VAR_1, VAR_6);
  FUNC_2(VAR_1, VAR_7);
  FUNC_2(VAR_1, VAR_8);
  FUNC_2(VAR_1, VAR_9);

  VAR_11 = (VAR_9 * ((VAR_8 + 7) / 8) + 3) & ~3;
  FUNC_4(VAR_1, VAR_12, VAR_11);

  VAR_2 = FUNC_5(VAR_0, VAR_8, VAR_9, VAR_12);
  FUNC_1(VAR_0, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_2);
 }
}
