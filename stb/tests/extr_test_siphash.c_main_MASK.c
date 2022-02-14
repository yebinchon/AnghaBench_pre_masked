
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 size_t FUNC_1 (unsigned char*,int,int ) ;

int FUNC_2(int VAR_0, char **VAR_1)
{
  unsigned char VAR_2[64];
  int VAR_3,VAR_4;
  for (VAR_3=0; VAR_3 < 64; ++VAR_3) VAR_2[VAR_3] = VAR_3;
  for (VAR_3=0; VAR_3 < 64; ++VAR_3) {
    size_t VAR_5 = FUNC_1(VAR_2, VAR_3, 0);
    FUNC_0("  { ");
    for (VAR_4=0; VAR_4 < 8; ++VAR_4)
      FUNC_0("0x%02x, ", (unsigned char) ((VAR_5 >> (VAR_4*8)) & 255));
    FUNC_0(" },\n");
  }
  return 0;
}
