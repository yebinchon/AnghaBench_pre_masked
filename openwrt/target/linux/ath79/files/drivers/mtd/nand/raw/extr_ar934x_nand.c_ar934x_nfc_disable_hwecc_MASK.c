
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar934x_nfc {int ctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct ar934x_nfc *VAR_2)
{
 VAR_2->ctrl_reg &= ~VAR_1;
 VAR_2->ctrl_reg |= VAR_0;
}
