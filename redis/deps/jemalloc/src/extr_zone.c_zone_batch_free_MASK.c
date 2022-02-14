
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _malloc_zone_t {int dummy; } ;


 int FUNC_0 (struct _malloc_zone_t*,void*) ;

__attribute__((used)) static void
FUNC_1(struct _malloc_zone_t *VAR_0, void **VAR_1,
    unsigned VAR_2) {
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0(VAR_0, VAR_1[VAR_3]);
  VAR_1[VAR_3] = ((void*)0);
 }
}
