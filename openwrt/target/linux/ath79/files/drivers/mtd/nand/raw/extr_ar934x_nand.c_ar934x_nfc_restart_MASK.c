
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar934x_nfc {int ctrl_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar934x_nfc*) ;
 int FUNC_1 (struct ar934x_nfc*,int ) ;

__attribute__((used)) static void FUNC_2(struct ar934x_nfc *VAR_1)
{
 u32 VAR_2;

 VAR_2 = VAR_1->ctrl_reg;
 FUNC_0(VAR_1);
 VAR_1->ctrl_reg = VAR_2;

 FUNC_1(VAR_1, VAR_0);
}
