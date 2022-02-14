
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_leaf {struct text_leaf* value; struct text_leaf* lookup; } ;


 int FUNC_0 (struct text_leaf*) ;

__attribute__((used)) static inline void FUNC_1(struct text_leaf *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->lookup);
  FUNC_0(VAR_0->value);
  FUNC_0(VAR_0);
 }
}
