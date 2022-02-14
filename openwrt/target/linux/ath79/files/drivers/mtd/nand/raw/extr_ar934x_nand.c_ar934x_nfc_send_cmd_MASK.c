
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ar934x_nfc {int ctrl_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ar934x_nfc*) ;
 int FUNC_1 (struct ar934x_nfc*,int ,int ) ;
 int FUNC_2 (struct ar934x_nfc*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct ar934x_nfc *VAR_7, unsigned VAR_8)
{
 u32 VAR_9;

 VAR_9 = VAR_3 | VAR_0 |
    VAR_4;
 VAR_9 |= (VAR_8 & VAR_1) << VAR_2;

 FUNC_1(VAR_7, VAR_6, 0);
 FUNC_1(VAR_7, VAR_5, VAR_7->ctrl_reg);

 FUNC_2(VAR_7, VAR_9);
 FUNC_0(VAR_7);
}
