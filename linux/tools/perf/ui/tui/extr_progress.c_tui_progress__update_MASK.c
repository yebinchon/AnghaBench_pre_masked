
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_progress {int total; int curr; scalar_t__ size; scalar_t__ title; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int,int) ;
 int FUNC_1 (int,int,int,int,char) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct ui_progress*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_10(struct ui_progress *VAR_5)
{
 char VAR_6[100], *VAR_7 = (char *) VAR_5->title;
 int VAR_8, VAR_9;




 if (VAR_4 <= 0)
  return;

 if (VAR_5->total == 0)
  return;

 if (VAR_5->size) {
  FUNC_6(VAR_5, VAR_6, sizeof(VAR_6));
  VAR_7 = VAR_6;
 }

 FUNC_9(0);
 FUNC_7(&VAR_3);
 VAR_9 = VAR_2 / 2 - 2;
 FUNC_4(0);
 FUNC_0(VAR_9, 0, 3, VAR_1);
 FUNC_2(VAR_9++, 1);
 FUNC_5(VAR_7);
 FUNC_1(VAR_9, 1, 1, VAR_1 - 2, ' ');
 FUNC_4(VAR_0);
 VAR_8 = ((VAR_1 - 2) * VAR_5->curr) / VAR_5->total;
 FUNC_1(VAR_9, 1, 1, VAR_8, ' ');
 FUNC_3();
 FUNC_8(&VAR_3);
}
