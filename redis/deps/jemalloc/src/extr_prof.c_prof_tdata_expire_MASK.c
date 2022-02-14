
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_4__ {int expired; int lock; scalar_t__ attached; } ;
typedef TYPE_1__ prof_tdata_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_3(tsdn_t *VAR_0, prof_tdata_t *VAR_1) {
 bool VAR_2;

 FUNC_0(VAR_0, VAR_1->lock);
 if (!VAR_1->expired) {
  VAR_1->expired = 1;
  VAR_2 = VAR_1->attached ? 0 :
      FUNC_2(VAR_0, VAR_1, 0);
 } else {
  VAR_2 = 0;
 }
 FUNC_1(VAR_0, VAR_1->lock);

 return VAR_2;
}
