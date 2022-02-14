
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct snd_ca0106 {unsigned int** i2c_capture_volume; size_t i2c_capture_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ca0106*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_ca0106 *VAR_3,
       unsigned int VAR_4, int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 u32 VAR_8;

 FUNC_0(VAR_3, VAR_2, 0);
 VAR_6 = VAR_3->i2c_capture_volume[VAR_4][0];
 VAR_7 = VAR_3->i2c_capture_volume[VAR_3->i2c_capture_source][0];
 if (VAR_5 || VAR_6 != VAR_7)
  FUNC_0(VAR_3, VAR_0, VAR_6 & 0xff);
 VAR_6 = VAR_3->i2c_capture_volume[VAR_4][1];
 VAR_7 = VAR_3->i2c_capture_volume[VAR_3->i2c_capture_source][1];
 if (VAR_5 || VAR_6 != VAR_7)
  FUNC_0(VAR_3, VAR_1, VAR_6 & 0xff);
 VAR_8 = 1 << VAR_4;
 FUNC_0(VAR_3, VAR_2, VAR_8);
 VAR_3->i2c_capture_source = VAR_4;
}
