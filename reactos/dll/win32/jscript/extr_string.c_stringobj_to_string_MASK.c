
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int jsval_t ;
struct TYPE_3__ {int str; } ;
typedef TYPE_1__ StringInstance ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4(vdisp_t *VAR_2, jsval_t *VAR_3)
{
    StringInstance *VAR_4;

    if(!(VAR_4 = FUNC_3(VAR_2))) {
        FUNC_0("this is not a string object\n");
        return VAR_0;
    }

    if(VAR_3)
        *VAR_3 = FUNC_2(FUNC_1(VAR_4->str));
    return VAR_1;
}
