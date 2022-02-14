
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z_crc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,unsigned long*,int const*) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned long*,int const*,int,int) ;

__attribute__((used)) static int FUNC_5(const char* VAR_2,
                     unsigned char* VAR_3,
                     int VAR_4,
                     unsigned long* VAR_5,
                     const z_crc_t* VAR_6,
                     unsigned long VAR_7)
{
    int VAR_8;
    int VAR_9;
    int VAR_10;
    unsigned char VAR_11[VAR_0-2];
    static unsigned VAR_12 = 0;

    if (VAR_4<VAR_0)
      return 0;





    if (++VAR_12 == 1)
    {
        FUNC_2((unsigned)(FUNC_3(((void*)0)) ^ VAR_1));
    }
    FUNC_0(VAR_2, VAR_5, VAR_6);
    for (VAR_8 = 0; VAR_8 < VAR_0-2; VAR_8++)
    {
        VAR_10 = (FUNC_1() >> 7) & 0xff;
        VAR_11[VAR_8] = (unsigned char)FUNC_4(VAR_5, VAR_6, VAR_10, VAR_9);
    }

    FUNC_0(VAR_2, VAR_5, VAR_6);
    for (VAR_8 = 0; VAR_8 < VAR_0-2; VAR_8++)
    {
        VAR_3[VAR_8] = (unsigned char)FUNC_4(VAR_5, VAR_6, VAR_11[VAR_8], VAR_9);
    }
    VAR_3[VAR_8++] = (unsigned char)FUNC_4(VAR_5, VAR_6, (int)(VAR_7 >> 16) & 0xff, VAR_9);
    VAR_3[VAR_8++] = (unsigned char)FUNC_4(VAR_5, VAR_6, (int)(VAR_7 >> 24) & 0xff, VAR_9);
    return VAR_8;
}
