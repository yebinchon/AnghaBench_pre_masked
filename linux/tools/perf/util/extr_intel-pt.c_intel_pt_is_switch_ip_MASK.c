
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct intel_pt_queue {int flags; struct intel_pt* pt; } ;
struct intel_pt {scalar_t__ switch_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline bool FUNC_0(struct intel_pt_queue *VAR_5, u64 VAR_6)
{
 struct intel_pt *VAR_7 = VAR_5->pt;

 return VAR_6 == VAR_7->switch_ip &&
        (VAR_5->flags & VAR_1) &&
        !(VAR_5->flags & (VAR_2 | VAR_0 |
          VAR_3 | VAR_4));
}
