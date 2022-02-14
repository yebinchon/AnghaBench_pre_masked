
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int ulOffsetToStabs; int ulSizeOfStabs; int ulOffsetToStabsStrings; } ;
struct TYPE_4__ {int n_strx; int n_type; int n_value; } ;
typedef int STAB_ENTRY ;
typedef TYPE_1__* PSTAB_ENTRY ;
typedef TYPE_2__ PICE_SYMBOLFILE_HEADER ;
typedef char* LPSTR ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;



 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;

LPSTR FUNC_8(PICE_SYMBOLFILE_HEADER* VAR_0,ULONG VAR_1,ULONG VAR_2)
{
    ULONG VAR_3;
    PSTAB_ENTRY VAR_4;
    LPSTR VAR_5,VAR_6,VAR_7,VAR_8,VAR_9;
    int VAR_10;
    int VAR_11=0,VAR_12=0,VAR_13;
 static char VAR_14[2048];
 ULONG VAR_15,VAR_16=0;
    static char VAR_17[256];

    FUNC_1();

 *VAR_14 = 0;

    VAR_4 = (PSTAB_ENTRY )((ULONG)VAR_0 + VAR_0->ulOffsetToStabs);
    VAR_10 = VAR_0->ulSizeOfStabs;
    VAR_5 = (LPSTR)((ULONG)VAR_0 + VAR_0->ulOffsetToStabsStrings);

 FUNC_0((0,"FindTypeDefinitionForCombinedTypes()\n"));

    for(VAR_3=0;VAR_3<(VAR_10/sizeof(STAB_ENTRY));VAR_3++)
    {
        VAR_6 = &VAR_5[VAR_4->n_strx + VAR_11];

        switch(VAR_4->n_type)
        {
            case 128:
                VAR_11 += VAR_12;
                VAR_12 = VAR_4->n_value;
                break;
            case 129:
                if((VAR_13 = FUNC_6(VAR_6)))
                {
                    if(VAR_6[VAR_13-1]!='/')
                    {
      VAR_16++;
                        if(FUNC_6(VAR_17))
                        {
                            FUNC_3(VAR_17,VAR_6);
                            FUNC_0((0,"FindTypeDefinitionForCombinedTypes(): changing source file %s\n",VAR_17));
                        }
                        else
                        {
                            FUNC_0((0,"FindTypeDefinitionForCombinedTypes(): changing source file %s\n",VAR_6));
                        }
                    }
                    else
                        FUNC_5(VAR_17,VAR_6);
                }
                else
    {
                    VAR_17[0]=0;
    }
    break;
   case 130:

    if( 1 )
                {
                    FUNC_0((0,"FindTypeDefinitionForCombinedTypes(): %s\n",VAR_6));


     if(FUNC_4(VAR_6,'\\'))
     {
      if(FUNC_6(VAR_14))
      {
       FUNC_3(VAR_14,VAR_6);
      }
      else
      {
       FUNC_5(VAR_14,VAR_6);
      }
                        VAR_14[FUNC_6(VAR_14)-1]=0;

     }
                    else
                    {
      if(FUNC_6(VAR_14)==0)
                        {
                            FUNC_5(VAR_14,VAR_6);
                        }
                        else
                        {
                            FUNC_3(VAR_14,VAR_6);
                        }
                        VAR_9 = VAR_14;


            VAR_13 = FUNC_7(VAR_9,":");
                        if((VAR_8 = FUNC_4(VAR_9,'=')) && VAR_9[VAR_13+1]=='G')
                        {
                            FUNC_0((0,"FindTypeDefinitionForCombinedTypes(): symbol includes type definition (%s)\n",VAR_9));
                            VAR_7 = VAR_9+VAR_13+1;
                            if((VAR_15 = FUNC_2(VAR_7)) )
                            {
                                FUNC_0((0,"FindTypeDefinitionForCombinedTypes(): type-number %x\n",VAR_15));
                                if(VAR_15 == VAR_1)
                                {
                                    FUNC_0((0,"FindTypeDefinitionForCombinedTypes(): typenumber %x matches!\n",VAR_15));
                                    return VAR_9;
                                }
                            }
            }
                        *VAR_14 = 0;
                    }
                }
    break;
        }
        VAR_4++;
    }
    return ((void*)0);
}
