
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uLongf ;
typedef int Bytef ;
typedef int BrotliDecoderResult ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,size_t*,unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_1 (unsigned char*,size_t,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (size_t) ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ,size_t,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char** VAR_7 ;
 unsigned char* FUNC_5 (unsigned char*,char) ;
 int FUNC_6 (int *,size_t*,int const*,int ) ;
 unsigned char* VAR_8 ;

void FUNC_7(void)
{
    if (VAR_6)
        return;

    FUNC_4("Uncompressing MIME type table: %u->%u bytes, %d entries",
                      VAR_1, VAR_3, VAR_2);
    uLongf VAR_9 = VAR_3;
    int VAR_10 =
        FUNC_6((Bytef *)VAR_8, &VAR_9,
                   (const Bytef *)VAR_5, VAR_1);
    if (VAR_10 != VAR_4) {
        FUNC_3("Error while uncompressing table: zlib error %d",
                             VAR_10);
    }


    if (VAR_9 != VAR_3) {
        FUNC_3("Expected uncompressed length %d, got %ld",
                             VAR_3, VAR_9);
    }

    unsigned char *VAR_11 = VAR_8 + 8 * VAR_2;
    for (size_t VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
        VAR_7[VAR_12] = (char *)VAR_11;
        VAR_11 = FUNC_5(VAR_11 + 1, '\0') + 1;
    }

    VAR_6 = 1;
}
