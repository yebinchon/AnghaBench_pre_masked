
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {scalar_t__ BaseAddress; } ;
struct TYPE_8__ {int ulOffsetToStabs; int ulSizeOfStabs; int ulOffsetToStabsStrings; } ;
struct TYPE_7__ {int n_strx; int n_type; int n_value; int n_desc; } ;
typedef int STAB_ENTRY ;
typedef int* PULONG ;
typedef TYPE_1__* PSTAB_ENTRY ;
typedef TYPE_2__ PICE_SYMBOLFILE_HEADER ;
typedef TYPE_3__* PDEBUG_MODULE ;
typedef char* LPSTR ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int) ;




 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int VAR_1 ;

BOOLEAN FUNC_9(ULONG VAR_2,LPSTR VAR_3,PDEBUG_MODULE VAR_4,PULONG VAR_5)
{
    ULONG VAR_6;
    PSTAB_ENTRY VAR_7;
    LPSTR VAR_8,VAR_9;
    int VAR_10;
    int VAR_11=0,VAR_12=0;
    PICE_SYMBOLFILE_HEADER* VAR_13;
    static char VAR_14[256];
    static char VAR_15[256];
    ULONG VAR_16,VAR_17,VAR_18=0xFFFFFFFF;
    BOOLEAN VAR_19 = VAR_0;

    FUNC_0((0,"FindAddressForSourceLine(%u,%s,%x)\n",VAR_2,VAR_3,(ULONG)VAR_4));

    VAR_17 = (ULONG)VAR_4->BaseAddress;

    VAR_13 = FUNC_2(VAR_17);
    if(VAR_13)
    {
        VAR_7 = (PSTAB_ENTRY )((ULONG)VAR_13 + VAR_13->ulOffsetToStabs);
        VAR_10 = VAR_13->ulSizeOfStabs;
        VAR_8 = (LPSTR)((ULONG)VAR_13 + VAR_13->ulOffsetToStabsStrings);

        for(VAR_6=0;VAR_6<(VAR_10/sizeof(STAB_ENTRY));VAR_6++)
        {
            VAR_9 = &VAR_8[VAR_7->n_strx + VAR_11];

            switch(VAR_7->n_type)
            {
                case 128:
                    VAR_11 += VAR_12;
                    VAR_12 = VAR_7->n_value;
                    break;
                case 129:
     if((VAR_16 = FUNC_6(VAR_9)))
                    {
                        if(VAR_9[VAR_16-1]!='/')
                        {
                            if(FUNC_6(VAR_15))
                            {
                                FUNC_3(VAR_15,VAR_9);
                                FUNC_0((0,"changing source file %s\n",VAR_15));
                            }
                            else
                            {
                                FUNC_0((0,"changing source file %s\n",VAR_9));
                                FUNC_5(VAR_15,VAR_9);
                            }
                        }
                        else
                            FUNC_5(VAR_15,VAR_9);
                    }
                    else
     {
                        VAR_15[0]=0;
     }
                    break;
                case 130:

                    if(FUNC_4(VAR_3,VAR_15)==0)
                    {
                        if(VAR_7->n_desc>=VAR_2 && (VAR_7->n_desc-VAR_2)<=VAR_18)
                        {
                            VAR_18 = VAR_7->n_desc-VAR_2;

                            FUNC_0((0,"code source line number #%u for offset %x in function @ %s)\n",VAR_7->n_desc,VAR_7->n_value,VAR_14));
                            VAR_17 = FUNC_1(VAR_14,VAR_4);
                            if(VAR_17)
                            {
                                *VAR_5 = VAR_17 + VAR_7->n_value;
                                VAR_19 = VAR_1;
                            }
                        }
                    }
                    break;
                case 131:
                    if(FUNC_6(VAR_9))
                    {
                        ULONG VAR_20;

                     VAR_20=FUNC_8(VAR_9,":");
                     FUNC_7(VAR_14,VAR_9,VAR_20);
                        VAR_14[VAR_20]=0;
                        FUNC_0((0,"function %s\n",VAR_14));
                    }
     else
     {
                        FUNC_0((0,"END of function %s\n",VAR_14));
      VAR_14[0]=0;
     }
                    break;
            }
            VAR_7++;
        }
    }
    return VAR_19;
}
