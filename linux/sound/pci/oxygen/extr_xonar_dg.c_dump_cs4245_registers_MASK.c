
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct oxygen {struct dg* model_data; } ;
struct dg {int * cs4245_shadow; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct oxygen*,int ) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

void FUNC_3(struct oxygen *VAR_1,
      struct snd_info_buffer *VAR_2)
{
 struct dg *VAR_3 = VAR_1->model_data;
 unsigned int VAR_4;

 FUNC_2(VAR_2, "\nCS4245:");
 FUNC_1(VAR_1, VAR_0);
 for (VAR_4 = 1; VAR_4 < FUNC_0(VAR_3->cs4245_shadow); VAR_4++)
  FUNC_2(VAR_2, " %02x", VAR_3->cs4245_shadow[VAR_4]);
 FUNC_2(VAR_2, "\n");
}
