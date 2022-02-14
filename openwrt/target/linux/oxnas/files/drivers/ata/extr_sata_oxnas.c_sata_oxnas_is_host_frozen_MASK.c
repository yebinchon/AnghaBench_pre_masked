
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_oxnas_host_priv {scalar_t__ port_frozen; scalar_t__ port_in_eh; } ;
struct ata_host {struct sata_oxnas_host_priv* private_data; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct ata_host *VAR_0)
{
 struct sata_oxnas_host_priv *VAR_1 = VAR_0->private_data;

 FUNC_0();
 return VAR_1->port_in_eh || VAR_1->port_frozen;
}
