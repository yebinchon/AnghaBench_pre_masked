
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut32 ;
struct cdb_make {scalar_t__ pos; } ;



__attribute__((used)) static inline int FUNC_0(struct cdb_make *VAR_0, ut32 VAR_1) {
 ut32 VAR_2 = VAR_0->pos + VAR_1;
 if (VAR_2 < VAR_1) {
  return 0;
 }
 VAR_0->pos = VAR_2;
 return 1;
}
