
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int QuadPart; } ;
struct chunk_entry {TYPE_1__ offset; } ;
struct TYPE_5__ {int QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;


 int FUNC_0 (int *,TYPE_2__,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline HRESULT FUNC_1(IStream *VAR_1, const struct chunk_entry *VAR_2)
{
    LARGE_INTEGER VAR_3;

    VAR_3.QuadPart = VAR_2->offset.QuadPart;

    return FUNC_0(VAR_1, VAR_3, VAR_0, ((void*)0));
}
