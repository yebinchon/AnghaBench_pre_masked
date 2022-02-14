
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct siu_port {int trdat; int stfifo; } ;
struct siu_firmware {size_t* yram0; TYPE_1__* spbpar; } ;
struct siu_info {int port_id; struct siu_firmware fw; } ;
struct TYPE_2__ {int ab1a; int ab0a; size_t event; int trdat; int stfifo; } ;


 struct siu_info* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct siu_port *VAR_1)
{
 struct siu_info *VAR_2 = VAR_0;
 struct siu_firmware *VAR_3 = &VAR_2->fw;
 u32 *VAR_4 = VAR_3->yram0;
 u32 VAR_5;


 if (!VAR_2->port_id)
  VAR_5 = 7;
 else
  VAR_5 = 8;

 VAR_4[5] = (VAR_3->spbpar[VAR_5].ab1a << 16) |
  (VAR_3->spbpar[VAR_5].ab0a << 8) | 1;
 VAR_4[6] = VAR_3->spbpar[VAR_5].event;
 VAR_1->stfifo |= VAR_3->spbpar[VAR_5].stfifo;
 VAR_1->trdat |= VAR_3->spbpar[VAR_5].trdat;
}
