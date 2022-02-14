
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint64 ;


 unsigned char FUNC_0 (int) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2)
{
 int VAR_3,
    VAR_4,
    VAR_5,
    VAR_6;
 uint64 VAR_7,
    VAR_8;

 VAR_6 = FUNC_1(VAR_2);
 VAR_5 = 50;
 if (VAR_5 > VAR_6)
  VAR_5 = VAR_6;

 VAR_7 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3)
 {
  VAR_7 = VAR_7 + (unsigned char) VAR_2[VAR_3];

  VAR_7 = VAR_7 << 13;
  VAR_8 = (VAR_7 & FUNC_0(0x1fff00000000)) >> 32;
  VAR_7 = (VAR_7 & FUNC_0(0xffffffff)) | VAR_8;
 }

 VAR_4 = VAR_7 % VAR_1;


 return VAR_4 * VAR_0 + 1;
}
