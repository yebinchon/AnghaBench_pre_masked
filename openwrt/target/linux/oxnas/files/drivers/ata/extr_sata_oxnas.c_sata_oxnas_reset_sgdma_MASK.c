
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_oxnas_port_priv {scalar_t__ sgdma_base; } ;
struct ata_port {struct sata_oxnas_port_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct ata_port *VAR_2)
{
 struct sata_oxnas_port_priv *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_1, VAR_3->sgdma_base + VAR_0);
}
