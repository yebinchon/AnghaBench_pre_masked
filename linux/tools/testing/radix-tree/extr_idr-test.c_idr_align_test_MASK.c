
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct idr*,char*,int ,int ,int ) ;
 int FUNC_2 (struct idr*) ;
 char* FUNC_3 (struct idr*,int ) ;
 int FUNC_4 (struct idr*,void*,int) ;
 int FUNC_5 (struct idr*) ;
 int FUNC_6 (struct idr*,int) ;
 int FUNC_7 (struct idr*,char*,int ) ;

__attribute__((used)) static void FUNC_8(struct idr *VAR_1)
{
 char VAR_2[] = "Motorola 68000";
 int VAR_3, VAR_4;
 void *VAR_5;

 for (VAR_3 = 0; VAR_3 < 9; VAR_3++) {
  FUNC_0(FUNC_1(VAR_1, &VAR_2[VAR_3], 0, 0, VAR_0) != VAR_3);
  FUNC_4(VAR_1, VAR_5, VAR_4);
 }
 FUNC_2(VAR_1);

 for (VAR_3 = 1; VAR_3 < 10; VAR_3++) {
  FUNC_0(FUNC_1(VAR_1, &VAR_2[VAR_3], 0, 0, VAR_0) != VAR_3 - 1);
  FUNC_4(VAR_1, VAR_5, VAR_4);
 }
 FUNC_2(VAR_1);

 for (VAR_3 = 2; VAR_3 < 11; VAR_3++) {
  FUNC_0(FUNC_1(VAR_1, &VAR_2[VAR_3], 0, 0, VAR_0) != VAR_3 - 2);
  FUNC_4(VAR_1, VAR_5, VAR_4);
 }
 FUNC_2(VAR_1);

 for (VAR_3 = 3; VAR_3 < 12; VAR_3++) {
  FUNC_0(FUNC_1(VAR_1, &VAR_2[VAR_3], 0, 0, VAR_0) != VAR_3 - 3);
  FUNC_4(VAR_1, VAR_5, VAR_4);
 }
 FUNC_2(VAR_1);

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(FUNC_1(VAR_1, &VAR_2[VAR_3], 0, 0, VAR_0) != 0);
  FUNC_0(FUNC_1(VAR_1, &VAR_2[VAR_3 + 1], 0, 0, VAR_0) != 1);
  FUNC_4(VAR_1, VAR_5, VAR_4);
  FUNC_6(VAR_1, 1);
  FUNC_4(VAR_1, VAR_5, VAR_4);
  FUNC_6(VAR_1, 0);
  FUNC_0(!FUNC_5(VAR_1));
 }

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(FUNC_1(VAR_1, ((void*)0), 0, 0, VAR_0) != 0);
  FUNC_4(VAR_1, VAR_5, VAR_4);
  FUNC_7(VAR_1, &VAR_2[VAR_3], 0);
  FUNC_4(VAR_1, VAR_5, VAR_4);
  FUNC_0(FUNC_3(VAR_1, 0) != &VAR_2[VAR_3]);
  FUNC_6(VAR_1, 0);
 }

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(FUNC_1(VAR_1, &VAR_2[VAR_3], 0, 0, VAR_0) != 0);
  FUNC_0(FUNC_1(VAR_1, ((void*)0), 0, 0, VAR_0) != 1);
  FUNC_6(VAR_1, 1);
  FUNC_4(VAR_1, VAR_5, VAR_4);
  FUNC_7(VAR_1, &VAR_2[VAR_3 + 1], 0);
  FUNC_4(VAR_1, VAR_5, VAR_4);
  FUNC_6(VAR_1, 0);
 }
}
