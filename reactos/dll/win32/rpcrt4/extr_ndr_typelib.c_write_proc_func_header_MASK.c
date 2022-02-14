
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_7__ {int vt; } ;
struct TYPE_6__ {size_t cParams; TYPE_1__* lprgelemdescParam; } ;
struct TYPE_5__ {TYPE_4__ tdesc; } ;
typedef int ITypeInfo ;
typedef TYPE_2__ FUNCDESC ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*,size_t,int) ;
 int FUNC_1 (unsigned char*,size_t,unsigned short) ;
 unsigned char FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(ITypeInfo *VAR_5, FUNCDESC *VAR_6,
        WORD VAR_7, unsigned char *VAR_8, size_t *VAR_9)
{
    unsigned short VAR_10 = 2 * sizeof(void *);

    unsigned short VAR_11 = 0;
    unsigned char VAR_12;

    WORD VAR_13;

    FUNC_0 (VAR_8, *VAR_9, VAR_0);
    FUNC_0 (VAR_8, *VAR_9, VAR_3 | VAR_4);
    FUNC_1(VAR_8, *VAR_9, VAR_7);
    for (VAR_13 = 0; VAR_13 < VAR_6->cParams; VAR_13++)
        VAR_10 += FUNC_3(VAR_5, &VAR_6->lprgelemdescParam[VAR_13].tdesc);
    FUNC_1(VAR_8, *VAR_9, VAR_10);

    FUNC_1(VAR_8, *VAR_9, 0);
    FUNC_1(VAR_8, *VAR_9, 0);

    FUNC_0 (VAR_8, *VAR_9, 0x47);



    FUNC_0 (VAR_8, *VAR_9, VAR_6->cParams + 1);

    FUNC_0 (VAR_8, *VAR_9, 10);
    FUNC_0 (VAR_8, *VAR_9, 0);
    FUNC_1(VAR_8, *VAR_9, 0);
    FUNC_1(VAR_8, *VAR_9, 0);
    FUNC_1(VAR_8, *VAR_9, 0);
    for (VAR_13 = 0; VAR_13 < VAR_6->cParams && VAR_13 < 3; VAR_13++)
    {
        VAR_12 = FUNC_2(VAR_6->lprgelemdescParam[VAR_13].tdesc.vt);
        if (VAR_12 == VAR_2)
            VAR_11 |= (1 << ((VAR_13 + 1) * 2));
        else if (VAR_12 == VAR_1)
            VAR_11 |= (2 << ((VAR_13 + 1) * 2));
    }
    FUNC_1(VAR_8, *VAR_9, VAR_11);

}
