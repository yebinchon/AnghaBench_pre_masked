
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_compr_stream {int info_area; } ;
struct sprd_compr_playinfo {int dummy; } ;
struct snd_compr_stream {struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct sprd_compr_stream* private_data; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct snd_compr_stream*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct snd_compr_stream *VAR_1 = VAR_0;
 struct snd_compr_runtime *VAR_2 = VAR_1->runtime;
 struct sprd_compr_stream *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_3->info_area, 0, sizeof(struct sprd_compr_playinfo));

 FUNC_1(VAR_1);
}
