
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; int member_0; } ;
typedef int obs_property_t ;
typedef int (* add_window_cb ) (int ,int ,int ) ;
typedef int HWND ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*,struct dstr*) ;
 scalar_t__ FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (struct dstr*) ;
 scalar_t__ FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*,char*,int ,int ) ;
 int FUNC_6 (struct dstr*) ;
 int FUNC_7 (struct dstr*,int ) ;
 int FUNC_8 (struct dstr*,int ) ;
 int FUNC_9 (struct dstr*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_12(obs_property_t *VAR_0, HWND VAR_1, add_window_cb VAR_2)
{
 struct dstr VAR_3 = {0};
 struct dstr VAR_4 = {0};
 struct dstr VAR_5 = {0};
 struct dstr VAR_6 = {0};
 struct dstr VAR_7 = {0};

 if (!FUNC_8(&VAR_5, VAR_1))
  return;
 if (FUNC_10(VAR_5.array)) {
  FUNC_3(&VAR_5);
  return;
 }

 FUNC_9(&VAR_4, VAR_1);
 if (FUNC_2(&VAR_5, "explorer.exe") == 0 && FUNC_4(&VAR_4)) {
  FUNC_3(&VAR_5);
  FUNC_3(&VAR_4);
  return;
 }

 FUNC_7(&VAR_3, VAR_1);

 if (VAR_2 && !VAR_2(VAR_4.array, VAR_3.array, VAR_5.array)) {
  FUNC_3(&VAR_4);
  FUNC_3(&VAR_3);
  FUNC_3(&VAR_5);
  return;
 }

 FUNC_5(&VAR_7, "[%s]: %s", VAR_5.array, VAR_4.array);

 FUNC_6(&VAR_4);
 FUNC_6(&VAR_3);
 FUNC_6(&VAR_5);

 FUNC_1(&VAR_6, &VAR_4);
 FUNC_0(&VAR_6, ":");
 FUNC_1(&VAR_6, &VAR_3);
 FUNC_0(&VAR_6, ":");
 FUNC_1(&VAR_6, &VAR_5);

 FUNC_11(VAR_0, VAR_7.array, VAR_6.array);

 FUNC_3(&VAR_6);
 FUNC_3(&VAR_7);
 FUNC_3(&VAR_3);
 FUNC_3(&VAR_4);
 FUNC_3(&VAR_5);
}
