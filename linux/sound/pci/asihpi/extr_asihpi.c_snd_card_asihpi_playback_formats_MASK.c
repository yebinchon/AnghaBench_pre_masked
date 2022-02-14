
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct snd_card_asihpi {int out_max_chans; int h_mixer; } ;
struct hpi_format {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_0 (struct hpi_format*,int ,size_t,int,int,int ) ;
 size_t FUNC_1 (int ,int ,int ,int ,int ,int ,int*) ;
 size_t FUNC_2 (int,struct hpi_format*) ;
 size_t FUNC_3 (int,int*) ;
 scalar_t__* VAR_5 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static u64 FUNC_5(struct snd_card_asihpi *VAR_6,
      u32 VAR_7)
{
 struct hpi_format VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 u32 VAR_11;
 u32 VAR_12 = 48000;
 u64 VAR_13 = 0;




 VAR_10 = FUNC_1(VAR_6->h_mixer,
      VAR_3, 0, 0, 0,
      VAR_0, &VAR_11);

 if (!VAR_10)
  VAR_10 = FUNC_3(VAR_11,
    &VAR_12);

 for (VAR_9 = VAR_2;
      VAR_9 <= VAR_1; VAR_9++) {
  VAR_10 = FUNC_0(&VAR_8, VAR_6->out_max_chans,
     VAR_9, VAR_12, 128000, 0);
  if (!VAR_10)
   VAR_10 = FUNC_2(VAR_7, &VAR_8);
  if (!VAR_10 && (VAR_5[VAR_9] != VAR_4))
   VAR_13 |= FUNC_4(VAR_5[VAR_9]);
 }
 return VAR_13;
}
