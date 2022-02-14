
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* compressFn ) (char const*,char*,int,int,int const) ;


 int FUNC_0 (int,char*,...) ;
 int const VAR_0 ;
 int FUNC_1 (char const*,char*,int,int,int const) ;
 int FUNC_2 (char const*,char*,int,int,int const) ;
 int FUNC_3 (char const*,char*,int const,int) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (void const*,void*,size_t) ;
 int FUNC_6 (void const*,size_t) ;

__attribute__((used)) static void FUNC_7(void* VAR_1, size_t VAR_2,
                          void* VAR_3, size_t VAR_4,
                    const void* VAR_5, size_t VAR_6,
                          int VAR_7)
{
    int const VAR_8 = VAR_7 ? VAR_7 : FUNC_6(VAR_5, VAR_6);
    int const VAR_9 = VAR_8 < 0 ? -VAR_8 : VAR_8;
    compressFn VAR_10 = VAR_9 >= VAR_0 ? FUNC_1 : FUNC_2;
    int const VAR_11 = VAR_10((const char*)VAR_5, (char*)VAR_3, (int)VAR_6, (int)VAR_4, VAR_9);
    FUNC_0(VAR_11 == 0, "Compression error !");

    { int const VAR_12 = FUNC_3((const char*)VAR_3, (char*)VAR_1, VAR_11, (int)VAR_2);
        FUNC_0(VAR_12 < 0, "Decompression detected an error !");
        FUNC_0(VAR_12 != (int)VAR_6, "Decompression corruption error : wrong decompressed size !");
    }


    FUNC_4(VAR_2 >= VAR_6);
    { size_t const VAR_13 = FUNC_5(VAR_5, VAR_1, VAR_6);
        FUNC_0(VAR_13 != VAR_6,
                    "Silent decoding corruption, at pos %u !!!",
                    (unsigned)VAR_13);
    }

}
