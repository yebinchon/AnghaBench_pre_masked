
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle_wrapper {scalar_t__ size; int lock; scalar_t__ hglobal; } ;
typedef scalar_t__ ULONG ;
typedef int HRESULT ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3(struct handle_wrapper *VAR_3, ULONG VAR_4)
{
    HRESULT VAR_5 = VAR_2;

    FUNC_0(&VAR_3->lock);

    if (VAR_3->size != VAR_4)
    {
        HGLOBAL VAR_6 = FUNC_1(VAR_3->hglobal, VAR_4, VAR_1);
        if (VAR_6)
        {
            VAR_3->hglobal = VAR_6;
            VAR_3->size = VAR_4;
        }
        else
            VAR_5 = VAR_0;
    }

    FUNC_2(&VAR_3->lock);
    return VAR_5;
}
