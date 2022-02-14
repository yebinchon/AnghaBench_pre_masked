
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int read ;
struct TYPE_15__ {scalar_t__ dwError; } ;
typedef TYPE_4__ object_header_t ;
struct TYPE_17__ {int dwContext; } ;
struct TYPE_16__ {int read_size; int read_buf; int read_pos; TYPE_9__ hdr; int read_section; TYPE_3__* session; } ;
typedef TYPE_5__ http_request_t ;
struct TYPE_14__ {TYPE_2__* appInfo; } ;
struct TYPE_12__ {int dwFlags; } ;
struct TYPE_13__ {TYPE_1__ hdr; } ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_5__*,char*,int,int*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_9__*,int ,int ,int*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,TYPE_5__*,void*,int,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_10 ;
 int FUNC_7 (TYPE_5__*,void*,int,int,int*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (void*,int,int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static DWORD FUNC_11(object_header_t *VAR_11, void *VAR_12, DWORD VAR_13, DWORD *VAR_14,
        DWORD VAR_15, DWORD_PTR VAR_16)
{
    http_request_t *VAR_17 = (http_request_t*)VAR_11;
    DWORD VAR_18 = VAR_1, VAR_19 = 0, VAR_20, VAR_21 = VAR_1;
    BOOL VAR_22, VAR_23 = VAR_2;

    FUNC_5("(%p %p %u %x)\n", VAR_17, VAR_12, VAR_13, VAR_15);

    if (VAR_15 & ~(VAR_7|VAR_8))
        FUNC_1("these dwFlags aren't implemented: 0x%x\n", VAR_15 & ~(VAR_7|VAR_8));

    VAR_22 = !(VAR_17->session->appInfo->hdr.dwFlags & VAR_3);

    if(VAR_22 || FUNC_6(&VAR_17->read_section)) {
        if(VAR_22)
            FUNC_0(&VAR_17->read_section);
        if(VAR_11->dwError == VAR_1)
            VAR_11->dwError = VAR_4;
        else if(VAR_11->dwError == VAR_4)
            VAR_11->dwError = VAR_0;

        if(VAR_17->read_size) {
            VAR_19 = FUNC_10(VAR_13, VAR_17->read_size);
            FUNC_9(VAR_12, VAR_17->read_buf + VAR_17->read_pos, VAR_19);
            VAR_17->read_size -= VAR_19;
            VAR_17->read_pos += VAR_19;
        }

        if(VAR_19 < VAR_13 && (!VAR_19 || !(VAR_15 & VAR_8)) && !FUNC_8(VAR_17)) {
            FUNC_4(&VAR_17->read_section);
            FUNC_3(&VAR_17->hdr, VAR_17->hdr.dwContext, VAR_5, ((void*)0), 0);
            FUNC_0( &VAR_17->read_section );
            VAR_23 = VAR_9;

            while(VAR_19 < VAR_13) {
                VAR_18 = FUNC_2(VAR_17, (char*)VAR_12+VAR_19, VAR_13-VAR_19, &VAR_20, VAR_22);
                VAR_19 += VAR_20;
                if (VAR_18 != VAR_1 || !VAR_20)
                    break;
            }
        }

        if(VAR_11->dwError == VAR_4)
            VAR_11->dwError = VAR_1;
        else
            VAR_21 = VAR_11->dwError;

        FUNC_4( &VAR_17->read_section );
    }else {
        VAR_18 = VAR_10;
    }

    if(VAR_18 == VAR_10) {
        if(!(VAR_15 & VAR_8))
            return FUNC_7(VAR_17, VAR_12, VAR_13, VAR_19, VAR_14);
        if(!VAR_19)
            return FUNC_7(VAR_17, ((void*)0), 0, 0, ((void*)0));
        VAR_18 = VAR_1;
    }

    *VAR_14 = VAR_19;
    if (VAR_18 != VAR_1)
        return VAR_18;

    if(VAR_23)
        FUNC_3(&VAR_17->hdr, VAR_17->hdr.dwContext, VAR_6,
                &VAR_19, sizeof(VAR_19));
    return VAR_21;
}
