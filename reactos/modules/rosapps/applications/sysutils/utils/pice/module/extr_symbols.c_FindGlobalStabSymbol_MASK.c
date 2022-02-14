
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {scalar_t__ BaseAddress; } ;
struct TYPE_7__ {int ulOffsetToStabs; int ulSizeOfStabs; int ulOffsetToStabsStrings; } ;
struct TYPE_6__ {int n_strx; int n_type; int n_value; } ;
typedef int STAB_ENTRY ;
typedef int* PULONG ;
typedef TYPE_1__* PSTAB_ENTRY ;
typedef TYPE_2__ PICE_SYMBOLFILE_HEADER ;
typedef char* LPSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int) ;





 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char*) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

BOOLEAN FUNC_11(LPSTR VAR_4,PULONG VAR_5,PULONG VAR_6,PULONG VAR_7)
{
  ULONG VAR_8;
  PSTAB_ENTRY VAR_9;
  LPSTR VAR_10,VAR_11;
  int VAR_12;
  int VAR_13=0,VAR_14=0,VAR_15,VAR_16;
  PICE_SYMBOLFILE_HEADER* VAR_17;
  ULONG VAR_18;
  static char VAR_19[1024];
  static char VAR_20[256];
  ULONG VAR_21=0;
  LPSTR VAR_22;
  ULONG VAR_23;


  if(VAR_3)
    {

      VAR_23 = (ULONG)VAR_3->BaseAddress;


      VAR_17 = FUNC_3(VAR_23);
      if(VAR_17)
 {

   VAR_9 = (PSTAB_ENTRY )((ULONG)VAR_17 + VAR_17->ulOffsetToStabs);
   VAR_12 = VAR_17->ulSizeOfStabs;
   VAR_10 = (LPSTR)((ULONG)VAR_17 + VAR_17->ulOffsetToStabsStrings);

   *VAR_7 = 0;


   for(VAR_8=0;VAR_8<(VAR_12/sizeof(STAB_ENTRY));VAR_8++)
     {
       VAR_11 = &VAR_10[VAR_9->n_strx + VAR_13];

       switch(VAR_9->n_type)
  {

  case 128:
    VAR_13 += VAR_14;
    VAR_14 = VAR_9->n_value;
    break;

  case 129:
    if((VAR_16 = FUNC_8(VAR_11)))
      {
        if(VAR_11[VAR_16-1]!='/')
   {
     VAR_21++;
     if(FUNC_8(VAR_20))
       {
         FUNC_4(VAR_20,VAR_11);
         FUNC_0((0,"changing source file %s\n",VAR_20));
       }
     else
       {
         FUNC_0((0,"changing source file %s\n",VAR_11));
       }
   }
        else
   FUNC_7(VAR_20,VAR_11);
      }
    else
      {
        VAR_20[0]=0;
      }
    break;
  case 132:
  case 131:
  case 130:

    VAR_15 = FUNC_10(VAR_11,":");
    FUNC_9(VAR_19,VAR_11,VAR_15);
    VAR_19[VAR_15] = 0;
    if(FUNC_6(VAR_19,VAR_4)==0)
      {
        FUNC_0((0,"global symbol %s\n",VAR_11));

        VAR_18 = FUNC_1(VAR_11);
        FUNC_0((0,"type number = %x, from %s\n",VAR_18, VAR_11));
        *VAR_6 = VAR_18;

        if( VAR_9->n_type == 131 || VAR_9->n_type == 130 )
   *VAR_5 = VAR_0 + VAR_9->n_value;
        else *VAR_5 = FUNC_2(VAR_19,VAR_3);

        FUNC_0((0,"value = %x\n",*VAR_5));
        *VAR_7 = VAR_21;
        FUNC_0((0,"file = %x\n",VAR_21));
        if((VAR_22 = FUNC_5(VAR_11,'=')) )
   {
     FUNC_0((0,"symbol includes type definition (%s)\n",VAR_22));
   }
        return VAR_2;
      }
    break;
  }
       VAR_9++;
     }
 }
    }
  return VAR_1;
}
