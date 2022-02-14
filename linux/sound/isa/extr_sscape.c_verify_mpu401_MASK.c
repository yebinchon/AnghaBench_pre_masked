
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mpu401 {int dummy; } ;


 int FUNC_0 (struct snd_mpu401 const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(const struct snd_mpu401 *VAR_0)
{
 return ((FUNC_1(FUNC_0(VAR_0)) & 0xc0) == 0x80);
}
