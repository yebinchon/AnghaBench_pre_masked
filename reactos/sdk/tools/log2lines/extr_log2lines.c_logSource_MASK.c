
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr2; int file2; scalar_t__ nr1; int file1; } ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1)
{
    FUNC_1(VAR_1, VAR_0.file1, VAR_0.nr1);
    if (VAR_0.nr2)
    {
        FUNC_0(VAR_1, "| ---- [%u] ----\n", VAR_0.nr2);
        FUNC_1(VAR_1, VAR_0.file2, VAR_0.nr2);
    }
}
