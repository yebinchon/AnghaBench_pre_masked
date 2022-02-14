
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; int member_0; } ;
typedef int obs_encoder_t ;
typedef int obs_data_t ;
typedef int audio_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct dstr*,char*,int ,int,int,int) ;
 int FUNC_2 (struct dstr*,int ) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*,char*,char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct dstr *VAR_0, obs_encoder_t *VAR_1)
{
 obs_data_t *VAR_2 = FUNC_9(VAR_1);
 int VAR_3 = (int)FUNC_5(VAR_2, "bitrate");
 audio_t *VAR_4 = FUNC_10();
 struct dstr VAR_5 = {0};

 FUNC_6(VAR_2);

 FUNC_2(&VAR_5, FUNC_7(VAR_1));
 FUNC_4(&VAR_5, "\"", "\"\"");

 FUNC_1(VAR_0, "\"%s\" %d %d %d ", VAR_5.array, VAR_3,
    (int)FUNC_8(VAR_1),
    (int)FUNC_0(VAR_4));

 FUNC_3(&VAR_5);
}
