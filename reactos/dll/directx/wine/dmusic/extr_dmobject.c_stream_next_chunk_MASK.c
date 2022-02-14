
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chunk_entry {scalar_t__ id; } ;
typedef int IStream ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,struct chunk_entry*) ;
 int FUNC_2 (int *,struct chunk_entry*) ;

HRESULT FUNC_3(IStream *VAR_0, struct chunk_entry *VAR_1)
{
    HRESULT VAR_2;

    if (VAR_1->id) {
        VAR_2 = FUNC_2(VAR_0, VAR_1);
        if (FUNC_0(VAR_2))
            return VAR_2;
    }

    return FUNC_1(VAR_0, VAR_1);
}
