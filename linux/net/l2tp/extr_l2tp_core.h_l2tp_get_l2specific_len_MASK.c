
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2tp_session {int l2specific_type; } ;





__attribute__((used)) static inline int FUNC_0(struct l2tp_session *VAR_0)
{
 switch (VAR_0->l2specific_type) {
 case 129:
  return 4;
 case 128:
 default:
  return 0;
 }
}
