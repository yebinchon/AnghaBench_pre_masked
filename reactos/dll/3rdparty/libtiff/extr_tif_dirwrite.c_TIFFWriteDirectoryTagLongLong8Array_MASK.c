
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_5__ {int tif_flags; int tif_clientdata; } ;
typedef int TIFFDirEntry ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (TYPE_1__*,int*,int *,int ,int,int*) ;
 int FUNC_2 (TYPE_1__*,int*,int *,int ,int,int*) ;
 int VAR_0 ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(TIFF* VAR_1, uint32* VAR_2, TIFFDirEntry* VAR_3, uint16 VAR_4, uint32 VAR_5, uint64* VAR_6)
{
    static const char VAR_7[] = "TIFFWriteDirectoryTagLongLong8Array";
    uint64* VAR_8;
    uint32 VAR_9;
    uint32* VAR_10;
    uint32* VAR_11;
    int VAR_12;


    if (VAR_3==((void*)0))
    {
        (*VAR_2)++;
        return(1);
    }


    if( VAR_1->tif_flags&VAR_0 )
        return FUNC_1(VAR_1,VAR_2,VAR_3,
                                                      VAR_4,VAR_5,VAR_6);






    VAR_10 = FUNC_4(VAR_5*sizeof(uint32));
    if (VAR_10==((void*)0))
    {
        FUNC_0(VAR_1->tif_clientdata,VAR_7,"Out of memory");
        return(0);
    }

    for (VAR_11=VAR_10, VAR_8=VAR_6, VAR_9=0; VAR_9<VAR_5; VAR_8++, VAR_9++, VAR_11++)
    {
        if (*VAR_8>0xFFFFFFFF)
        {
            FUNC_0(VAR_1->tif_clientdata,VAR_7,
                         "Attempt to write value larger than 0xFFFFFFFF in Classic TIFF file.");
            FUNC_3(VAR_10);
            return(0);
        }
        *VAR_11= (uint32)(*VAR_8);
    }

    VAR_12=FUNC_2(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5,VAR_10);
    FUNC_3(VAR_10);

    return(VAR_12);
}
