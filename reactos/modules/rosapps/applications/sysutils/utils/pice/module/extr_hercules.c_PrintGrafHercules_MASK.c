
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_4__ {scalar_t__ bkcol; scalar_t__ fgcol; } ;
struct TYPE_5__ {TYPE_1__ bits; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
typedef int * PUCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;

void FUNC_0(ULONG VAR_8,ULONG VAR_9,UCHAR VAR_10)
{
    ULONG VAR_11;
    PUCHAR VAR_12;
    ULONG VAR_13 = VAR_9<<3;

 if(!VAR_6)
  return;

    VAR_12=&VAR_5[(ULONG)VAR_10<<3];

    if((VAR_4.u.bits.bkcol == VAR_2 && VAR_4.u.bits.fgcol == VAR_0) ||
       (VAR_4.u.bits.bkcol == VAR_1 && VAR_4.u.bits.fgcol == VAR_3) )
     for(VAR_11=0 ;VAR_11<8 ;VAR_11++,VAR_13++)
     {
            *(PUCHAR)(VAR_7[VAR_13 & 0x3] + ( 90* (VAR_13 >> 2) ) + VAR_8) = ~*VAR_12++;
        }
    else
     for(VAR_11=0 ;VAR_11<8 ;VAR_11++,VAR_13++)
     {
            *(PUCHAR)(VAR_7[VAR_13 & 0x3] + ( 90* (VAR_13 >> 2) ) + VAR_8) = *VAR_12++;
        }
}
