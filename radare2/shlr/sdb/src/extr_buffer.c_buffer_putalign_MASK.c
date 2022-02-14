
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_4__ {scalar_t__ x; scalar_t__ n; scalar_t__ p; } ;
typedef TYPE_1__ buffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,char const*,scalar_t__) ;

int FUNC_2(buffer *VAR_0, const char *VAR_1, ut32 VAR_2) {
 ut32 VAR_3;
 if (!VAR_0 || !VAR_0->x || !VAR_1) {
  return 0;
 }
 while (VAR_2 > (VAR_3 = VAR_0->n - VAR_0->p)) {
  FUNC_1 (VAR_0->x + VAR_0->p, VAR_1, VAR_3);
  VAR_0->p += VAR_3; VAR_1 += VAR_3; VAR_2 -= VAR_3;
  if (!FUNC_0 (VAR_0)) {
   return 0;
  }
 }

 FUNC_1 (VAR_0->x + VAR_0->p, VAR_1, VAR_2);
 VAR_0->p += VAR_2;
 return 1;
}
