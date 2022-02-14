
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t prop_count; TYPE_1__* prop_item; } ;
struct TYPE_4__ {scalar_t__ id; int length; scalar_t__ value; } ;
typedef TYPE_2__ GpBitmap ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static DWORD FUNC_1(GpBitmap *VAR_3)
{
    BYTE VAR_4 = 0;
    UINT VAR_5;

    for(VAR_5=0; VAR_5<VAR_3->prop_count; VAR_5++) {
        if(VAR_3->prop_item[VAR_5].id == VAR_1) {
            VAR_4 = *(BYTE*)VAR_3->prop_item[VAR_5].value;
            break;
        }
    }

    for(VAR_5=0; VAR_5<VAR_3->prop_count; VAR_5++) {
        if(VAR_3->prop_item[VAR_5].id == VAR_2) {
            BYTE VAR_6;
            VAR_6 = *(BYTE*)VAR_3->prop_item[VAR_5].value;

            if(VAR_6 == VAR_4)
                return 0;
        }
    }

    for(VAR_5=0; VAR_5<VAR_3->prop_count; VAR_5++) {
        if(VAR_3->prop_item[VAR_5].id == VAR_0) {
            if(VAR_3->prop_item[VAR_5].length/3 > VAR_4) {
                BYTE *VAR_7 = ((BYTE*)VAR_3->prop_item[VAR_5].value)+VAR_4*3;
                return VAR_7[2] + (VAR_7[1]<<8) + (VAR_7[0]<<16) + (0xffu<<24);
            }
            break;
        }
    }

    FUNC_0("can't get gif background color\n");
    return 0xffffffff;
}
