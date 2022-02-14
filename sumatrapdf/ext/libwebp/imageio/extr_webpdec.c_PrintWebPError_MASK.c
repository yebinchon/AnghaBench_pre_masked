
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int W_CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int const*) ;
 int FUNC_1 (int ,char*,...) ;
 char** VAR_2 ;
 int VAR_3 ;

void FUNC_2(const char* const VAR_4, int VAR_5) {
  FUNC_0(VAR_3, "Decoding of %s failed.\n", (const W_CHAR*)VAR_4);
  FUNC_1(VAR_3, "Status: %d", VAR_5);
  if (VAR_5 >= VAR_1 && VAR_5 <= VAR_0) {
    FUNC_1(VAR_3, "(%s)", VAR_2[VAR_5]);
  }
  FUNC_1(VAR_3, "\n");
}
