
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int ulOffsetToStabs; int ulSizeOfStabs; int ulOffsetToStabsStrings; } ;
struct TYPE_5__ {int n_strx; int n_type; int n_value; } ;
typedef int STAB_ENTRY ;
typedef TYPE_1__* PSTAB_ENTRY ;
typedef TYPE_2__ PICE_SYMBOLFILE_HEADER ;
typedef char* LPSTR ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (TYPE_2__*,int,int) ;



 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char) ;

LPSTR FUNC_9(PICE_SYMBOLFILE_HEADER* VAR_0,ULONG VAR_1,ULONG VAR_2)
{
    ULONG VAR_3;
    PSTAB_ENTRY VAR_4;
    LPSTR VAR_5,VAR_6,VAR_7;
    int VAR_8;
    int VAR_9=0,VAR_10=0,VAR_11;
 static char VAR_12[2048];
 ULONG VAR_13,VAR_14=0;
 LPSTR VAR_15;
    static char VAR_16[256];

    FUNC_1();
    FUNC_0((0,"FindTypeDefinition(%u,%u)\n",VAR_1,VAR_2));

 *VAR_12 = 0;

    VAR_4 = (PSTAB_ENTRY )((ULONG)VAR_0 + VAR_0->ulOffsetToStabs);
    VAR_8 = VAR_0->ulSizeOfStabs;
    VAR_5 = (LPSTR)((ULONG)VAR_0 + VAR_0->ulOffsetToStabsStrings);

    for(VAR_3=0;VAR_3<(VAR_8/sizeof(STAB_ENTRY));VAR_3++)
    {
        VAR_6 = &VAR_5[VAR_4->n_strx + VAR_9];

        switch(VAR_4->n_type)
        {
 case 128:
   VAR_9 += VAR_10;
   VAR_10 = VAR_4->n_value;
   break;
 case 129:
   if((VAR_11 = FUNC_7(VAR_6)))
     {
       if(VAR_6[VAR_11-1]!='/')
  {
    VAR_14++;
    if(FUNC_7(VAR_16))
      {
        FUNC_4(VAR_16,VAR_6);
        FUNC_0((0,"FindTypeDefinition()1: cha %s, %u\n",VAR_16, VAR_14));
      }
    else
      {
        FUNC_0((0,"FindTypeDefinition(): cha %s, %u\n",VAR_6, VAR_14));
      }
  }
       else
  FUNC_6(VAR_16,VAR_6);
     }
   else
     {
       VAR_16[0]=0;
     }
   break;
 case 130:


   if(VAR_4->n_value == 0 )
     {
       FUNC_0((0,"FindTypeDefinition(): pre type definition %s\n",VAR_6));

       if(FUNC_8(VAR_6,'\\'))
  {
    if(FUNC_7(VAR_12))
      {
        FUNC_4(VAR_12,VAR_6);
        FUNC_0((0,"FindTypeDefinition(): [1] accum. %s\n",VAR_12));
      }
    else
      {
        FUNC_6(VAR_12,VAR_6);
        FUNC_0((0,"FindTypeDefinition(): [2] accum. %s\n",VAR_12));
      }
    VAR_12[FUNC_7(VAR_12)-1]=0;
  }
       else
  {
    FUNC_0((0,"FindTypeDefinition(): [3] accum. %s, pname: %s\n",VAR_12, VAR_6));
    if(FUNC_7(VAR_12)==0)
      {
        FUNC_6(VAR_12,VAR_6);
      }
    else
      {
        FUNC_4(VAR_12,VAR_6);
      }
    VAR_7 = VAR_12;

    VAR_15 = FUNC_5(VAR_7,':');
    if(VAR_15 && (*(VAR_15+1)=='t' || *(VAR_15+1)=='T'))
      {

        VAR_13 = FUNC_2(VAR_7);
        FUNC_0((0,"FindTypeDefinition(): ulCurrType: %u, LSYM is type %s\n",VAR_13,VAR_6));
        if(VAR_13 == VAR_1)
   {
     FUNC_0((0,"FindTypeDefinition(): type definition %s\n",VAR_7));
     return VAR_7;
   }
      }
    *VAR_12=0;
  }
     }
   break;
        }
        VAR_4++;
    }

    return FUNC_3(VAR_0,VAR_1,VAR_2);

}
