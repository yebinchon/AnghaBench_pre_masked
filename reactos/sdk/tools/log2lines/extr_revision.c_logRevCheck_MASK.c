
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file2; int file1; scalar_t__ nr2; } ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1)
{
    int VAR_2 = 0;

    VAR_2 = (VAR_0.nr2 && FUNC_1(VAR_0.file1, VAR_0.file2) != 0);
    FUNC_0(VAR_1, VAR_0.file1, VAR_2);
    if (VAR_2)
    {
        FUNC_0(VAR_1, VAR_0.file2, VAR_2);
    }
}
