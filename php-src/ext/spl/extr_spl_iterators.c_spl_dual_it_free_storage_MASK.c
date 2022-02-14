
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_14__ {scalar_t__ regex; scalar_t__ pce; } ;
struct TYPE_13__ {int zcache; } ;
struct TYPE_12__ {int zarrayit; int iterator; } ;
struct TYPE_15__ {TYPE_8__* cbfilter; TYPE_4__ regex; TYPE_3__ caching; TYPE_2__ append; } ;
struct TYPE_11__ {int zobject; } ;
struct TYPE_17__ {scalar_t__ dit_type; int std; TYPE_5__ u; TYPE_1__ inner; } ;
typedef TYPE_7__ spl_dual_it_object ;
struct TYPE_16__ {scalar_t__ object; int function_name; } ;
struct TYPE_18__ {TYPE_6__ fci; } ;
typedef TYPE_8__ _spl_cbfilter_it_intern ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_7__* FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(zend_object *VAR_8)
{
 spl_dual_it_object *VAR_9 = FUNC_5(VAR_8);


 if (!FUNC_1(VAR_9->inner.zobject)) {
  FUNC_9(&VAR_9->inner.zobject);
 }

 if (VAR_9->dit_type == VAR_0) {
  FUNC_6(VAR_9->u.append.iterator);
  if (FUNC_2(VAR_9->u.append.zarrayit) != VAR_7) {
   FUNC_9(&VAR_9->u.append.zarrayit);
  }
 }

 if (VAR_9->dit_type == VAR_1 || VAR_9->dit_type == VAR_3) {
  FUNC_9(&VAR_9->u.caching.zcache);
 }

 if (VAR_9->dit_type == VAR_6 || VAR_9->dit_type == VAR_5) {
  if (VAR_9->u.regex.pce) {
   FUNC_4(VAR_9->u.regex.pce);
  }
  if (VAR_9->u.regex.regex) {
   FUNC_8(VAR_9->u.regex.regex, 0);
  }
 }

 if (VAR_9->dit_type == VAR_2 || VAR_9->dit_type == VAR_4) {
  if (VAR_9->u.cbfilter) {
   _spl_cbfilter_it_intern *VAR_10 = VAR_9->u.cbfilter;
   VAR_9->u.cbfilter = ((void*)0);
   FUNC_9(&VAR_10->fci.function_name);
   if (VAR_10->fci.object) {
    FUNC_0(VAR_10->fci.object);
   }
   FUNC_3(VAR_10);
  }
 }

 FUNC_7(&VAR_9->std);
}
