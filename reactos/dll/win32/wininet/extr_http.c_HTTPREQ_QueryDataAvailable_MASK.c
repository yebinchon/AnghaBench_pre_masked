
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_16__ {scalar_t__ dwError; } ;
typedef TYPE_4__ object_header_t ;
struct TYPE_12__ {int dwContext; } ;
struct TYPE_17__ {int read_size; TYPE_10__ hdr; int read_section; TYPE_3__* session; } ;
typedef TYPE_5__ http_request_t ;
typedef int avail ;
struct TYPE_15__ {TYPE_2__* appInfo; } ;
struct TYPE_13__ {int dwFlags; } ;
struct TYPE_14__ {TYPE_1__ hdr; } ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_10__*,int ,int ,int*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,TYPE_5__*,int*,int,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_10 ;
 int FUNC_6 (TYPE_5__*,int *,int ,int ,int*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int,int*) ;

__attribute__((used)) static DWORD FUNC_9(object_header_t *VAR_11, DWORD *VAR_12, DWORD VAR_13, DWORD_PTR VAR_14)
{
    http_request_t *VAR_15 = (http_request_t*)VAR_11;
    DWORD VAR_16 = VAR_1, VAR_17 = 0, VAR_18 = VAR_1;
    BOOL VAR_19, VAR_20 = VAR_2;

    FUNC_4("(%p %p %x %lx)\n", VAR_15, VAR_12, VAR_13, VAR_14);

    if (VAR_13 & ~(VAR_7|VAR_8))
        FUNC_1("these dwFlags aren't implemented: 0x%x\n", VAR_13 & ~(VAR_7|VAR_8));

    *VAR_12 = 0;
    VAR_19 = !(VAR_15->session->appInfo->hdr.dwFlags & VAR_3);

    if(VAR_19 || FUNC_5(&VAR_15->read_section)) {
        if(VAR_19)
            FUNC_0(&VAR_15->read_section);
        if(VAR_11->dwError == VAR_1)
            VAR_11->dwError = VAR_4;
        else if(VAR_11->dwError == VAR_4)
            VAR_11->dwError = VAR_0;

        VAR_17 = VAR_15->read_size;

        if(!VAR_17 && !FUNC_7(VAR_15)) {
            FUNC_3(&VAR_15->read_section);
            FUNC_2(&VAR_15->hdr, VAR_15->hdr.dwContext, VAR_5, ((void*)0), 0);
            FUNC_0( &VAR_15->read_section );
            VAR_20 = VAR_9;

            VAR_16 = FUNC_8(VAR_15, VAR_19, &VAR_17);
        }

        if(VAR_11->dwError == VAR_4)
            VAR_11->dwError = VAR_1;
        else
            VAR_18 = VAR_11->dwError;

        FUNC_3( &VAR_15->read_section );
    }else {
        VAR_16 = VAR_10;
    }

    if(VAR_16 == VAR_10)
        return FUNC_6(VAR_15, ((void*)0), 0, 0, VAR_12);

    if (VAR_16 != VAR_1)
        return VAR_16;

    *VAR_12 = VAR_17;
    if(VAR_20)
        FUNC_2(&VAR_15->hdr, VAR_15->hdr.dwContext, VAR_6,
                &VAR_17, sizeof(VAR_17));
    return VAR_18;
}
