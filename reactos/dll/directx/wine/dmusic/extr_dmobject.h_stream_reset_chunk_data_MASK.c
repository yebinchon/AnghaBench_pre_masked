
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ QuadPart; } ;
struct chunk_entry {scalar_t__ id; TYPE_1__ offset; } ;
struct TYPE_5__ {scalar_t__ QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;
typedef int FOURCC ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static inline HRESULT FUNC_1(IStream *VAR_3, const struct chunk_entry *VAR_4)
{
    LARGE_INTEGER VAR_5;

    VAR_5.QuadPart = VAR_4->offset.QuadPart + sizeof(FOURCC) + sizeof(DWORD);
    if (VAR_4->id == VAR_1 || VAR_4->id == VAR_0)
        VAR_5.QuadPart += sizeof(FOURCC);

    return FUNC_0(VAR_3, VAR_5, VAR_2, ((void*)0));
}
