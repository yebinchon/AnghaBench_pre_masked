
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camelot_pcm {int tx_period; int tx_ss; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct camelot_pcm *VAR_1 = VAR_0;
 VAR_1->tx_period ^= 1;
 FUNC_0(VAR_1->tx_ss);
}
