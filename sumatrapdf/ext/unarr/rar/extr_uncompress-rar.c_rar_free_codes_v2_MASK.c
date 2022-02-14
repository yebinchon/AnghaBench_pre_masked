
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_archive_rar_uncomp_v2 {int * audiocode; int lengthcode; int offsetcode; int maincode; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ar_archive_rar_uncomp_v2 *VAR_0)
{
    int VAR_1;
    FUNC_0(&VAR_0->maincode);
    FUNC_0(&VAR_0->offsetcode);
    FUNC_0(&VAR_0->lengthcode);
    for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
        FUNC_0(&VAR_0->audiocode[VAR_1]);
}
