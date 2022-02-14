
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ulong ;
typedef int uchar ;
struct TYPE_10__ {int len; int * data; } ;
struct TYPE_12__ {int addrsize; TYPE_1__ aranges; } ;
struct TYPE_11__ {int addrsize; int * p; int * ep; TYPE_3__* d; } ;
typedef TYPE_2__ DwarfBuf ;
typedef TYPE_3__ Dwarf ;


 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int * VAR_0 ;
 int FUNC_6 (char*,...) ;

int
FUNC_7(Dwarf *VAR_1, ulong VAR_2, ulong *VAR_3)
{
    DwarfBuf VAR_4;
    int VAR_5, VAR_6;
    ulong VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    uchar *VAR_12, *VAR_13;

    FUNC_5(&VAR_4, 0, sizeof VAR_4);
    VAR_4.d = VAR_1;
    VAR_4.p = VAR_1->aranges.data;
    VAR_4.ep = VAR_4.p + VAR_1->aranges.len;

    while(VAR_4.p < VAR_4.ep){
        VAR_12 = VAR_4.p;
        VAR_7 = FUNC_3(&VAR_4);
        if (!VAR_7) { VAR_4.ep = VAR_4.p - 4; return -1; }
        if((VAR_8 = FUNC_2(&VAR_4)) != 2){
            if(VAR_4.p == VAR_0){
            underflow:
                FUNC_6("buffer underflow reading address ranges header");
            }else
                FUNC_6("bad dwarf version 0x%x in address ranges header", VAR_8);
            return -1;
        }
        VAR_9 = FUNC_3(&VAR_4);
        VAR_4.addrsize = FUNC_1(&VAR_4);
        if(VAR_1->addrsize == 0)
            VAR_1->addrsize = VAR_4.addrsize;
        VAR_5 = FUNC_1(&VAR_4);
        FUNC_0(VAR_5);
        if(VAR_4.p == VAR_0)
            goto underflow;
        if((VAR_6 = (VAR_4.p-VAR_12) % (2*VAR_4.addrsize)) != 0)
            VAR_4.p += 2*VAR_4.addrsize - VAR_6;
        VAR_13 = VAR_12+4+VAR_7;
        while(VAR_4.p!=VAR_0 && VAR_4.p<VAR_13){
            VAR_10 = FUNC_4(&VAR_4);
            VAR_11 = FUNC_4(&VAR_4);
            if (!VAR_11) continue;
            if(VAR_4.p == VAR_0)
                goto underflow;
            if(VAR_10 <= VAR_2 && VAR_2 < VAR_10+VAR_11){
                *VAR_3 = VAR_9;
                return 0;
            }
        }
        if(VAR_4.p == VAR_0)
            goto underflow;
        VAR_4.p = VAR_13;
    }
    FUNC_6("address 0x%lux is not listed in dwarf debugging symbols", VAR_2);
    return -1;
}
