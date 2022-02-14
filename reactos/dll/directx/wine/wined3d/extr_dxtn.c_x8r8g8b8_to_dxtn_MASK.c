
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLenum ;
typedef unsigned int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 unsigned int* FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int,unsigned int,unsigned int,int *,int ,int *,unsigned int) ;

__attribute__((used)) static inline BOOL FUNC_6(const BYTE *VAR_2, BYTE *VAR_3, DWORD VAR_4,
        DWORD VAR_5, unsigned int VAR_6, unsigned int VAR_7, GLenum VAR_8, BOOL VAR_9)
{
    unsigned int VAR_10, VAR_11;
    DWORD VAR_12, *VAR_13;

    FUNC_4("Converting %ux%u pixels, pitches %u %u\n", VAR_6, VAR_7, VAR_4, VAR_5);

    VAR_13 = FUNC_2(FUNC_1(), 0, VAR_7 * VAR_6 * sizeof(DWORD));
    if (!VAR_13)
    {
        FUNC_0("Failed to allocate memory for conversion\n");
        return VAR_0;
    }

    for (VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11)
    {
        const DWORD *VAR_14 = (const DWORD *)(VAR_2 + VAR_11 * VAR_4);
        DWORD *VAR_15 = VAR_13 + VAR_11 * VAR_6;
        for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10)
        {
            VAR_12 = VAR_14[VAR_10];
            if (VAR_9)
            {
                VAR_15[VAR_10] = (VAR_12 & 0xff00ff00) | ((VAR_12 & 0xff) << 16) |
                              ((VAR_12 & 0xff0000) >> 16);
            }
            else
            {
                VAR_15[VAR_10] = 0xff000000 | ((VAR_12 & 0xff) << 16) |
                              (VAR_12 & 0xff00) | ((VAR_12 & 0xff0000) >> 16);
            }
        }
    }

    FUNC_5(4, VAR_6, VAR_7, (BYTE *)VAR_13, VAR_8, VAR_3, VAR_5);
    FUNC_3(FUNC_1(), 0, VAR_13);
    return VAR_1;
}
