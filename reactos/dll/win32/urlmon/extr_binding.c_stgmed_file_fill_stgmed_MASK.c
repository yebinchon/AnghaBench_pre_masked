
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int stgmed_obj_t ;
struct TYPE_7__ {TYPE_5__* buf; } ;
typedef TYPE_2__ stgmed_file_obj_t ;
struct TYPE_9__ {int IUnknown_iface; scalar_t__ cache_file; } ;
struct TYPE_6__ {scalar_t__ lpszFileName; } ;
struct TYPE_8__ {int * pUnkForRelease; TYPE_1__ u; int tymed; } ;
typedef TYPE_3__ STGMEDIUM ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static HRESULT FUNC_2(stgmed_obj_t *VAR_3, STGMEDIUM *VAR_4)
{
    stgmed_file_obj_t *VAR_5 = (stgmed_file_obj_t*)VAR_3;

    if(!VAR_5->buf->cache_file) {
        FUNC_0("cache_file not set\n");
        return VAR_0;
    }

    FUNC_1(VAR_5->buf);

    VAR_4->tymed = VAR_2;
    VAR_4->u.lpszFileName = VAR_5->buf->cache_file;
    VAR_4->pUnkForRelease = &VAR_5->buf->IUnknown_iface;

    return VAR_1;
}
