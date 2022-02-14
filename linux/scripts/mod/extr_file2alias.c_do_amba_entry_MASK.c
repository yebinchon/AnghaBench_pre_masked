
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char**,int,int) ;
 int FUNC_2 (char*,char const*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3,
    void *VAR_4, char *VAR_5)
{
 unsigned int VAR_6;
 char *VAR_7 = VAR_5;
 FUNC_0(VAR_4, VAR_0, VAR_1);
 FUNC_0(VAR_4, VAR_0, VAR_2);

 if ((VAR_1 & VAR_2) != VAR_1)
  FUNC_2("%s: Masked-off bit(s) of AMBA device ID are non-zero: "
        "id=0x%08X, mask=0x%08X.  Please fix this driver.\n",
        VAR_3, VAR_1, VAR_2);

 VAR_7 += FUNC_3(VAR_5, "amba:d");
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  FUNC_1(&VAR_7,
       (VAR_1 >> (4 * (7 - VAR_6))) & 0xf,
       (VAR_2 >> (4 * (7 - VAR_6))) & 0xf);

 return 1;
}
