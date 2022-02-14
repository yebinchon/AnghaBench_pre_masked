
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_5__ {scalar_t__ ce; } ;
struct TYPE_6__ {TYPE_1__ obj; } ;
typedef TYPE_2__ php_converter_object ;
typedef int UErrorCode ;
typedef int UConverterToUCallback ;
typedef int UConverterFromUCallback ;
typedef int UConverter ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ,void const*,int *,int *,int *) ;
 int FUNC_3 (int *,int ,void const*,int *,int *,int *) ;

__attribute__((used)) static inline zend_bool FUNC_4(php_converter_object *VAR_4, UConverter *VAR_5) {
 zend_bool VAR_6 = 1;
 UErrorCode VAR_7 = VAR_0;

 if (VAR_4->obj.ce == VAR_1) {



  return 1;
 }

 FUNC_3(VAR_5, (UConverterToUCallback)VAR_3, (const void*)VAR_4,
                                 ((void*)0), ((void*)0), &VAR_7);
 if (FUNC_1(VAR_7)) {
  FUNC_0(VAR_4, "ucnv_setToUCallBack", VAR_7);
  VAR_6 = 0;
 }

 VAR_7 = VAR_0;
 FUNC_2(VAR_5, (UConverterFromUCallback)VAR_2, (const void*)VAR_4,
                                    ((void*)0), ((void*)0), &VAR_7);
 if (FUNC_1(VAR_7)) {
  FUNC_0(VAR_4, "ucnv_setFromUCallBack", VAR_7);
  VAR_6 = 0;
 }
 return VAR_6;
}
