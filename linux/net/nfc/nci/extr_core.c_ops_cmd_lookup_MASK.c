
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_driver_ops {scalar_t__ opcode; } ;
typedef scalar_t__ __u16 ;



__attribute__((used)) static struct nci_driver_ops *FUNC_0(struct nci_driver_ops *VAR_0,
          size_t VAR_1,
          __u16 VAR_2)
{
 size_t VAR_3;
 struct nci_driver_ops *VAR_4;

 if (!VAR_0 || !VAR_1)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = &VAR_0[VAR_3];
  if (VAR_4->opcode == VAR_2)
   return VAR_4;
 }

 return ((void*)0);
}
