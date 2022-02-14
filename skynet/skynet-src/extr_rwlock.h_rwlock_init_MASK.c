
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwlock {scalar_t__ read; scalar_t__ write; } ;



__attribute__((used)) static inline void
FUNC_0(struct rwlock *VAR_0) {
 VAR_0->write = 0;
 VAR_0->read = 0;
}
