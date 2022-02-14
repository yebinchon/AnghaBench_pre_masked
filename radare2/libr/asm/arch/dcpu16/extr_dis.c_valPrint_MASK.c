
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef short ut16 ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, ut8 VAR_2, ut16 VAR_3) {
 if (VAR_2 <= 0x07) return FUNC_0(VAR_1, "%s", VAR_0[VAR_2]);
 if (VAR_2 <= 0x0f) return FUNC_0(VAR_1, "[%s]", VAR_0[VAR_2 - 0x08]);
 if (VAR_2 <= 0x17) return FUNC_0(VAR_1, "[%s + %#hx]", VAR_0[VAR_2 - 0x10], VAR_3);
 if (VAR_2 <= 0x1d) return FUNC_0(VAR_1, "%s", VAR_0[VAR_2 - 0x18 + 0x08]);
 if (VAR_2 == 0x1e) return FUNC_0(VAR_1, "[%#hx]", VAR_3);
 if (VAR_2 == 0x1f) return FUNC_0(VAR_1, "%#hx", VAR_3);
 return FUNC_0(VAR_1, "%#hx", (short)(VAR_2 - 0x20));
}
