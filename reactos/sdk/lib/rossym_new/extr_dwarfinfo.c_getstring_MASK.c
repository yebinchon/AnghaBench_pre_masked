
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ulong ;
struct TYPE_10__ {size_t data; } ;
struct TYPE_14__ {TYPE_1__ info; } ;
struct TYPE_13__ {size_t p; TYPE_3__* d; } ;
struct TYPE_11__ {size_t len; scalar_t__ data; } ;
struct TYPE_12__ {TYPE_2__ str; } ;
typedef TYPE_4__ DwarfBuf ;
typedef TYPE_5__ Dwarf ;




 int FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_4__*) ;
 char* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char) ;
 char* VAR_0 ;
 int FUNC_4 (char*,size_t) ;

__attribute__((used)) static int
FUNC_5(Dwarf *VAR_1, DwarfBuf *VAR_2, int VAR_3, char **VAR_4)
{
    static int VAR_5;
    ulong VAR_6, VAR_7;

    switch(VAR_3){
    default:
        return -1;

    case 129:
        VAR_7 = VAR_2->p - VAR_1->info.data;
        *VAR_4 = FUNC_2(VAR_2);
        for (VAR_6 = 0; (*VAR_4)[VAR_6]; VAR_6++) {
            FUNC_0(FUNC_3((*VAR_4)[VAR_6]));
        }
        return 0;

    case 128:
        VAR_6 = FUNC_1(VAR_2);
        if(VAR_6 >= VAR_2->d->str.len){
            if(++VAR_5 == 1)
                FUNC_4("dwarf: bad string pointer 0x%lux in attribute", VAR_6);

            *VAR_4 = VAR_0;
        }else
            *VAR_4 = (char*)VAR_2->d->str.data + VAR_6;
        return 0;

    }
}
