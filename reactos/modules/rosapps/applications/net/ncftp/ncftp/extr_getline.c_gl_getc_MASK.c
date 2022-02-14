
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(void)

{
    int VAR_3;

    char VAR_4;



    VAR_4 = '\0';
    while ((VAR_3 = (int) FUNC_3(0, &VAR_4, 1)) == -1) {
 if (VAR_2 != VAR_0)
     break;
    }
    if (VAR_3 != (-1))
     VAR_3 = (int) VAR_4;
    return VAR_3;
}
