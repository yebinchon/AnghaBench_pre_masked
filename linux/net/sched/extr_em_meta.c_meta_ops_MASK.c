
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meta_value {int dummy; } ;
struct meta_ops {int dummy; } ;


 struct meta_ops** VAR_0 ;
 size_t FUNC_0 (struct meta_value*) ;
 size_t FUNC_1 (struct meta_value*) ;

__attribute__((used)) static inline struct meta_ops *FUNC_2(struct meta_value *VAR_1)
{
 return &VAR_0[FUNC_1(VAR_1)][FUNC_0(VAR_1)];
}
