
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_0 ;

mp_obj_t FUNC_5(mp_obj_t VAR_1) {
    FUNC_0("raise %p\n", VAR_1);
    if (FUNC_3(VAR_1)) {




        return FUNC_1(VAR_1, 0, 0, ((void*)0));
    } else if (FUNC_2(VAR_1)) {

        return VAR_1;
    } else {

        return FUNC_4(&VAR_0, "exceptions must derive from BaseException");
    }
}
