
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;


 int FUNC_0 (void const*,int) ;
 scalar_t__ FUNC_1 (void const*) ;

__attribute__((used)) static inline ut64 FUNC_2(const void *VAR_0) {
 ut64 VAR_1 = ((ut64)(FUNC_1 (VAR_0))) << 32;
 VAR_1 |= FUNC_0 (VAR_0, sizeof (ut32));
 return VAR_1;
}
