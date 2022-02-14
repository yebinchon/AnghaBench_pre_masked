
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int user; TYPE_3__* (* malloc ) (int ,int) ;} ;
struct TYPE_19__ {scalar_t__ lock; scalar_t__ unlock; } ;
struct TYPE_20__ {TYPE_1__ alloc; TYPE_2__ locks; } ;
typedef TYPE_3__ fz_context ;
struct TYPE_21__ {scalar_t__ lock; scalar_t__ unlock; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_7__ VAR_0 ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_9 (int ,int) ;

fz_context *
FUNC_10(fz_context *VAR_1)
{
 fz_context *VAR_2;



 if (VAR_1 == ((void*)0) || (VAR_1->locks.lock == VAR_0.lock && VAR_1->locks.unlock == VAR_0.unlock))
  return ((void*)0);

 VAR_2 = VAR_1->alloc.malloc(VAR_1->alloc.user, sizeof(fz_context));
 if (!VAR_2)
  return ((void*)0);


 FUNC_8(VAR_2, VAR_1, sizeof (fz_context));


 FUNC_0(VAR_2);


 FUNC_2(VAR_2);
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 FUNC_5(VAR_2);
 FUNC_4(VAR_2);

 return VAR_2;
}
