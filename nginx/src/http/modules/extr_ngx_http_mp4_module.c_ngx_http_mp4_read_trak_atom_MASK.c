
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ uint64_t ;
typedef int u_char ;
typedef scalar_t__ off_t ;
typedef int ngx_mp4_atom_header_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int temporary; int * last; int * pos; } ;
struct TYPE_15__ {TYPE_1__* out; TYPE_5__ trak_atom_buf; } ;
typedef TYPE_3__ ngx_http_mp4_trak_t ;
struct TYPE_12__ {int nelts; } ;
struct TYPE_14__ {int log; } ;
struct TYPE_16__ {scalar_t__ offset; int * buffer_pos; TYPE_11__ trak; TYPE_2__ file; } ;
typedef TYPE_4__ ngx_http_mp4_file_t ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_13__ {TYPE_5__* buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_0 (TYPE_11__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int * FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,char,char,char,char) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_mp4_file_t *VAR_6, uint64_t VAR_7)
{
    u_char *VAR_8, *VAR_9;
    off_t VAR_10;
    ngx_int_t VAR_11;
    ngx_buf_t *VAR_12;
    ngx_http_mp4_trak_t *VAR_13;

    FUNC_2(VAR_3, VAR_6->file.log, 0, "mp4 trak atom");

    VAR_13 = FUNC_0(&VAR_6->trak);
    if (VAR_13 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_4(VAR_13, sizeof(ngx_http_mp4_trak_t));

    VAR_8 = FUNC_5(VAR_6);
    FUNC_6(VAR_8, 't', 'r', 'a', 'k');

    VAR_12 = &VAR_13->trak_atom_buf;
    VAR_12->temporary = 1;
    VAR_12->pos = VAR_8;
    VAR_12->last = VAR_8 + sizeof(ngx_mp4_atom_header_t);

    VAR_13->out[VAR_2].buf = VAR_12;

    VAR_9 = VAR_6->buffer_pos + (size_t) VAR_7;
    VAR_10 = VAR_6->offset + VAR_7;

    VAR_11 = FUNC_1(VAR_6, VAR_5, VAR_7);

    FUNC_3(VAR_3, VAR_6->file.log, 0,
                   "mp4 trak atom: %i", VAR_11);

    if (VAR_11 == VAR_0) {

        FUNC_4(VAR_13, sizeof(ngx_http_mp4_trak_t));
        VAR_6->trak.nelts--;
        VAR_6->buffer_pos = VAR_9;
        VAR_6->offset = VAR_10;
        return VAR_4;
    }

    return VAR_11;
}
