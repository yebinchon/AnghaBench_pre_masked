
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct BlobReader {scalar_t__ current; TYPE_1__* blob; } ;
struct TYPE_2__ {scalar_t__ cbData; scalar_t__ pbData; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_2(void *VAR_2, void *VAR_3, DWORD VAR_4,
 DWORD *VAR_5)
{
    struct BlobReader *VAR_6 = VAR_2;
    BOOL VAR_7;

    if (VAR_6->current < VAR_6->blob->cbData)
    {
        *VAR_5 = FUNC_1(VAR_4, VAR_6->blob->cbData - VAR_6->current);
        FUNC_0(VAR_3, VAR_6->blob->pbData + VAR_6->current, *VAR_5);
        VAR_6->current += *VAR_5;
        VAR_7 = VAR_1;
    }
    else if (VAR_6->current == VAR_6->blob->cbData)
    {
        *VAR_5 = 0;
        VAR_7 = VAR_1;
    }
    else
        VAR_7 = VAR_0;
    return VAR_7;
}
