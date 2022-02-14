
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {scalar_t__ magic; int name; int ulNumberOfSrcFiles; int ulOffsetToSrcFiles; int ulSizeOfStabsStrings; int ulOffsetToStabsStrings; int ulSizeOfStabs; int ulOffsetToStabs; int ulSizeOfGlobalsStrings; int ulOffsetToGlobalsStrings; int ulSizeOfGlobals; int ulOffsetToGlobals; int ulSizeOfHeader; int ulOffsetToHeaders; } ;
typedef int PVOID ;
typedef TYPE_1__ PICE_SYMBOLFILE_HEADER ;
typedef int LPSTR ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int *,int ,int,int *,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 (scalar_t__) ;
 TYPE_1__* FUNC_8 (size_t,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 size_t FUNC_10 (scalar_t__,int ,size_t) ;
 TYPE_1__** VAR_4 ;
 scalar_t__ VAR_5 ;

PICE_SYMBOLFILE_HEADER* FUNC_11(LPSTR VAR_6)
{
 HANDLE VAR_7;
    PICE_SYMBOLFILE_HEADER* VAR_8=((void*)0);
 WCHAR VAR_9[256];
 int VAR_10;
 FUNC_2();

 if( !( VAR_10 = FUNC_4(VAR_0, ((void*)0), VAR_6, -1, VAR_9, 256 ) ) )
 {
  FUNC_1((0,"Can't convert module name.\n"));
  return ((void*)0);
 }
 FUNC_1((0,"LoadSymbols: filename %s, tempstr %S, conv: %d\n", VAR_6, VAR_9, VAR_10));

    if(VAR_5<FUNC_0(VAR_4))
    {
     VAR_7 = FUNC_9(VAR_9,VAR_2);
  FUNC_1(*(0,"LoadSymbols: hf: %x, file: %S\n",VAR_7, VAR_9));
     if(VAR_7)
     {

      size_t VAR_11;

            FUNC_1((0,"hf = %x\n",VAR_7));

      VAR_11 = FUNC_7(VAR_7);
      FUNC_1((0,"file len = %d\n",VAR_11));

            if(VAR_11)
            {
          VAR_8 = FUNC_8(VAR_11+1,VAR_1);
          FUNC_1((0,"pSymbols = %x\n",VAR_8));

          if(VAR_8)
          {

           if(VAR_11 == FUNC_10(VAR_7,(PVOID)VAR_8,VAR_11))
           {
            FUNC_1((0,"LoadSymbols(): success reading symbols!\n"));
            FUNC_1((0,"LoadSymbols(): pSymbols->magic = %X\n",VAR_8->magic));
           }



     if(VAR_8->magic == VAR_3)
     {
                        FUNC_1((0,"magic = %X\n",VAR_8->magic));
                     FUNC_1((0,"name = %S\n",VAR_8->name));
                        FUNC_1((0,"ulOffsetToHeaders,ulSizeOfHeader = %X,%X\n",VAR_8->ulOffsetToHeaders,VAR_8->ulSizeOfHeader));
                        FUNC_1((0,"ulOffsetToGlobals,ulSizeOfGlobals = %X,%X\n",VAR_8->ulOffsetToGlobals,VAR_8->ulSizeOfGlobals));
                        FUNC_1((0,"ulOffsetToGlobalsStrings,ulSizeOfGlobalsStrings = %X,%X\n",VAR_8->ulOffsetToGlobalsStrings,VAR_8->ulSizeOfGlobalsStrings));
                        FUNC_1((0,"ulOffsetToStabs,ulSizeOfStabs = %X,%X\n",VAR_8->ulOffsetToStabs,VAR_8->ulSizeOfStabs));
                        FUNC_1((0,"ulOffsetToStabsStrings,ulSizeOfStabsStrings = %X,%X\n",VAR_8->ulOffsetToStabsStrings,VAR_8->ulSizeOfStabsStrings));
                        FUNC_1((0,"ulOffsetToSrcFiles,ulNumberOfSrcFiles = %X,%X\n",VAR_8->ulOffsetToSrcFiles,VAR_8->ulNumberOfSrcFiles));
      FUNC_1((0,"pICE: symbols loaded for module \"%S\" @ %x\n",VAR_8->name,VAR_8));
      VAR_4[VAR_5++]=VAR_8;
     }
     else
     {
         FUNC_1((0,"LoadSymbols(): freeing %x\n",VAR_8));
      FUNC_1((0,"pICE: symbols file \"%s\" corrupt\n",VAR_6));
         FUNC_6(VAR_8);
     }
          }

            }
      FUNC_5(VAR_7);
     }
        else
        {
   FUNC_1((0,"pICE: could not load symbols for %s...\n",VAR_6));
        }
    }

 FUNC_3();

    return VAR_8;
}
