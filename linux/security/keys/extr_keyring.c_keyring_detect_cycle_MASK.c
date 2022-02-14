
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lookup_type; struct key* raw_data; } ;
struct keyring_search_context {int flags; int result; int iterator; TYPE_1__ match_data; int index_key; } ;
struct key {int index_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct key*,struct keyring_search_context*) ;

__attribute__((used)) static int FUNC_4(struct key *VAR_8, struct key *VAR_9)
{
 struct keyring_search_context VAR_10 = {
  .index_key = VAR_8->index_key,
  .match_data.raw_data = VAR_8,
  .match_data.lookup_type = VAR_2,
  .iterator = VAR_7,
  .flags = (VAR_4 |
        VAR_5 |
        VAR_3 |
        VAR_1 |
        VAR_6),
 };

 FUNC_1();
 FUNC_3(VAR_9, &VAR_10);
 FUNC_2();
 return FUNC_0(VAR_10.result) == -VAR_0 ? 0 : FUNC_0(VAR_10.result);
}
