
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_uart {size_t driver; int name; } ;


 int ** VAR_0 ;
 int FUNC_0 (char*,int ,size_t) ;

void FUNC_1(struct nci_uart *VAR_1)
{
 FUNC_0("NCI uart driver '%s [%d]' unregistered\n", VAR_1->name,
  VAR_1->driver);


 VAR_0[VAR_1->driver] = ((void*)0);
}
