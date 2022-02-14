
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ns {int dummy; } ;
struct aa_label {scalar_t__ hname; } ;


 int VAR_0 ;
 struct aa_ns* FUNC_0 (struct aa_label*) ;

__attribute__((used)) static inline bool FUNC_1(struct aa_ns *VAR_1, struct aa_label *VAR_2,
       int VAR_3)
{
 if (VAR_2->hname && (!VAR_1 || FUNC_0(VAR_2) == VAR_1) &&
     !(VAR_3 & ~VAR_0))
  return 1;

 return 0;
}
