
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_char ;
typedef int ngx_mp4_atom_header_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_6__* buf; } ;
struct TYPE_15__ {int temporary; int * last; int * pos; } ;
struct TYPE_10__ {int data; } ;
struct TYPE_11__ {TYPE_1__ name; int log; } ;
struct TYPE_14__ {scalar_t__ buffer_end; size_t ftyp_size; size_t content_length; TYPE_4__ ftyp_atom; TYPE_6__ ftyp_atom_buf; TYPE_3__* request; TYPE_2__ file; } ;
typedef TYPE_5__ ngx_http_mp4_file_t ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_12__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int) ;
 int FUNC_2 (int *,scalar_t__,size_t) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,float,char,char,char) ;
 int * FUNC_7 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_mp4_file_t *VAR_4, uint64_t VAR_5)
{
    u_char *VAR_6;
    size_t VAR_7;
    ngx_buf_t *VAR_8;

    FUNC_0(VAR_1, VAR_4->file.log, 0, "mp4 ftyp atom");

    if (VAR_5 > 1024
        || FUNC_3(VAR_4) + (size_t) VAR_5 > VAR_4->buffer_end)
    {
        FUNC_1(VAR_2, VAR_4->file.log, 0,
                      "\"%s\" mp4 ftyp atom is too large:%uL",
                      VAR_4->file.name.data, VAR_5);
        return VAR_0;
    }

    VAR_7 = sizeof(ngx_mp4_atom_header_t) + (size_t) VAR_5;

    VAR_6 = FUNC_7(VAR_4->request->pool, VAR_7);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_5(VAR_6, VAR_7);
    FUNC_6(VAR_6, 'f', 't', 'y', 'p');





    FUNC_2(VAR_6 + sizeof(ngx_mp4_atom_header_t),
               FUNC_3(VAR_4), (size_t) VAR_5);

    VAR_8 = &VAR_4->ftyp_atom_buf;
    VAR_8->temporary = 1;
    VAR_8->pos = VAR_6;
    VAR_8->last = VAR_6 + VAR_7;

    VAR_4->ftyp_atom.buf = VAR_8;
    VAR_4->ftyp_size = VAR_7;
    VAR_4->content_length = VAR_7;

    FUNC_4(VAR_4, VAR_5);

    return VAR_3;
}
