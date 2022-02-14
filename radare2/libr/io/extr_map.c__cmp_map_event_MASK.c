
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
struct map_event_t {scalar_t__ addr; scalar_t__ is_to; scalar_t__ id; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
 struct map_event_t *VAR_2 = (void *)VAR_0, *VAR_3 = (void *)VAR_1;
 ut64 VAR_4 = VAR_2->addr - VAR_2->is_to, VAR_5 = VAR_3->addr - VAR_3->is_to;
 if (VAR_4 != VAR_5) {
  return VAR_4 < VAR_5? -1: 1;
 }
 if (VAR_2->is_to != VAR_3->is_to) {
  return !VAR_2->is_to? -1: 1;
 }
 if (VAR_2->id != VAR_3->id) {
  return VAR_2->id < VAR_3->id? -1: 1;
 }
 return 0;
}
