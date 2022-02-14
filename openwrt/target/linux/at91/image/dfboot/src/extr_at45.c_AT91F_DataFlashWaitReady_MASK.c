
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int DataFlash_state; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_1__* AT91PS_DataflashDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static AT91S_DataFlashStatus FUNC_1(
 AT91PS_DataflashDesc VAR_3,
 unsigned int VAR_4)
{
 VAR_3->DataFlash_state = VAR_2;
        do {
                FUNC_0(VAR_3);
                VAR_4--;
        }
        while(((VAR_3->DataFlash_state & 0x80) != 0x80) && (VAR_4 > 0));

        if((VAR_3->DataFlash_state & 0x80) != 0x80)
                return VAR_0;

        return VAR_1;
}
