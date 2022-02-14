
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ref_map; int * mem_cache; int soap_version; int * sdl; int error_object; int * error_code; scalar_t__ use_soap_error_handler; int * typemap; int defEncNs; int defEncIndex; int defEnc; } ;
typedef TYPE_1__ zend_soap_globals ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(zend_soap_globals *VAR_4)
{



 VAR_4->defEnc = VAR_1;
 VAR_4->defEncIndex = VAR_2;
 VAR_4->defEncNs = VAR_3;
 VAR_4->typemap = ((void*)0);
 VAR_4->use_soap_error_handler = 0;
 VAR_4->error_code = ((void*)0);
 FUNC_1(&VAR_4->error_object, ((void*)0));
 VAR_4->sdl = ((void*)0);
 VAR_4->soap_version = VAR_0;
 VAR_4->mem_cache = ((void*)0);
 VAR_4->ref_map = ((void*)0);
}
