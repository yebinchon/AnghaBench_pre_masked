
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sata_oxnas_port_priv {int * port_base; } ;
struct ata_port {struct sata_oxnas_port_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct ata_port *VAR_2)
{
 struct sata_oxnas_port_priv *VAR_3 = VAR_2->private_data;
 u32 *VAR_4 = VAR_3->port_base;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4 + VAR_0);
 VAR_5 |= VAR_1;
 FUNC_1(VAR_5, VAR_4 + VAR_0);
}
