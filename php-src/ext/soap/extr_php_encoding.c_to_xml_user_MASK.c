
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlDocPtr ;
typedef TYPE_4__* encodeTypePtr ;
struct TYPE_19__ {TYPE_1__* map; } ;
struct TYPE_18__ {scalar_t__ children; } ;
struct TYPE_17__ {int doc; } ;
struct TYPE_16__ {int to_xml; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int *,int,int *) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_7 (int ,char*) ;
 TYPE_3__* FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (scalar_t__,int ,int) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_2__* FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;

xmlNodePtr FUNC_14(encodeTypePtr VAR_5, zval *VAR_6, int VAR_7, xmlNodePtr VAR_8)
{
 xmlNodePtr VAR_9 = ((void*)0);
 zval VAR_10;

 if (VAR_5 && VAR_5->map && FUNC_4(VAR_5->map->to_xml) != VAR_3) {
  FUNC_1(&VAR_10);

  if (FUNC_5(((void*)0), ((void*)0), &VAR_5->map->to_xml, &VAR_10, 1, VAR_6) == VAR_1) {
   FUNC_7(VAR_0, "Encoding: Error calling to_xml callback");
  }
  if (FUNC_4(VAR_10) == VAR_2) {
   xmlDocPtr VAR_11 = FUNC_8(FUNC_3(VAR_10), FUNC_2(VAR_10));
   if (VAR_11 && VAR_11->children) {
    VAR_9 = FUNC_10(VAR_11->children, VAR_8->doc, 1);
   }
   FUNC_11(VAR_11);
  }

  FUNC_13(&VAR_10);
 }
 if (!VAR_9) {
  VAR_9 = FUNC_12(((void*)0), FUNC_0("BOGUS"));
 }
 FUNC_9(VAR_8, VAR_9);
 if (VAR_7 == VAR_4) {
  FUNC_6(VAR_9, VAR_5);
 }
 return VAR_9;
}
