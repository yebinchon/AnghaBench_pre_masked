
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_char ;
typedef int ngx_mp4_atom_header_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int temporary; int * last; int * pos; } ;
struct TYPE_13__ {TYPE_1__* out; TYPE_5__ minf_atom_buf; } ;
typedef TYPE_3__ ngx_http_mp4_trak_t ;
struct TYPE_12__ {int log; } ;
struct TYPE_14__ {TYPE_2__ file; } ;
typedef TYPE_4__ ngx_http_mp4_file_t ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_11__ {TYPE_5__* buf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int * FUNC_2 (TYPE_4__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,char,char,char,float) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_mp4_file_t *VAR_3, uint64_t VAR_4)
{
    u_char *VAR_5;
    ngx_buf_t *VAR_6;
    ngx_http_mp4_trak_t *VAR_7;

    FUNC_1(VAR_1, VAR_3->file.log, 0, "process minf atom");

    VAR_5 = FUNC_2(VAR_3);
    FUNC_4(VAR_5, 'm', 'i', 'n', 'f');

    VAR_7 = FUNC_3(VAR_3);

    VAR_6 = &VAR_7->minf_atom_buf;
    VAR_6->temporary = 1;
    VAR_6->pos = VAR_5;
    VAR_6->last = VAR_5 + sizeof(ngx_mp4_atom_header_t);

    VAR_7->out[VAR_0].buf = VAR_6;

    return FUNC_0(VAR_3, VAR_2, VAR_4);
}
