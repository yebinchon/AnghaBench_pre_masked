
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keyring_index_key {int description; TYPE_1__* type; } ;
struct key {int flags; int serial; int keys; } ;
typedef int * key_ref_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct key*) ;
 void* FUNC_1 (int *,int *,struct keyring_index_key const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 struct key* FUNC_4 (int *) ;
 int VAR_2 ;
 struct key* FUNC_5 (void const*) ;
 int FUNC_6 (char*,...) ;
 int * FUNC_7 (struct key*,int ) ;

key_ref_t FUNC_8(key_ref_t VAR_3,
        const struct keyring_index_key *VAR_4)
{
 struct key *VAR_5, *VAR_6;
 const void *VAR_7;

 VAR_5 = FUNC_4(VAR_3);

 FUNC_3("{%d},{%s,%s}",
        VAR_5->serial, VAR_4->type->name, VAR_4->description);

 VAR_7 = FUNC_1(&VAR_5->keys, &VAR_2,
      VAR_4);

 if (VAR_7)
  goto found;

 FUNC_6(" = NULL");
 return ((void*)0);

found:
 VAR_6 = FUNC_5(VAR_7);
 if (VAR_6->flags & ((1 << VAR_0) |
     (1 << VAR_1))) {
  FUNC_6(" = NULL [x]");
  return ((void*)0);
 }
 FUNC_0(VAR_6);
 FUNC_6(" = {%d}", VAR_6->serial);
 return FUNC_7(VAR_6, FUNC_2(VAR_3));
}
