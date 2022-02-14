
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sata_oxnas_host_priv {scalar_t__ port_in_eh; scalar_t__ port_frozen; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_2__ {struct sata_oxnas_host_priv* private_data; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ata_port*,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct ata_port *VAR_0)
{
 struct sata_oxnas_host_priv *VAR_1 = VAR_0->host->private_data;

 FUNC_0("port %d\n", VAR_0->port_no);
 FUNC_2();
 if (VAR_1->port_frozen || VAR_1->port_in_eh)
  return 1;
 else
  return !FUNC_1(VAR_0, 0, 0);
}
