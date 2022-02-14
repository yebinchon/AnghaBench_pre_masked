
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es18xx {scalar_t__ ctrl_port; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct snd_es18xx *VAR_0, unsigned char VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1, VAR_0->ctrl_port);
 VAR_2 = FUNC_0(VAR_0->ctrl_port + 1);
 return VAR_2;
}
