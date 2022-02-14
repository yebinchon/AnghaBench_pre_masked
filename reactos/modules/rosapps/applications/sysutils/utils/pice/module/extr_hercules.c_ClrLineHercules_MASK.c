
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_5__ {scalar_t__ bkcol; scalar_t__ fgcol; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct TYPE_7__ {int y; } ;
typedef scalar_t__ PUCHAR ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 size_t VAR_6 ;
 TYPE_4__ VAR_7 ;
 scalar_t__* VAR_8 ;
 TYPE_3__* VAR_9 ;

void FUNC_2(ULONG VAR_10)
{
    ULONG VAR_11;
    BOOLEAN VAR_12=( (USHORT)VAR_10==VAR_9[VAR_2].y-1 ||
                            (USHORT)VAR_10==VAR_9[VAR_6].y-1 ||
                            (USHORT)VAR_10==VAR_9[VAR_5].y-1 ||
                            0);
 ULONG VAR_13 = VAR_10<<3;
    ULONG VAR_14=0;
    PUCHAR VAR_15;



    if(VAR_10 > VAR_3 )
    {
        FUNC_0((0,"ClrLineHercules(): line %u is out of screen\n",VAR_10));

        return;
    }

    if(VAR_7.u.bits.bkcol == VAR_0 && VAR_7.u.bits.fgcol == VAR_1 )
        VAR_14=~VAR_14;

    if(VAR_12)
    {
     for(VAR_11=0;VAR_11<8;VAR_11++,VAR_13++)
     {
            VAR_15 = (PUCHAR)(VAR_8[VAR_13&3] + (90*(VAR_13>>2)) );






   if(VAR_11==2 || VAR_11==5)VAR_14=0xFF;
   else VAR_14 = 0;

      FUNC_1(VAR_15,(UCHAR)VAR_14,VAR_4);
     }
    }
    else
    {
        for(VAR_11=0;VAR_11<8;VAR_11++,VAR_13++)
        {
            VAR_15 = (PUCHAR)(VAR_8[VAR_13&3] + (90*(VAR_13>>2)) );

            FUNC_1(VAR_15,(UCHAR)VAR_14,VAR_4);
        }
    }

}
