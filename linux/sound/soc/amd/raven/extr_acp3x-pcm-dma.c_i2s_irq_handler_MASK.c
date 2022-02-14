
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i2s_dev_data {scalar_t__ capture_stream; scalar_t__ acp3x_base; scalar_t__ play_stream; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 u16 VAR_7, VAR_8;
 u32 VAR_9;
 struct i2s_dev_data *VAR_10 = VAR_6;

 if (!VAR_10)
  return VAR_3;

 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = FUNC_1(VAR_10->acp3x_base + VAR_4);
 if ((VAR_9 & FUNC_0(VAR_1)) && VAR_10->play_stream) {
  FUNC_2(FUNC_0(VAR_1), VAR_10->acp3x_base +
     VAR_4);
  FUNC_3(VAR_10->play_stream);
  VAR_7 = 1;
 }

 if ((VAR_9 & FUNC_0(VAR_0)) && VAR_10->capture_stream) {
  FUNC_2(FUNC_0(VAR_0), VAR_10->acp3x_base +
     VAR_4);
  FUNC_3(VAR_10->capture_stream);
  VAR_8 = 1;
 }

 if (VAR_7 | VAR_8)
  return VAR_2;
 else
  return VAR_3;
}
