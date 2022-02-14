
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i2s_stream_instance {scalar_t__ acp3x_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u64 FUNC_1(struct i2s_stream_instance *VAR_5, int VAR_6)
{
 u64 VAR_7;

 if (VAR_6 == VAR_0) {
  VAR_7 = FUNC_0(VAR_5->acp3x_base +
          VAR_3);
  VAR_7 |= FUNC_0(VAR_5->acp3x_base +
           VAR_4);
 } else {
  VAR_7 = FUNC_0(VAR_5->acp3x_base +
          VAR_1);
  VAR_7 |= FUNC_0(VAR_5->acp3x_base +
           VAR_2);
 }
 return VAR_7;
}
