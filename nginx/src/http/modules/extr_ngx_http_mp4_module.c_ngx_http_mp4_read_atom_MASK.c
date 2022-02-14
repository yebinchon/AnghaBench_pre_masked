
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef scalar_t__ off_t ;
typedef size_t ngx_uint_t ;
typedef int ngx_mp4_atom_header_t ;
typedef int ngx_mp4_atom_header64_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int data; } ;
struct TYPE_11__ {TYPE_1__ name; int log; } ;
struct TYPE_12__ {int offset; TYPE_2__ file; int * buffer_pos; } ;
typedef TYPE_3__ ngx_http_mp4_file_t ;
struct TYPE_13__ {scalar_t__ (* handler ) (TYPE_3__*,int) ;scalar_t__ name; } ;
typedef TYPE_4__ ngx_http_mp4_atom_handler_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,size_t,int *,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_mp4_file_t *VAR_5,
    ngx_http_mp4_atom_handler_t *VAR_6, uint64_t VAR_7)
{
    off_t VAR_8;
    size_t VAR_9;
    u_char *VAR_10, *VAR_11;
    uint64_t VAR_12;
    ngx_int_t VAR_13;
    ngx_uint_t VAR_14;

    VAR_8 = VAR_5->offset + VAR_7;

    while (VAR_5->offset < VAR_8) {

        if (FUNC_0(VAR_5, sizeof(uint32_t)) != VAR_4) {
            return VAR_0;
        }

        VAR_10 = VAR_5->buffer_pos;
        VAR_12 = FUNC_5(VAR_10);
        VAR_9 = sizeof(ngx_mp4_atom_header_t);

        if (VAR_12 == 0) {
            FUNC_1(VAR_1, VAR_5->file.log, 0,
                           "mp4 atom end");
            return VAR_4;
        }

        if (VAR_12 < sizeof(ngx_mp4_atom_header_t)) {

            if (VAR_12 == 1) {

                if (FUNC_0(VAR_5, sizeof(ngx_mp4_atom_header64_t))
                    != VAR_4)
                {
                    return VAR_0;
                }


                VAR_10 = VAR_5->buffer_pos;
                VAR_12 = FUNC_6(VAR_10 + 8);
                VAR_9 = sizeof(ngx_mp4_atom_header64_t);

                if (VAR_12 < sizeof(ngx_mp4_atom_header64_t)) {
                    FUNC_3(VAR_2, VAR_5->file.log, 0,
                                  "\"%s\" mp4 atom is too small:%uL",
                                  VAR_5->file.name.data, VAR_12);
                    return VAR_0;
                }

            } else {
                FUNC_3(VAR_2, VAR_5->file.log, 0,
                              "\"%s\" mp4 atom is too small:%uL",
                              VAR_5->file.name.data, VAR_12);
                return VAR_0;
            }
        }

        if (FUNC_0(VAR_5, sizeof(ngx_mp4_atom_header_t)) != VAR_4) {
            return VAR_0;
        }

        VAR_10 = VAR_5->buffer_pos;
        VAR_11 = VAR_10 + sizeof(uint32_t);

        FUNC_2(VAR_1, VAR_5->file.log, 0,
                       "mp4 atom: %*s @%O:%uL",
                       (size_t) 4, VAR_11, VAR_5->offset, VAR_12);

        if (VAR_12 > (uint64_t) (VAR_3 - VAR_5->offset)
            || VAR_5->offset + (off_t) VAR_12 > VAR_8)
        {
            FUNC_3(VAR_2, VAR_5->file.log, 0,
                          "\"%s\" mp4 atom too large:%uL",
                          VAR_5->file.name.data, VAR_12);
            return VAR_0;
        }

        for (VAR_14 = 0; VAR_6[VAR_14].name; VAR_14++) {

            if (FUNC_7(VAR_11, VAR_6[VAR_14].name, 4) == 0) {

                FUNC_4(VAR_5, VAR_9);

                VAR_13 = VAR_6[VAR_14].handler(VAR_5, VAR_12 - VAR_9);
                if (VAR_13 != VAR_4) {
                    return VAR_13;
                }

                goto next;
            }
        }

        FUNC_4(VAR_5, VAR_12);

    next:
        continue;
    }

    return VAR_4;
}
