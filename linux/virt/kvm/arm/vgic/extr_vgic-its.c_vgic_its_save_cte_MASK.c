
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct vgic_its {TYPE_1__* dev; } ;
struct its_collection {unsigned long long collection_id; scalar_t__ target_addr; } ;
typedef int gpa_t ;
struct TYPE_2__ {int kvm; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long FUNC_0 (unsigned long long) ;
 int FUNC_1 (int ,int ,unsigned long long*,int) ;

__attribute__((used)) static int FUNC_2(struct vgic_its *VAR_2,
        struct its_collection *VAR_3,
        gpa_t VAR_4, int VAR_5)
{
 u64 VAR_6;

 VAR_6 = (1ULL << VAR_1 |
        ((u64)VAR_3->target_addr << VAR_0) |
        VAR_3->collection_id);
 VAR_6 = FUNC_0(VAR_6);
 return FUNC_1(VAR_2->dev->kvm, VAR_4, &VAR_6, VAR_5);
}
