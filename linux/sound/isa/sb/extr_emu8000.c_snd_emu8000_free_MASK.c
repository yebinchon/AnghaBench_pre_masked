
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int res_port3; int res_port2; int res_port1; } ;


 int FUNC_0 (struct snd_emu8000*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_emu8000 *VAR_0)
{
 FUNC_1(VAR_0->res_port1);
 FUNC_1(VAR_0->res_port2);
 FUNC_1(VAR_0->res_port3);
 FUNC_0(VAR_0);
 return 0;
}
