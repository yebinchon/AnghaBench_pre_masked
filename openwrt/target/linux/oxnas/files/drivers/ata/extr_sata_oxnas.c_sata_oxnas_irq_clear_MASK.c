
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_oxnas_port_priv {scalar_t__ core_base; scalar_t__ port_base; } ;
struct ata_port {struct sata_oxnas_port_priv* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_3)
{
 struct sata_oxnas_port_priv *VAR_4 = VAR_3->private_data;


 FUNC_0(~0, VAR_4->port_base + VAR_2);
 FUNC_0(VAR_0, VAR_4->core_base + VAR_1);
}
