
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle_wrapper {scalar_t__ size; int lock; int hglobal; } ;
typedef scalar_t__ ULONG ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (void*,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static ULONG FUNC_7(struct handle_wrapper *VAR_0, ULONG *VAR_1, void *VAR_2, ULONG VAR_3)
{
    void *VAR_4;

    FUNC_0(&VAR_0->lock);

    if (*VAR_1 < VAR_0->size)
        VAR_3 = FUNC_6(VAR_0->size - *VAR_1, VAR_3);
    else
        VAR_3 = 0;

    VAR_4 = FUNC_1(VAR_0->hglobal);
    if (VAR_4)
    {
        FUNC_5(VAR_2, (char *)VAR_4 + *VAR_1, VAR_3);
        *VAR_1 += VAR_3;
        FUNC_2(VAR_0->hglobal);
    }
    else
    {
        FUNC_4("read from invalid hglobal %p\n", VAR_0->hglobal);
        VAR_3 = 0;
    }

    FUNC_3(&VAR_0->lock);
    return VAR_3;
}
