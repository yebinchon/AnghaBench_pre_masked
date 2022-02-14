
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_2__ {scalar_t__ cy; } ;
typedef int* LPSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (size_t,char*) ;
 int FUNC_7 () ;
 size_t VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 char* VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_10(LPSTR VAR_6,LPSTR VAR_7,ULONG VAR_8,ULONG VAR_9)
{
    ULONG VAR_10;
    LPSTR VAR_11;
    ULONG VAR_12 = VAR_8-1;

    FUNC_1((0,"DisplaySourceFile(%.8X,%u,%u)\n",VAR_6,VAR_8,VAR_9));


    while(VAR_12--)
    {

        while(*VAR_6!=0x0a && *VAR_6!=0x0d)
            VAR_6++;


        if(*VAR_6 == 0x0d)
            VAR_6++;
        if(*VAR_6 == 0x0a)
            VAR_6++;
    }

    FUNC_0(VAR_3);
    FUNC_2(VAR_3);
    for(VAR_10=0;VAR_10<VAR_5[VAR_3].cy;VAR_10++)
    {
        VAR_11 = VAR_4;

        if(VAR_6<VAR_7)
        {
            FUNC_4(VAR_4,".%.5u ",VAR_8+VAR_10);
            VAR_11 = VAR_4 + FUNC_5(VAR_4);

            while(VAR_6<VAR_7 && *VAR_6!=0x0a && *VAR_6!=0x0d)
            {
                if(*VAR_6==0x9)
                {
                    *VAR_11++ = 0x20;
                    *VAR_11++ = 0x20;
                    *VAR_11++ = 0x20;
                    *VAR_11++ = 0x20;
                    VAR_6++;
                }
                else
                {
                    *VAR_11++ = *VAR_6++;
                }
            }

            if(VAR_6<VAR_7)
            {

                if(*VAR_6 == 0x0d)
                    VAR_6++;
                if(*VAR_6 == 0x0a)
                    VAR_6++;
            }

            *VAR_11++ = '\n';
            *VAR_11 = 0;

            if(FUNC_5(VAR_4)>VAR_2-1)
            {
                VAR_4[VAR_2-2]='\n';
                VAR_4[VAR_2-1]=0;
            }

            if( (VAR_9!=-1) &&
               ((int)(VAR_9-VAR_8)>=0) &&
               ((VAR_9-VAR_8)<VAR_5[VAR_3].cy) &&
               (VAR_10==(VAR_9-VAR_8)) )
            {
                FUNC_9(VAR_0);
                FUNC_8(VAR_1);
            }

            FUNC_6(VAR_3,VAR_4);

            if( (VAR_9!=-1) &&
               ((int)(VAR_9-VAR_8)>=0) &&
               ((VAR_9-VAR_8)<VAR_5[VAR_3].cy) &&
               (VAR_10==(VAR_9-VAR_8)) )
            {
                FUNC_7();
            }

        }
        else
        {
            FUNC_6(VAR_3,"---- End of source file --------------\n");
            break;
        }
    }
    FUNC_3(VAR_3);
}
