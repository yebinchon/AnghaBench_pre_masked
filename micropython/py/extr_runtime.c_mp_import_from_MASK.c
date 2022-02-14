
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int qstr ;
typedef scalar_t__ mp_obj_t ;


 int FUNC_0 (char*,scalar_t__,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*,size_t) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__*) ;
 char* FUNC_5 (size_t const) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,char*,int ) ;
 char* FUNC_9 (scalar_t__,size_t*) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,size_t const) ;
 size_t FUNC_12 (int ) ;
 char const* FUNC_13 (int ) ;

mp_obj_t FUNC_14(mp_obj_t VAR_4, qstr VAR_5) {
    FUNC_0("import from %p %s\n", VAR_4, FUNC_13(VAR_5));

    mp_obj_t VAR_6[2];

    FUNC_4(VAR_4, VAR_5, VAR_6);

    if (VAR_6[1] != VAR_0) {

import_error:
        FUNC_10(FUNC_8(&VAR_3, "cannot import name %q", VAR_5));
    }

    if (VAR_6[0] != VAR_0) {
        return VAR_6[0];
    }
    goto import_error;


}
