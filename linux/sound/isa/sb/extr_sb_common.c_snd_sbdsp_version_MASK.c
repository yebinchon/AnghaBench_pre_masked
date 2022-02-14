
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_sb*,int ) ;
 scalar_t__ FUNC_1 (struct snd_sb*) ;

__attribute__((used)) static int FUNC_2(struct snd_sb * VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_1, VAR_0);
 VAR_2 = (short) FUNC_1(VAR_1) << 8;
 VAR_2 |= (short) FUNC_1(VAR_1);
 return VAR_2;
}
