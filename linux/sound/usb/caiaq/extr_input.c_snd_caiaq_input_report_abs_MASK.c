
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_caiaqdev {int input_dev; } ;


 int FUNC_0 (int ,int,unsigned char const) ;

__attribute__((used)) static inline void FUNC_1(struct snd_usb_caiaqdev *VAR_0,
           int VAR_1, const unsigned char *VAR_2,
           int VAR_3)
{
 FUNC_0(VAR_0->input_dev, VAR_1,
    (VAR_2[VAR_3 * 2] << 8) | VAR_2[VAR_3 * 2 + 1]);
}
