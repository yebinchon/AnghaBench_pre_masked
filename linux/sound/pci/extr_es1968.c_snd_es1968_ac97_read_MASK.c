
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u16 ;
struct snd_ac97 {struct es1968* private_data; } ;
struct es1968 {scalar_t__ io_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (struct es1968*) ;
 int FUNC_3 (struct es1968*) ;

__attribute__((used)) static unsigned short FUNC_4(struct snd_ac97 *VAR_2, unsigned short VAR_3)
{
 u16 VAR_4 = 0;
 struct es1968 *VAR_5 = VAR_2->private_data;

 FUNC_2(VAR_5);

 FUNC_1(VAR_3 | 0x80, VAR_5->io_port + VAR_1);


 if (!FUNC_3(VAR_5)) {
  VAR_4 = FUNC_0(VAR_5->io_port + VAR_0);

 }

 return VAR_4;
}
