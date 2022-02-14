
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_1 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;

extern int FUNC_7(int VAR_2, char *VAR_3[])
{
 FILE* VAR_4;
 FILE* VAR_5;
 int VAR_6;

 if (VAR_2 != 3)
 {
  FUNC_3(VAR_1, "Usage: trx2usr <trx input> <usr output>\n");
  FUNC_0(2);
 }
 VAR_4 = FUNC_2(VAR_3[1], "rb");
 if (!VAR_4)
 {
  FUNC_3(VAR_1, "Cannot open \"%s\": %s\n", VAR_3[1], FUNC_4(VAR_0));
  FUNC_0(1);
 }
 VAR_5 = FUNC_2(VAR_3[2], "wb");
 if (!VAR_5)
 {
  FUNC_3(VAR_1, "Cannot create \"%s\": %s\n", VAR_3[2], FUNC_4(VAR_0));
  FUNC_0(1);
 }
 VAR_6 = FUNC_5(VAR_4, VAR_5);
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);
 if (VAR_6)
 {
  FUNC_6(VAR_3[2]);
 }
 return VAR_6;
}
