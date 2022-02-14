
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_progress {int title; int total; int curr; } ;
typedef int buf_tot ;
typedef int buf_cur ;


 int FUNC_0 (char*,size_t,char*,int ,char*,char*) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ui_progress *VAR_0, char *VAR_1, size_t VAR_2)
{
 char VAR_3[20];
 char VAR_4[20];
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, sizeof(VAR_3), VAR_0->curr);
 VAR_5 += FUNC_1(VAR_4, sizeof(VAR_4), VAR_0->total);

 return VAR_5 + FUNC_0(VAR_1, VAR_2, "%s [%s/%s]",
          VAR_0->title, VAR_3, VAR_4);
}
