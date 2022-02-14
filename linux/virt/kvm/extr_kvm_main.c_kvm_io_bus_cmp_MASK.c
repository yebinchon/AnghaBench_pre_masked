
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_io_range {scalar_t__ addr; scalar_t__ len; } ;
typedef scalar_t__ gpa_t ;



__attribute__((used)) static inline int FUNC_0(const struct kvm_io_range *VAR_0,
     const struct kvm_io_range *VAR_1)
{
 gpa_t VAR_2 = VAR_0->addr;
 gpa_t VAR_3 = VAR_1->addr;

 if (VAR_2 < VAR_3)
  return -1;






 if (VAR_1->len) {
  VAR_2 += VAR_0->len;
  VAR_3 += VAR_1->len;
 }

 if (VAR_2 > VAR_3)
  return 1;

 return 0;
}
