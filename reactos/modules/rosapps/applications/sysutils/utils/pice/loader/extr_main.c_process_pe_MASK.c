
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {long e_lfanew; scalar_t__ e_magic; } ;
struct TYPE_5__ {int PointerToSymbolTable; int NumberOfSymbols; int NumberOfSections; } ;
struct TYPE_6__ {scalar_t__ Signature; TYPE_1__ FileHeader; } ;
typedef scalar_t__ PSTAB_ENTRY ;
typedef scalar_t__ PIMAGE_SYMBOL ;
typedef TYPE_2__* PIMAGE_NT_HEADERS ;
typedef TYPE_3__* PIMAGE_DOS_HEADER ;
typedef char* LPSTR ;
typedef int IMAGE_SYMBOL ;
typedef int IMAGE_SECTION_HEADER ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int,int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (void*,int ,int,scalar_t__*,int*,char**,int*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,scalar_t__,int ,int,void*,scalar_t__,int,char*,int,char*,int,char*,int) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ VAR_6 ;

int FUNC_9(char* VAR_7,int VAR_8,void* VAR_9,int VAR_10)
{

 PIMAGE_DOS_HEADER VAR_11;
 PIMAGE_NT_HEADERS VAR_12;

 char* VAR_13;
 PSTAB_ENTRY VAR_14;
 DWORD VAR_15,VAR_16;
 char* VAR_17;
 char* VAR_18;

 char VAR_19[2048];
 HANDLE VAR_20;
 int VAR_21,VAR_22;
    int VAR_23 = 0;

 VAR_11 = (PIMAGE_DOS_HEADER)VAR_9;
 VAR_12 = (PIMAGE_NT_HEADERS)((DWORD)VAR_9 + VAR_11->e_lfanew);

    if ((VAR_11->e_magic == VAR_3)
       && (VAR_11->e_lfanew != 0L)
       && (VAR_12->Signature == VAR_4))
    {
  if( VAR_12->FileHeader.PointerToSymbolTable ){

   VAR_18 = (char*)((DWORD)VAR_9 + VAR_12->FileHeader.PointerToSymbolTable);
   VAR_16 = VAR_12->FileHeader.NumberOfSymbols;


   VAR_17 = (char*)((PIMAGE_SYMBOL)VAR_18 + VAR_16);
   VAR_21 = *((DWORD*)VAR_17);
   FUNC_3(VAR_9,FUNC_2(VAR_12),VAR_12->FileHeader.NumberOfSections,
     &VAR_14,&VAR_15,&VAR_13,&VAR_22);

   if(VAR_14 && VAR_15 && VAR_13 && VAR_22)
   {
    LPSTR VAR_24;

    FUNC_8(VAR_19,VAR_7);

    if((VAR_24 = FUNC_7(VAR_19,'.')))
    {
     *VAR_24 = 0;
     FUNC_6(VAR_24,".dbg");
    }
    else
    {
     FUNC_6(VAR_19,".dbg");
    }

             FUNC_4("LOADER: creating symbol file %s for %s\n",VAR_19,VAR_7);

    VAR_20 = FUNC_1(VAR_19,
             VAR_1 | VAR_2,
             0,
             ((void*)0),
             VAR_0,
             0,
             0);

             if(VAR_20 != VAR_5)
    {
     FUNC_4("NumberOfSections: %d, size: %d\n", VAR_12->FileHeader.NumberOfSections,sizeof(IMAGE_SECTION_HEADER));
     FUNC_5(VAR_19,
          VAR_20,
          FUNC_2(VAR_12),
          VAR_12->FileHeader.NumberOfSections*sizeof(IMAGE_SECTION_HEADER),
          VAR_9,
          VAR_14,
          VAR_15,
          VAR_13,
          VAR_22,
          (char*)VAR_18,
          VAR_16*sizeof(IMAGE_SYMBOL),
          VAR_17,
          VAR_21);

     FUNC_0(VAR_20);
    }
             else
             {
                 FUNC_4("LOADER: creation of symbol file %s failed\n",VAR_19);
     VAR_23 = 2;
             }

   }
         else
         {
             FUNC_4("LOADER: file %s has no data inside symbol tables\n",VAR_7);
    if( VAR_6 )
    {
                 if( !VAR_14 || !VAR_15 )
                     FUNC_4("LOADER: - symbol table is empty or not present\n");
                 if( !VAR_13 || !VAR_22 )
                     FUNC_4("LOADER: - string table is empty or not present\n");
    }
             VAR_23 = 2;
         }
  }
  else{
            FUNC_4("LOADER: file %s does not have a symbol table\n",VAR_7);
            VAR_23 = 2;
  }
    }
    else
    {
        FUNC_4("LOADER: file %s is not an ELF binary\n",VAR_7);
        VAR_23 = 1;
    }


    return VAR_23;
}
