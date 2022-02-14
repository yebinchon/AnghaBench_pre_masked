
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {int level; TYPE_2__* prefix; TYPE_1__* iterators; } ;
typedef TYPE_3__ spl_recursive_it_object ;
struct TYPE_11__ {int s; int member_0; } ;
typedef TYPE_4__ smart_str ;
struct TYPE_9__ {int s; } ;
struct TYPE_8__ {int ce; int zobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;
 int FUNC_7 (int ,int ,int *,char*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(spl_recursive_it_object *VAR_2, zval *VAR_3)
{
 smart_str VAR_4 = {0};
 zval VAR_5;
 int VAR_6;

 FUNC_6(&VAR_4, FUNC_2(VAR_2->prefix[0].s), FUNC_1(VAR_2->prefix[0].s));

 for (VAR_6 = 0; VAR_6 < VAR_2->level; ++VAR_6) {
  FUNC_7(FUNC_3(VAR_2->iterators[VAR_6].zobject), VAR_2->iterators[VAR_6].ce, ((void*)0), "hasnext", &VAR_5);
  if (FUNC_4(VAR_5) != VAR_1) {
   if (FUNC_4(VAR_5) == VAR_0) {
    FUNC_6(&VAR_4, FUNC_2(VAR_2->prefix[1].s), FUNC_1(VAR_2->prefix[1].s));
   } else {
    FUNC_6(&VAR_4, FUNC_2(VAR_2->prefix[2].s), FUNC_1(VAR_2->prefix[2].s));
   }
   FUNC_8(&VAR_5);
  }
 }
 FUNC_7(FUNC_3(VAR_2->iterators[VAR_6].zobject), VAR_2->iterators[VAR_6].ce, ((void*)0), "hasnext", &VAR_5);
 if (FUNC_4(VAR_5) != VAR_1) {
  if (FUNC_4(VAR_5) == VAR_0) {
   FUNC_6(&VAR_4, FUNC_2(VAR_2->prefix[3].s), FUNC_1(VAR_2->prefix[3].s));
  } else {
   FUNC_6(&VAR_4, FUNC_2(VAR_2->prefix[4].s), FUNC_1(VAR_2->prefix[4].s));
  }
  FUNC_8(&VAR_5);
 }

 FUNC_6(&VAR_4, FUNC_2(VAR_2->prefix[5].s), FUNC_1(VAR_2->prefix[5].s));
 FUNC_5(&VAR_4);

 FUNC_0(VAR_4.s);
}
