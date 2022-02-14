
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_6__ {int buf; TYPE_1__* o; } ;
struct TYPE_5__ {scalar_t__ info; } ;
typedef TYPE_2__ RBinFile ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ut64 FUNC_3(RBinFile *VAR_0) {
 ut64 VAR_1, VAR_2, VAR_3, VAR_4;
 if (!VAR_0) {
  return 0;
 }
 if (!VAR_0->o->info) {
  VAR_0->o->info = FUNC_0 (VAR_0);
 }
 if (!VAR_0->o->info) {
  return 0;
 }

 if (FUNC_2 (VAR_0->buf) < 28) {
  return 0;
 }
 VAR_1 = FUNC_1 (VAR_0->buf, 4);
 VAR_2 = FUNC_1 (VAR_0->buf, 8);
 VAR_3 = FUNC_1 (VAR_0->buf, 16);
 VAR_4 = FUNC_1 (VAR_0->buf, 24);
 return VAR_1 + VAR_2 + VAR_3 + VAR_4 + (6 * 4);
}
