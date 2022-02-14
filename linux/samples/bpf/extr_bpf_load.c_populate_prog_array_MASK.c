
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int*,int*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2), VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_4, &VAR_3, VAR_0);
 if (VAR_5 < 0) {
  FUNC_2("failed to store prog_fd in prog_array\n");
  return -1;
 }
 return 0;
}
