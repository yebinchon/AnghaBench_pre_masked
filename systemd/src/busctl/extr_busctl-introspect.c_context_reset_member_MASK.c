
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_writable; scalar_t__ member_flags; int * member_result; int * member_signature; int * member_name; } ;
typedef TYPE_1__ Context ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(Context *VAR_0) {
        FUNC_0(VAR_0->member_name);
        FUNC_0(VAR_0->member_signature);
        FUNC_0(VAR_0->member_result);

        VAR_0->member_name = VAR_0->member_signature = VAR_0->member_result = ((void*)0);
        VAR_0->member_flags = 0;
        VAR_0->member_writable = 0;
}
