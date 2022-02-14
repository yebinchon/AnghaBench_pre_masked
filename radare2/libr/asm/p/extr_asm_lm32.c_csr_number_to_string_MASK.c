
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
struct TYPE_2__ {scalar_t__ number; int name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(ut8 VAR_2, char *VAR_3) {
 ut8 VAR_4 = 0xff;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1[VAR_5].number == VAR_2) {
   VAR_4 = VAR_5;
   break;
  }
 }

 if (VAR_4 == 0xff) {
  return -1;
 }
 FUNC_0 (VAR_3, VAR_1[VAR_4].name);
 return 0;
}
