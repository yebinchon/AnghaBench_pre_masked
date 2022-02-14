
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* kwdata; void* kwbtree; } ;
typedef TYPE_1__ HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*,int **,int **) ;
 void* FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,void*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (void*,int *,unsigned int) ;

__attribute__((used)) static BOOL FUNC_6(HLPFILE *VAR_2)
{
    BYTE *VAR_3, *VAR_4;
    unsigned VAR_5;

    if (!FUNC_1(VAR_2, "|KWBTREE", &VAR_3, &VAR_4)) return VAR_0;
    VAR_5 = VAR_4 - VAR_3;
    VAR_2->kwbtree = FUNC_2(FUNC_0(), 0, VAR_5);
    if (!VAR_2->kwbtree) return VAR_0;
    FUNC_5(VAR_2->kwbtree, VAR_3, VAR_5);

    if (!FUNC_1(VAR_2, "|KWDATA", &VAR_3, &VAR_4))
    {
        FUNC_4("corrupted help file: kwbtree present but kwdata absent\n");
        FUNC_3(FUNC_0(), 0, VAR_2->kwbtree);
        return VAR_0;
    }
    VAR_5 = VAR_4 - VAR_3;
    VAR_2->kwdata = FUNC_2(FUNC_0(), 0, VAR_5);
    if (!VAR_2->kwdata)
    {
        FUNC_3(FUNC_0(), 0, VAR_2->kwdata);
        return VAR_0;
    }
    FUNC_5(VAR_2->kwdata, VAR_3, VAR_5);

    return VAR_1;
}
