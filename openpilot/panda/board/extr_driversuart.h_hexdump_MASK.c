
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const) ;
 int FUNC_1 (char*) ;

void FUNC_2(const void *VAR_0, int VAR_1) {
  if (VAR_0 != ((void*)0)) {
    for (int VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
      if ((VAR_2 != 0) && ((VAR_2 & 0xf) == 0)) FUNC_1("\n");
      FUNC_0(((const unsigned char*)VAR_0)[VAR_2]);
      FUNC_1(" ");
    }
  }
  FUNC_1("\n");
}
