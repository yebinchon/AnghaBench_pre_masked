
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_sof_dev*,int ,int ,int ,int ) ;
 int FUNC_1 (struct snd_sof_dev*,int ,int ,int ) ;

int FUNC_2(struct snd_sof_dev *VAR_7, bool VAR_8)
{
 u32 VAR_9;


 VAR_9 = VAR_8 ? VAR_4 : 0;
 FUNC_1(VAR_7, VAR_3, VAR_4, VAR_9);


 VAR_9 = VAR_8 ? VAR_2 : 0;
 FUNC_0(VAR_7, VAR_0, VAR_1,
    VAR_2, VAR_9);


 VAR_9 = VAR_8 ? 0 : VAR_6;
 FUNC_1(VAR_7, VAR_5, VAR_6, VAR_9);

 return 0;
}
