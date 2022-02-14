
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef int HBITMAP ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (int ,int) ;
 int* VAR_0 ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int *,int,int,int*) ;
 int FUNC_8 (int*) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_10(RDPCLIENT * VAR_2, STREAM VAR_3)
{
 HBITMAP VAR_4;
 uint16 VAR_5, VAR_6;
 uint8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 uint8 *VAR_12;

 FUNC_3(VAR_3, VAR_7);
 FUNC_5(VAR_3, 1);
 FUNC_3(VAR_3, VAR_8);
 FUNC_3(VAR_3, VAR_9);
 FUNC_3(VAR_3, VAR_10);
 VAR_11 = (VAR_10 + 7) / 8;
 FUNC_2(VAR_3, VAR_6);
 FUNC_2(VAR_3, VAR_5);
 FUNC_4(VAR_3, VAR_12, VAR_6);

 FUNC_0(("RAW_BMPCACHE(cx=%d,cy=%d,id=%d,idx=%d)\n", VAR_8, VAR_9, VAR_7, VAR_5));
 VAR_4 = FUNC_7(VAR_2, VAR_8, VAR_9, VAR_12);


 FUNC_1(VAR_2, VAR_7, VAR_5, VAR_4);
}
