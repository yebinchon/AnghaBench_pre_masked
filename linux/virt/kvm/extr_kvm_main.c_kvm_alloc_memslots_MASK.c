
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memslots {int* id_to_index; TYPE_1__* memslots; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_memslots* FUNC_0 (int,int ) ;

__attribute__((used)) static struct kvm_memslots *FUNC_1(void)
{
 int VAR_2;
 struct kvm_memslots *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct kvm_memslots), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_3->id_to_index[VAR_2] = VAR_3->memslots[VAR_2].id = VAR_2;

 return VAR_3;
}
