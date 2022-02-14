
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char) ;
 int* VAR_2 ;

__attribute__((used)) static inline char
FUNC_3(char VAR_3)
{
 int VAR_4 = -1;

 if (VAR_3 > 0 && VAR_3 < 127)
  VAR_4 = VAR_2[(unsigned char) VAR_3];

 if (VAR_4 < 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid hexadecimal digit: \"%c\"", VAR_3)));

 return (char) VAR_4;
}
