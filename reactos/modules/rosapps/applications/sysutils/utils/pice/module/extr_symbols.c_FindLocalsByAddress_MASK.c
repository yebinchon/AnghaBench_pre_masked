
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {int ulOffsetToStabs; int ulSizeOfStabs; int ulOffsetToStabsStrings; } ;
struct TYPE_9__ {char* type_name; char* name; void* offset; int bRegister; int line; void* value; } ;
struct TYPE_8__ {int n_strx; int n_type; int n_value; int n_desc; int n_other; } ;
typedef int STAB_ENTRY ;
typedef TYPE_1__* PSTAB_ENTRY ;
typedef TYPE_2__* PLOCAL_VARIABLE ;
typedef TYPE_3__ PICE_SYMBOLFILE_HEADER ;
typedef char* LPSTR ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char* FUNC_2 (int,int*,int*) ;
 TYPE_3__* FUNC_3 (int) ;
 char* FUNC_4 (TYPE_3__*,int,int) ;
 void** VAR_2 ;






 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char*) ;
 int VAR_3 ;
 char* FUNC_11 (char*,char) ;
 TYPE_2__* VAR_4 ;

PLOCAL_VARIABLE FUNC_12(ULONG VAR_5)
{
    ULONG VAR_6;
    PSTAB_ENTRY VAR_7;
    LPSTR VAR_8,VAR_9;
    int VAR_10;
    int VAR_11=0,VAR_12=0;
    PICE_SYMBOLFILE_HEADER* VAR_13;
    static char VAR_14[256];
    static char VAR_15[256];
    LPSTR VAR_16;
    ULONG VAR_17,VAR_18,VAR_19;
 ULONG VAR_20,VAR_21=0;
 LPSTR VAR_22;
 ULONG VAR_23=0;

    FUNC_0((0,"FindLocalsByAddress()\n"));

    VAR_16 = FUNC_2(VAR_5,&VAR_17,&VAR_18);
    FUNC_0((0,"FindLocalsByAddress(): pFunctionName = %s\n",VAR_16));
    if(VAR_16)
    {
        VAR_13 = FUNC_3(VAR_5);
        if(VAR_13)
        {
            VAR_7 = (PSTAB_ENTRY )((ULONG)VAR_13 + VAR_13->ulOffsetToStabs);
            VAR_10 = VAR_13->ulSizeOfStabs;
            VAR_8 = (LPSTR)((ULONG)VAR_13 + VAR_13->ulOffsetToStabsStrings);

            for(VAR_6=0;VAR_6<(VAR_10/sizeof(STAB_ENTRY));VAR_6++)
            {
                VAR_9 = &VAR_8[VAR_7->n_strx + VAR_11];

                FUNC_0((0,"FindLocalsByAddress(): %x %x %x %x %x\n",
                        VAR_7->n_strx,
                        VAR_7->n_type,
                        VAR_7->n_other,
                        VAR_7->n_desc,
                        VAR_7->n_value));

                switch(VAR_7->n_type)
                {
                    case 128:
                        VAR_11 += VAR_12;
                        VAR_12 = VAR_7->n_value;
                        break;
                    case 129:
                        if((VAR_19 = FUNC_8(VAR_9)))
                        {
                            if(VAR_9[VAR_19-1]!='/')
                            {
                                VAR_21++;
                                if(FUNC_8(VAR_15))
                                {
                                    FUNC_6(VAR_15,VAR_9);
                                    FUNC_0((0,"changing source file1 %s, %u\n",VAR_15,VAR_21));
                                }
                                else
                                {
                                    FUNC_0((0,"changing source file %s, %u\n",VAR_9,VAR_21));
                                }
                            }
                            else
                                FUNC_7(VAR_15,VAR_9);
                        }
                        else
      {
                            VAR_15[0]=0;
      }
                        break;
                    case 132:

                        if(VAR_14[0] && FUNC_5(VAR_14,VAR_16)==0)
                        {
                            FUNC_0((0,"local variable1 %.8X %.8X %.8X %.8X %.8X %s\n",VAR_7->n_strx,VAR_7->n_type,VAR_7->n_other,VAR_7->n_desc,VAR_7->n_value,VAR_9));
       VAR_20 = FUNC_1(VAR_9);
       FUNC_0((0,"type number = %u\n",VAR_20));
       if((VAR_22 = FUNC_4(VAR_13,VAR_20,VAR_21)))
       {
        FUNC_0((0,"pTypedef: %x\n", VAR_22));
        FUNC_7(VAR_4[VAR_23].type_name,FUNC_11(VAR_22,':'));
        FUNC_7(VAR_4[VAR_23].name,FUNC_11(VAR_9,':'));
        VAR_4[VAR_23].value = (VAR_0+VAR_7->n_value);
        VAR_4[VAR_23].offset = VAR_7->n_value;
        VAR_4[VAR_23].line = VAR_7->n_desc;
                                VAR_4[VAR_23].bRegister = VAR_1;
        VAR_23++;
       }
                        }
                        break;
     case 131:

                        if(VAR_14[0] && FUNC_5(VAR_14,VAR_16)==0)
                        {
                            FUNC_0((0,"parameter variable %.8X %.8X %.8X %.8X %.8X %s\n",VAR_7->n_strx,VAR_7->n_type,VAR_7->n_other,VAR_7->n_desc,VAR_7->n_value,VAR_9));
       VAR_20 = FUNC_1(VAR_9);
       FUNC_0((0,"type number = %x\n",VAR_20));
       if((VAR_22 = FUNC_4(VAR_13,VAR_20,VAR_21)))
       {
        FUNC_7(VAR_4[VAR_23].type_name,FUNC_11(VAR_22,':'));
        FUNC_7(VAR_4[VAR_23].name,FUNC_11(VAR_9,':'));
        VAR_4[VAR_23].value = (VAR_0+VAR_7->n_value);
        VAR_4[VAR_23].offset = VAR_7->n_value;
        VAR_23++;
       }
                        }
                        break;
                    case 130:

                        if(VAR_14[0] && FUNC_5(VAR_14,VAR_16)==0)
                        {
                            FUNC_0((0,"local variable2 %.8X %.8X %.8X %.8X %.8X %s\n",VAR_7->n_strx,VAR_7->n_type,VAR_7->n_other,VAR_7->n_desc,VAR_7->n_value,VAR_9));
       VAR_20 = FUNC_1(VAR_9);
       FUNC_0((0,"type number = %x\n",VAR_20));
       if((VAR_22 = FUNC_4(VAR_13,VAR_20,VAR_21)))
       {
        FUNC_7(VAR_4[VAR_23].type_name,FUNC_11(VAR_22,':'));
        FUNC_7(VAR_4[VAR_23].name,FUNC_11(VAR_9,':'));
        VAR_4[VAR_23].value = (VAR_2[VAR_7->n_value]);
        VAR_4[VAR_23].offset = VAR_7->n_value;
        VAR_4[VAR_23].line = VAR_7->n_desc;
                                VAR_4[VAR_23].bRegister = VAR_3;
        VAR_23++;
       }
                        }
                        break;
                    case 133:
                        if(FUNC_8(VAR_9))
                        {
                            ULONG VAR_24;

                         VAR_24=FUNC_10(VAR_9,":");
                         FUNC_9(VAR_14,VAR_9,VAR_24);
                            VAR_14[VAR_24]=0;
                            FUNC_0((0,"function %s\n",VAR_14));
                        }
      else
      {
                            FUNC_0((0,"END of function %s\n",VAR_14));
                            VAR_14[0]=0;
       if(VAR_23)
       {
        *VAR_4[VAR_23].name = 0;
        return VAR_4;
       }
      }
                        break;
                }
                VAR_7++;
            }
        }
    }
 return ((void*)0);
}
