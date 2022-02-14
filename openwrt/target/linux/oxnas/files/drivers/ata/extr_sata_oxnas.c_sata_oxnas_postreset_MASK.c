
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sata_oxnas_host_priv {int n_ports; } ;
struct TYPE_5__ {TYPE_3__* device; } ;
struct ata_port {TYPE_2__ link; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_6__ {scalar_t__ class; } ;
struct TYPE_4__ {int * ports; struct sata_oxnas_host_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ata_link*,unsigned int*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct ata_link *VAR_3, unsigned int *VAR_4)
{
 struct ata_port *VAR_5 = VAR_3->ap;
 struct sata_oxnas_host_priv *VAR_6 = VAR_5->host->private_data;

 unsigned int VAR_7;

 FUNC_0("ENTER\n");
 FUNC_1(VAR_3, VAR_4);


 FUNC_3(VAR_5->host->ports[0], 0x0c, 0x30003);
 if (VAR_6->n_ports > 1)
  FUNC_3(VAR_5->host->ports[1], 0x0c, 0x30003);


 if (VAR_4[0] == VAR_1 && VAR_4[1] == VAR_1) {
  FUNC_0("EXIT, no device\n");
  return;
 }


 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  if (VAR_5->link.device[VAR_7].class == VAR_0)
   FUNC_2(&(VAR_5->link.device[VAR_7]));
 }

 FUNC_0("EXIT\n");
}
