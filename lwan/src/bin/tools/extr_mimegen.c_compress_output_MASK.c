
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uLong ;
struct output {scalar_t__ used; scalar_t__ ptr; } ;
typedef int ZopfliOptions ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,unsigned char const*,size_t*,unsigned char*) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 size_t FUNC_2 (char*,size_t,scalar_t__,scalar_t__,int ) ;
 size_t FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 () ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *,int ,unsigned char const*,scalar_t__,unsigned char**,size_t*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,size_t*,int const*,scalar_t__,int) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (size_t) ;
 int VAR_6 ;

__attribute__((used)) static char *FUNC_14(const struct output *VAR_7, size_t *VAR_8)
{
    char *VAR_9;
    *VAR_8 = FUNC_9((uLong)VAR_7->used);
    VAR_9 = FUNC_13(*VAR_8);
    if (!VAR_9) {
        FUNC_11(VAR_6, "Could not allocate memory for compressed data\n");
        FUNC_10(1);
    }
    if (FUNC_8((Bytef *)VAR_9, VAR_8, (const Bytef *)VAR_7->ptr,
                  VAR_7->used, 9) != VAR_5) {
        FUNC_11(VAR_6, "Could not compress data with zlib\n");
        FUNC_10(1);
    }

    if (!*VAR_8) {
        FUNC_12(VAR_9);
        return ((void*)0);
    }

    return VAR_9;
}
