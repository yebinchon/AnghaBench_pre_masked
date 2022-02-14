
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_func {char* name; char* ret_type; } ;


 int FUNC_0 (struct ep_func*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ep_func *VAR_0, char *VAR_1, char *VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(struct ep_func));
 VAR_0->name = VAR_2;
 VAR_0->ret_type = VAR_1;
}
