
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct luma_wipe_info {float softness; int luma_image; int invert_luma; } ;
struct dstr {int array; int member_0; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dstr*,char const*) ;
 int FUNC_3 (struct dstr*,char*) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 char* FUNC_10 (int *,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 char* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(void *VAR_3, obs_data_t *VAR_4)
{
 struct luma_wipe_info *VAR_5 = VAR_3;

 const char *VAR_6 = FUNC_10(VAR_4, VAR_0);
 VAR_5->invert_luma = FUNC_8(VAR_4, VAR_1);
 VAR_5->softness = (float)FUNC_9(VAR_4, VAR_2);

 struct dstr VAR_7 = {0};

 FUNC_3(&VAR_7, "luma_wipes/");
 FUNC_2(&VAR_7, VAR_6);

 char *VAR_8 = FUNC_13(VAR_7.array);

 FUNC_11();
 FUNC_5(&VAR_5->luma_image);
 FUNC_12();

 FUNC_6(&VAR_5->luma_image, VAR_8);

 FUNC_11();
 FUNC_7(&VAR_5->luma_image);
 FUNC_12();

 FUNC_1(VAR_8);
 FUNC_4(&VAR_7);

 FUNC_0(VAR_4);
}
