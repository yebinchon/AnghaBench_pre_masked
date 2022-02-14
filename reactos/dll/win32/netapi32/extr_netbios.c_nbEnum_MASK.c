
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_9__ {size_t tableSize; TYPE_1__* table; } ;
struct TYPE_8__ {size_t* lana; scalar_t__ length; } ;
struct TYPE_7__ {int ncb_length; int ncb_buffer; } ;
struct TYPE_6__ {scalar_t__ transport; } ;
typedef TYPE_2__* PNCB ;
typedef TYPE_3__* PLANA_ENUM ;
typedef int LANA_ENUM ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,...) ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static UCHAR FUNC_2(PNCB VAR_3)
{
    PLANA_ENUM VAR_4 = (PLANA_ENUM)VAR_3->ncb_buffer;
    UCHAR VAR_5, VAR_6;

    FUNC_0(": ncb %p\n", VAR_3);

    if (!VAR_4)
        VAR_6 = VAR_0;
    else if (VAR_3->ncb_length < sizeof(LANA_ENUM))
        VAR_6 = VAR_0;
    else
    {
        FUNC_1();
        VAR_4->length = 0;
        for (VAR_5 = 0; VAR_5 < VAR_2.tableSize; VAR_5++)
            if (VAR_2.table[VAR_5].transport)
            {
                VAR_4->length++;
                VAR_4->lana[VAR_5] = VAR_5;
            }
        VAR_6 = VAR_1;
    }
    FUNC_0("returning 0x%02x\n", VAR_6);
    return VAR_6;
}
