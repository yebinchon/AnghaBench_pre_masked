
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decl_param {scalar_t__ name; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct decl_param*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct decl_param *VAR_0)
{
 if (VAR_0->name)
  FUNC_0(VAR_0->name);
 FUNC_1(VAR_0, 0, sizeof(struct decl_param));
}
