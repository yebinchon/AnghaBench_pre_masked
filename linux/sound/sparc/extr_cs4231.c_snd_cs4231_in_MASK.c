
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {unsigned char mce_bit; } ;


 int FUNC_0 (struct snd_cs4231*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_1 (struct snd_cs4231*,int ) ;
 int FUNC_2 (struct snd_cs4231*,unsigned char,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct snd_cs4231*) ;
 int FUNC_5 (char*,unsigned char) ;

__attribute__((used)) static unsigned char FUNC_6(struct snd_cs4231 *VAR_3, unsigned char VAR_4)
{
 FUNC_4(VAR_3);





 FUNC_2(VAR_3, VAR_3->mce_bit | VAR_4, FUNC_0(VAR_3, VAR_2));
 FUNC_3();
 return FUNC_1(VAR_3, FUNC_0(VAR_3, VAR_1));
}
