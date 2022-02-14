
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*) ;
 char* FUNC_4 (scalar_t__) ;

int FUNC_5(char *VAR_2, bool VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 < 0) {
  if (!VAR_3)
   FUNC_3("bpf obj get (%s): %s", VAR_2,
         VAR_1 == VAR_0 && !FUNC_2(FUNC_1(VAR_2)) ?
       "directory not in bpf file system (bpffs)" :
       FUNC_4(VAR_1));
  return -1;
 }

 return VAR_4;
}
