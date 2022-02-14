
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ str; int from; } ;
struct TYPE_4__ {scalar_t__ fcn; int anal; } ;
typedef TYPE_1__ RAnalMetaUserItem ;
typedef TYPE_2__ RAnalMetaItem ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_2__*,char const*,char const*) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 RAnalMetaUserItem *VAR_3 = VAR_0;
 RAnalMetaItem VAR_4;
 if (!FUNC_1 (VAR_3->anal, &VAR_4, VAR_1, VAR_2)) {
  return -1;
 }
 if (VAR_3->fcn && !FUNC_2 (VAR_3->fcn, VAR_4.from)) {
  goto beach;
 }
 if (!VAR_4.str) {
  VAR_4.str = FUNC_3 ("");
  if (!VAR_4.str) {
   goto beach;
  }
 }
 return VAR_4.size;
beach:
 FUNC_0 (VAR_4.str);
 return -1;
}
