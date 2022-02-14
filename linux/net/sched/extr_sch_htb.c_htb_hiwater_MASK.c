
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htb_class {scalar_t__ cmode; int buffer; } ;
typedef int s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline s64 FUNC_0(const struct htb_class *VAR_2)
{
 if (VAR_1)
  return VAR_2->cmode == VAR_0 ? -VAR_2->buffer : 0;
 else
  return 0;
}
