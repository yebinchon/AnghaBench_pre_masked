
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int xmlNodePtr ;
typedef int xmlBufferPtr ;
typedef TYPE_2__* encodeTypePtr ;
struct TYPE_5__ {TYPE_1__* map; } ;
struct TYPE_4__ {int to_zval; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int *,int,int *) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int ,int ,int ) ;
 int FUNC_12 (int *) ;

zval *FUNC_13(zval *VAR_4, encodeTypePtr VAR_5, xmlNodePtr VAR_6)
{
 if (VAR_5 && VAR_5->map && FUNC_3(VAR_5->map->to_zval) != VAR_2) {
  xmlBufferPtr VAR_7;
  zval VAR_8;
  xmlNodePtr VAR_9;

  VAR_9 = FUNC_9(VAR_6, 1);
  VAR_7 = FUNC_7();
  FUNC_11(VAR_7, ((void*)0), VAR_9, 0, 0);
  FUNC_2(&VAR_8, (char*)FUNC_6(VAR_7));
  FUNC_8(VAR_7);
  FUNC_10(VAR_9);

  if (FUNC_4(((void*)0), ((void*)0), &VAR_5->map->to_zval, VAR_4, 1, &VAR_8) == VAR_1) {
   FUNC_5(VAR_0, "Encoding: Error calling from_xml callback");
  } else if (FUNC_0(VAR_3)) {
   FUNC_1(VAR_4);
  }
  FUNC_12(&VAR_8);
 } else {
  FUNC_1(VAR_4);
 }
 return VAR_4;
}
