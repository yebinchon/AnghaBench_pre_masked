
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_ssi {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct fsl_ssi*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fsl_ssi *VAR_6)
{

 if (FUNC_0(VAR_6)) {

  FUNC_1(VAR_6->regs, VAR_1,
       VAR_5 | VAR_3, 0);

  FUNC_2(VAR_6->regs, VAR_0, 0);

  FUNC_2(VAR_6->regs, VAR_2, 0);

  FUNC_1(VAR_6->regs, VAR_1, VAR_4, 0);
 }
}
