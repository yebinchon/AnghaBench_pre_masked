
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {scalar_t__ fm_mode; int (* command ) (struct snd_opl3*,int,unsigned char) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct snd_opl3*,int,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct snd_opl3 * VAR_10, int VAR_11)
{
 unsigned char VAR_12;


 if (VAR_10->fm_mode != VAR_9)
  return -VAR_0;

 VAR_12 = VAR_11 & (VAR_6 | VAR_7 | VAR_8 |
    VAR_1 | VAR_2 | VAR_3);

 VAR_10->command(VAR_10, VAR_5 | VAR_4, VAR_12);

 return 0;
}
