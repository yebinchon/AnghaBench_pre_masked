
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct FILELIST {struct FILELIST* next; } ;
struct TYPE_3__ {struct FILELIST* FileList; } ;
typedef TYPE_1__ SESSION ;


 int FUNC_0 (struct FILELIST*) ;

__attribute__((used)) static void FUNC_1(SESSION* VAR_0)
{
    struct FILELIST *VAR_1, *VAR_2 = VAR_0->FileList;

    while (VAR_2)
    {
        VAR_1 = VAR_2->next;
        FUNC_0(VAR_2);
        VAR_2 = VAR_1;
    }
}
