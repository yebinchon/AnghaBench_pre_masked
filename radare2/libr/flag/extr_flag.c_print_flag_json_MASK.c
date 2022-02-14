
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct print_flag_t {scalar_t__ range_from; scalar_t__ range_to; int pj; scalar_t__ in_range; } ;
struct TYPE_3__ {scalar_t__ offset; int comment; int alias; int size; int realname; int name; } ;
typedef TYPE_1__ RFlagItem ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(RFlagItem *VAR_0, void *VAR_1) {
 struct print_flag_t *VAR_2 = (struct print_flag_t *)VAR_1;
 if (VAR_2->in_range && (VAR_0->offset < VAR_2->range_from || VAR_0->offset >= VAR_2->range_to)) {
  return 1;
 }
 FUNC_4 (VAR_2->pj);
 FUNC_3 (VAR_2->pj, "name", VAR_0->name);
 if (VAR_0->name != VAR_0->realname) {
  FUNC_3 (VAR_2->pj, "realname", VAR_0->realname);
 }
 FUNC_1 (VAR_2->pj, "size", VAR_0->size);
 if (VAR_0->alias) {
  FUNC_3 (VAR_2->pj, "alias", VAR_0->alias);
 } else {
  FUNC_2 (VAR_2->pj, "offset", VAR_0->offset);
 }
 if (VAR_0->comment) {
  FUNC_3 (VAR_2->pj, "comment", VAR_0->comment);
 }
 FUNC_0 (VAR_2->pj);
 return 1;
}
