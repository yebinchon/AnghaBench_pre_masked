
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct table {int dummy; } ;
struct document {scalar_t__* index; int n; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline const struct table *
FUNC_0(const struct document *VAR_1, int VAR_2) {
 if (VAR_1->index[VAR_2] == VAR_0) {
  return ((void*)0);
 }
 return (const struct table *)((const char *)VAR_1 + sizeof(uint32_t) + sizeof(uint32_t) + VAR_1->n * sizeof(uint32_t) + VAR_1->index[VAR_2]);
}
