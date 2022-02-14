
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_ulong ;
struct TYPE_3__ {int ce_flags; } ;
typedef TYPE_1__ zend_class_entry ;
typedef int HashTable ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(zend_class_entry *VAR_4) {
 HashTable *VAR_5 = FUNC_0(VAR_3), *VAR_6;
 zend_ulong VAR_7 = (zend_ulong) (uintptr_t) VAR_4;

 FUNC_1(VAR_5 != ((void*)0));
 VAR_6 = FUNC_4(VAR_5, VAR_7);
 FUNC_1(VAR_6 != ((void*)0));

 FUNC_2(VAR_6, VAR_2);
 if (FUNC_5(VAR_6) == 0) {
  VAR_4->ce_flags &= ~VAR_1;
  VAR_4->ce_flags |= VAR_0;
  FUNC_3(VAR_5, VAR_7);
 }
}
