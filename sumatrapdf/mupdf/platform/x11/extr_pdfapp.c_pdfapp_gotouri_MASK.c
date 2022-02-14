
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int docpath; } ;
typedef TYPE_1__ pdfapp_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int,char*,char*,char*,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_6(pdfapp_t *VAR_1, char *VAR_2)
{
 char VAR_3[VAR_0];


 if (!FUNC_4(VAR_2, "file://", 7) && VAR_2[7] != '/')
 {
  char VAR_4[VAR_0];
  char VAR_5[VAR_0];
  FUNC_1(VAR_4, VAR_1->docpath, sizeof VAR_4);
  FUNC_3(VAR_5, sizeof VAR_5);
  FUNC_2(VAR_3, sizeof VAR_3, "file://%s/%s/%s", VAR_5, VAR_4, VAR_2+7);
  FUNC_0(VAR_3+7);
  VAR_2 = VAR_3;
 }

 FUNC_5(VAR_1, VAR_2);
}
