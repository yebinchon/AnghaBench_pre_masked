
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int,int ,char const*,void const*,int,void*,int,void*,int ,int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,char*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_7(char *VAR_6,
      const char *VAR_7,
      uint64_t VAR_8,
      const void *VAR_9,
      int VAR_10,
      void *VAR_11,
      int VAR_12,
      void *VAR_13,
      uint32_t VAR_14,
      uint32_t VAR_15)
{
 int VAR_16, VAR_17;

 if (VAR_5 > 0)
  FUNC_1(VAR_4, "write ELF image %s\n", VAR_6);

 VAR_17 = FUNC_3(VAR_6, VAR_0|VAR_1|VAR_2, 0644);
 if (VAR_17 == -1) {
  FUNC_4("cannot create jit ELF %s: %s\n", VAR_6, FUNC_5(VAR_3));
  return -1;
 }

 VAR_16 = FUNC_2(VAR_17, VAR_8, VAR_7, (const void *)VAR_9, VAR_10, VAR_11, VAR_12,
       VAR_13, VAR_14, VAR_15);

        FUNC_0(VAR_17);

        if (VAR_16)
                FUNC_6(VAR_6);

 return VAR_16;
}
