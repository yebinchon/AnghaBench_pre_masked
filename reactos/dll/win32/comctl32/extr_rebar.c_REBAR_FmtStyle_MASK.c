
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef size_t INT ;
typedef scalar_t__ CHAR ;


 char** VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (scalar_t__*,char*) ;

__attribute__((used)) static CHAR *
FUNC_1( UINT VAR_2)
{
    INT VAR_3 = 0;

    *VAR_1 = 0;
    while (VAR_0[VAR_3]) {
 if (VAR_2 & (1<<VAR_3)) {
     if (*VAR_1 != 0) FUNC_0(VAR_1, " | ");
     FUNC_0(VAR_1, VAR_0[VAR_3]);
 }
 VAR_3++;
    }
    return VAR_1;
}
