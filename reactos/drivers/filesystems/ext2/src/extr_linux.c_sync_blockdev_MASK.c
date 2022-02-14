
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_priv; } ;
typedef int PEXT2_VCB ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;

int FUNC_1(struct block_device *VAR_1)
{
    PEXT2_VCB VAR_2 = (PEXT2_VCB) VAR_1->bd_priv;
    FUNC_0(((void*)0), VAR_2, VAR_0);
    return 0;
}
