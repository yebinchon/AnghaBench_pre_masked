
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sata_oxnas_port_priv {scalar_t__ port_base; } ;
struct ata_port {struct sata_oxnas_port_priv* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct ata_port*,int) ;

__attribute__((used)) static inline void FUNC_3(struct ata_port *VAR_3)
{
 struct sata_oxnas_port_priv *VAR_4 = VAR_3->private_data;
 u32 VAR_5;



 if ((FUNC_2(VAR_3, 0x20) & 3) == 3) {
  VAR_5 = FUNC_0(VAR_4->port_base + VAR_1);
  VAR_5 &= ~VAR_2;
  VAR_5 |= VAR_0;
  FUNC_1(VAR_5, VAR_4->port_base + VAR_1);
 }
}
