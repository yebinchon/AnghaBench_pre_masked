
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {scalar_t__ addr; } ;
struct pcpu_chunk {scalar_t__ base_addr; struct vm_struct** data; } ;
typedef int gfp_t ;


 struct pcpu_chunk* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pcpu_chunk*) ;
 struct vm_struct** FUNC_2 (scalar_t__*,int ,int ,int ) ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static struct pcpu_chunk *FUNC_5(gfp_t VAR_4)
{
 struct pcpu_chunk *VAR_5;
 struct vm_struct **VAR_6;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_1, VAR_2,
    VAR_3, VAR_0);
 if (!VAR_6) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 VAR_5->data = VAR_6;
 VAR_5->base_addr = VAR_6[0]->addr - VAR_1[0];

 FUNC_3();
 FUNC_4(VAR_5->base_addr);

 return VAR_5;
}
