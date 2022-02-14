
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct assoc_array_ptr {int dummy; } ;


 unsigned long VAR_0 ;
 void* FUNC_0 (struct assoc_array_ptr const*) ;

__attribute__((used)) static inline struct key *FUNC_1(const struct assoc_array_ptr *VAR_1)
{
 void *VAR_2 = FUNC_0(VAR_1);
 return (struct key *)((unsigned long)VAR_2 & ~VAR_0);
}
