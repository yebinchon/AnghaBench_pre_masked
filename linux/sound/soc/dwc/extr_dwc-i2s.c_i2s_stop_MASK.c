
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct dw_i2s_dev {int i2s_base; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dw_i2s_dev*,scalar_t__) ;
 int FUNC_1 (struct dw_i2s_dev*,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dw_i2s_dev *VAR_5,
  struct snd_pcm_substream *VAR_6)
{

 FUNC_0(VAR_5, VAR_6->stream);
 if (VAR_6->stream == VAR_4)
  FUNC_2(VAR_5->i2s_base, VAR_3, 0);
 else
  FUNC_2(VAR_5->i2s_base, VAR_2, 0);

 FUNC_1(VAR_5, VAR_6->stream, 8);

 if (!VAR_5->active) {
  FUNC_2(VAR_5->i2s_base, VAR_0, 0);
  FUNC_2(VAR_5->i2s_base, VAR_1, 0);
 }
}
