
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int revision; int elements; int* auth; int* nums; } ;
typedef TYPE_1__ sid_header ;
typedef int UCHAR ;
typedef TYPE_1__* PSID ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_2, PSID* VAR_3) {
    sid_header* VAR_4;
    UCHAR VAR_5;




    VAR_5 = 2;
    VAR_4 = FUNC_1(VAR_1, sizeof(sid_header) + ((VAR_5 - 1) * sizeof(uint32_t)), VAR_0);
    if (!VAR_4) {
        FUNC_0("out of memory\n");
        *VAR_3 = ((void*)0);
        return;
    }

    VAR_4->revision = 1;
    VAR_4->elements = VAR_5;

    VAR_4->auth[0] = 0;
    VAR_4->auth[1] = 0;
    VAR_4->auth[2] = 0;
    VAR_4->auth[3] = 0;
    VAR_4->auth[4] = 0;
    VAR_4->auth[5] = 22;

    VAR_4->nums[0] = 2;
    VAR_4->nums[1] = VAR_2;

    *VAR_3 = VAR_4;
}
