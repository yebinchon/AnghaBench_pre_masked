
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int QuadPart; } ;
struct chunk_entry {int size; TYPE_1__ offset; } ;
typedef int ULONGLONG ;
struct TYPE_5__ {int QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__,int ,int *) ;
 int VAR_1 ;

HRESULT FUNC_1(IStream *VAR_2, struct chunk_entry *VAR_3)
{
    LARGE_INTEGER VAR_4;

    VAR_4.QuadPart = (VAR_3->offset.QuadPart + VAR_0 + VAR_3->size + 1) & ~(ULONGLONG)1;

    return FUNC_0(VAR_2, VAR_4, VAR_1, ((void*)0));
}
