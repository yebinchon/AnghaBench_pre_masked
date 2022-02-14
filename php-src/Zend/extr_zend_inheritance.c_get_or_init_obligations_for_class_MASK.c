
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zend_ulong ;
struct TYPE_3__ {int ce_flags; } ;
typedef TYPE_1__ zend_class_entry ;
typedef int HashTable ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int * FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ,int *,int ,int ) ;

__attribute__((used)) static HashTable *FUNC_5(zend_class_entry *VAR_4) {
 HashTable *VAR_5;
 zend_ulong VAR_6;
 if (!FUNC_1(VAR_1)) {
  FUNC_0(FUNC_1(VAR_1));
  FUNC_4(FUNC_1(VAR_1), 0, ((void*)0), VAR_3, 0);
 }

 VAR_6 = (zend_ulong) (uintptr_t) VAR_4;
 VAR_5 = FUNC_3(FUNC_1(VAR_1), VAR_6);
 if (VAR_5) {
  return VAR_5;
 }

 FUNC_0(VAR_5);
 FUNC_4(VAR_5, 0, ((void*)0), VAR_2, 0);
 FUNC_2(FUNC_1(VAR_1), VAR_6, VAR_5);
 VAR_4->ce_flags |= VAR_0;
 return VAR_5;
}
