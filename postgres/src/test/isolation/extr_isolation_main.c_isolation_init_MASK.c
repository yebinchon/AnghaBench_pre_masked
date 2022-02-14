
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (int ,char*,size_t) ;

__attribute__((used)) static void
FUNC_5(int VAR_4, char **VAR_5)
{
 size_t VAR_6;
 VAR_6 = FUNC_4(VAR_2, VAR_5[0], VAR_0);
 if (VAR_6 >= VAR_0)
 {
  FUNC_3(VAR_3, FUNC_0("path for isolationtester executable is longer than %d bytes\n"),
    (int) (VAR_0 - 1));
  FUNC_2(2);
 }


 FUNC_1(&VAR_1, "isolation_regression");
}
