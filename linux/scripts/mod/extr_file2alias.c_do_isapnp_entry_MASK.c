
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char,char,char,int,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(const char *VAR_3,
      void *VAR_4, char *VAR_5)
{
 FUNC_0(VAR_4, VAR_1, VAR_2);
 FUNC_0(VAR_4, VAR_1, VAR_0);
 FUNC_1(VAR_5, "pnp:d%c%c%c%x%x%x%x*",
  'A' + ((VAR_2 >> 2) & 0x3f) - 1,
  'A' + (((VAR_2 & 3) << 3) | ((VAR_2 >> 13) & 7)) - 1,
  'A' + ((VAR_2 >> 8) & 0x1f) - 1,
  (VAR_0 >> 4) & 0x0f, VAR_0 & 0x0f,
  (VAR_0 >> 12) & 0x0f, (VAR_0 >> 8) & 0x0f);
 return 1;
}
