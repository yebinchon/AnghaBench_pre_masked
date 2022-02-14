
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle_wrapper {scalar_t__ size; int lock; scalar_t__ hglobal; } ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ HGLOBAL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*,void const*,scalar_t__) ;

__attribute__((used)) static ULONG FUNC_7(struct handle_wrapper *VAR_1, ULONG *VAR_2, const void *VAR_3, ULONG VAR_4)
{
    void *VAR_5;

    if (!VAR_4)
        return 0;

    FUNC_0(&VAR_1->lock);

    if (*VAR_2 + VAR_4 > VAR_1->size)
    {
        HGLOBAL VAR_6 = FUNC_2(VAR_1->hglobal, *VAR_2 + VAR_4, VAR_0);
        if (VAR_6)
        {
            VAR_1->hglobal = VAR_6;
            VAR_1->size = *VAR_2 + VAR_4;
        }
        else
        {
            VAR_4 = 0;
            goto done;
        }
    }

    VAR_5 = FUNC_1(VAR_1->hglobal);
    if (VAR_5)
    {
        FUNC_6((char *)VAR_5 + *VAR_2, VAR_3, VAR_4);
        *VAR_2 += VAR_4;
        FUNC_3(VAR_1->hglobal);
    }
    else
    {
        FUNC_5("write to invalid hglobal %p\n", VAR_1->hglobal);

    }

done:
    FUNC_4(&VAR_1->lock);
    return VAR_4;
}
