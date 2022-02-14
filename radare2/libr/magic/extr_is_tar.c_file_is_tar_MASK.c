
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ RMagic ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int const*,size_t) ;
 char** VAR_2 ;

int FUNC_2(RMagic *VAR_3, const ut8 *VAR_4, size_t VAR_5) {




 int VAR_6 = FUNC_1(VAR_4, VAR_5);
 int VAR_7 = VAR_3->flags & VAR_0;

 if (VAR_6 < 1 || VAR_6 > 3) {
  return 0;
 }
 if (VAR_7 == VAR_1) {
  return 0;
 }
 if (FUNC_0 (VAR_3, VAR_7 ? "application/x-tar" : VAR_2[VAR_6 - 1]) == -1) {
  return -1;
 }
 return 1;
}
