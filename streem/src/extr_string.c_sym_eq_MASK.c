
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_key {scalar_t__ len; int ptr; } ;
typedef int khint_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static khint_t
FUNC_1(struct sym_key VAR_2, struct sym_key VAR_3)
{
  if (VAR_2.len != VAR_3.len) return VAR_0;
  if (FUNC_0(VAR_2.ptr, VAR_3.ptr, VAR_2.len) == 0) return VAR_1;
  return VAR_0;
}
