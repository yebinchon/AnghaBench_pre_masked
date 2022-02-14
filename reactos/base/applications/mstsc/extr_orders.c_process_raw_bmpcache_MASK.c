
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int STREAM ;
typedef int RD_HBITMAP ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int,int,int*) ;
 int FUNC_8 (int*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(STREAM VAR_0)
{
 RD_HBITMAP VAR_1;
 uint16 VAR_2, VAR_3;
 uint8 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 uint8 *VAR_9, *VAR_10;
 int VAR_11;

 FUNC_3(VAR_0, VAR_4);
 FUNC_5(VAR_0, 1);
 FUNC_3(VAR_0, VAR_5);
 FUNC_3(VAR_0, VAR_6);
 FUNC_3(VAR_0, VAR_7);
 VAR_8 = (VAR_7 + 7) / 8;
 FUNC_2(VAR_0, VAR_3);
 FUNC_2(VAR_0, VAR_2);
 FUNC_4(VAR_0, VAR_9, VAR_3);

 FUNC_0(("RAW_BMPCACHE(cx=%d,cy=%d,id=%d,idx=%d)\n", VAR_5, VAR_6, VAR_4, VAR_2));
 VAR_10 = (uint8 *) FUNC_9(VAR_5 * VAR_6 * VAR_8);
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
 {
  FUNC_6(&VAR_10[(VAR_6 - VAR_11 - 1) * (VAR_5 * VAR_8)], &VAR_9[VAR_11 * (VAR_5 * VAR_8)],
         VAR_5 * VAR_8);
 }

 VAR_1 = FUNC_7(VAR_5, VAR_6, VAR_10);
 FUNC_8(VAR_10);
 FUNC_1(VAR_4, VAR_2, VAR_1);
}
