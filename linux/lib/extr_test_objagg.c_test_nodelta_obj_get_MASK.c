
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct world {unsigned int root_count; int next_root_buf; } ;
struct TYPE_2__ {unsigned int id; } ;
struct root {int buf; TYPE_1__ key; } ;
struct objagg_obj {int dummy; } ;
struct objagg {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct objagg_obj*) ;
 int FUNC_1 (struct objagg_obj*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct objagg*,struct objagg_obj*) ;
 struct root* FUNC_4 (struct objagg_obj*) ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (int ,int) ;
 struct objagg_obj* FUNC_7 (struct world*,struct objagg*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct world *VAR_1, struct objagg *VAR_2,
    unsigned int VAR_3, bool VAR_4)
{
 unsigned int VAR_5 = VAR_1->root_count;
 struct objagg_obj *VAR_6;
 const struct root *VAR_7;
 int VAR_8;

 if (VAR_4)
  FUNC_6(VAR_1->next_root_buf,
         sizeof(VAR_1->next_root_buf));

 VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_6)) {
  FUNC_5("Key %u: Failed to get object.\n", VAR_3);
  return FUNC_1(VAR_6);
 }
 if (VAR_4) {
  if (VAR_1->root_count != VAR_5 + 1) {
   FUNC_5("Key %u: Root was not created\n", VAR_3);
   VAR_8 = -VAR_0;
   goto err_check_root_count;
  }
 } else {
  if (VAR_1->root_count != VAR_5) {
   FUNC_5("Key %u: Root was incorrectly created\n",
          VAR_3);
   VAR_8 = -VAR_0;
   goto err_check_root_count;
  }
 }
 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7->key.id != VAR_3) {
  FUNC_5("Key %u: Root has unexpected key id\n", VAR_3);
  VAR_8 = -VAR_0;
  goto err_check_key_id;
 }
 if (VAR_4 &&
     FUNC_2(VAR_1->next_root_buf, VAR_7->buf, sizeof(VAR_7->buf))) {
  FUNC_5("Key %u: Buffer does not match the expected content\n",
         VAR_3);
  VAR_8 = -VAR_0;
  goto err_check_buf;
 }
 return 0;

err_check_buf:
err_check_key_id:
err_check_root_count:
 FUNC_3(VAR_2, VAR_6);
 return VAR_8;
}
