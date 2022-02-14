
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const,unsigned char const) ;
 scalar_t__ FUNC_1 (unsigned char const,unsigned char const) ;
 unsigned char* FUNC_2 (int) ;
 unsigned char* VAR_0 ;
 size_t FUNC_3 (int ) ;
 int VAR_1 ;
 unsigned char* FUNC_4 (int *,int) ;
 size_t FUNC_5 (char*,int ) ;

__attribute__((used)) static char *FUNC_6(const unsigned char *VAR_2, int VAR_3, int VAR_4)
{
    const unsigned char *VAR_5;
    unsigned char *VAR_6, *VAR_7;
    int VAR_8, VAR_9;
    size_t VAR_10;

    for (VAR_8 = 0, VAR_5 = VAR_2; (VAR_5 - VAR_2) / 2 < VAR_3 && (VAR_5[0] || VAR_5[1]);
  VAR_5 += 2) {
 if ((VAR_10 = FUNC_3(FUNC_0(VAR_5[0], VAR_5[1]))) != (size_t) - 1)
     VAR_8 += VAR_10;
 else if (FUNC_1(VAR_5[0], VAR_5[1]))
     ++VAR_8;
 else
     VAR_8 += 4;
    }
    VAR_7 = VAR_6 = VAR_4 ? FUNC_4(&VAR_1, VAR_8 + 1) : FUNC_2(VAR_8 + 1);

    for (VAR_5 = VAR_2; (VAR_5 - VAR_2) / 2 < VAR_3 && (VAR_5[0] || VAR_5[1]); VAR_5 += 2) {
 if ((VAR_10 =
      FUNC_5((char *)VAR_7, FUNC_0(VAR_5[0], VAR_5[1]))) != (size_t) - 1)
     VAR_7 += VAR_10;
 else if (FUNC_1(VAR_5[0], VAR_5[1]))
     *VAR_7++ = VAR_5[0];
 else {

     *VAR_7++ = ':';
     VAR_9 = (VAR_5[1] << 8) + VAR_5[0];
     VAR_7[2] = VAR_0[VAR_9 & 0x3f];
     VAR_9 >>= 6;
     VAR_7[1] = VAR_0[VAR_9 & 0x3f];
     VAR_9 >>= 6;
     VAR_7[0] = VAR_0[VAR_9 & 0x3f];
     VAR_7 += 3;
 }
    }
    *VAR_7 = 0;

    return (char *)VAR_6;
}
