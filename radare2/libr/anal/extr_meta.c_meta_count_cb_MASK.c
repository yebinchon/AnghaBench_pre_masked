
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ctx; int count; } ;
typedef TYPE_1__ myMetaUser ;
struct TYPE_8__ {scalar_t__ space; int member_0; } ;
struct TYPE_7__ {int anal; TYPE_1__* user; } ;
typedef TYPE_2__ RAnalMetaUserItem ;
typedef TYPE_3__ RAnalMetaItem ;


 int FUNC_0 (int ,TYPE_3__*,char const*,char const*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 RAnalMetaUserItem *VAR_3 = VAR_0;
 myMetaUser *VAR_4 = VAR_3->user;
 RAnalMetaItem VAR_5 = {0};
 if (!FUNC_2 (VAR_1, ".0x")) {
  return 1;
 }
 FUNC_0 (VAR_3->anal, &VAR_5, VAR_1, VAR_2);
 if (VAR_4 && VAR_5.space == VAR_4->ctx) {
  VAR_4->count++;
 }
 FUNC_1 (&VAR_5);
 return 1;
}
