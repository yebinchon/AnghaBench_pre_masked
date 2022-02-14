
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char*) ;
 char** VAR_0 ;
 char** FUNC_2 (int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_0 = FUNC_2(sizeof(*VAR_0) * VAR_1);
 FUNC_0("failed to alloc dsos array", VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  char *VAR_4;

  VAR_4 = FUNC_3(VAR_2);
  FUNC_0("failed to get dso file", VAR_4);

  VAR_0[VAR_3] = FUNC_1(VAR_4);
  FUNC_0("failed to get dso", VAR_0[VAR_3]);
 }

 return 0;
}
