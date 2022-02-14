
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int * cb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,...) ;

int FUNC_1(struct __sk_buff *VAR_1)
{
 FUNC_0("cb0: %x cb1: %x cb2: %x\n", VAR_1->cb[0], VAR_1->cb[1],
        VAR_1->cb[2]);
 FUNC_0("cb3: %x cb4: %x\n", VAR_1->cb[3], VAR_1->cb[4]);

 return VAR_0;
}
