
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct siu_port {int trdat; int stfifo; } ;
struct siu_firmware {size_t* yram0; TYPE_1__* spbpar; } ;
struct siu_info {int port_id; struct siu_firmware fw; } ;
struct TYPE_2__ {int ab1a; int ab0a; int dir; size_t event; int trdat; int stfifo; } ;


 struct siu_info* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct siu_port *VAR_1)
{
 struct siu_info *VAR_2 = VAR_0;
 struct siu_firmware *VAR_3 = &VAR_2->fw;
 u32 *VAR_4 = VAR_3->yram0;
 u32 VAR_5;


 if (!VAR_2->port_id)
  VAR_5 = 1;
 else
  VAR_5 = 2;

 VAR_4[0] = (VAR_3->spbpar[VAR_5].ab1a << 16) |
  (VAR_3->spbpar[VAR_5].ab0a << 8) |
  (VAR_3->spbpar[VAR_5].dir << 7) | 3;
 VAR_4[1] = VAR_3->yram0[1];
 VAR_4[2] = (16 / 2) << 24;
 VAR_4[3] = VAR_3->yram0[3];
 VAR_4[4] = VAR_3->yram0[4];
 VAR_4[7] = VAR_3->spbpar[VAR_5].event;
 VAR_1->stfifo |= VAR_3->spbpar[VAR_5].stfifo;
 VAR_1->trdat |= VAR_3->spbpar[VAR_5].trdat;
}
