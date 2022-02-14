
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ebml_parse_ctx {int talloc_ctx; int member_0; } ;
struct ebml_attachments {int n_attached_file; struct ebml_attached_file* attached_file; int member_0; } ;
struct TYPE_7__ {int len; int start; } ;
struct ebml_attached_file {char* file_name; char* file_mime_type; TYPE_1__ file_data; int n_file_data; } ;
typedef int stream_t ;
struct TYPE_8__ {int log; int * stream; } ;
typedef TYPE_2__ demuxer_t ;


 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,struct ebml_parse_ctx*,struct ebml_attachments*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(demuxer_t *VAR_1)
{
    stream_t *VAR_2 = VAR_1->stream;

    FUNC_0(VAR_1, "Parsing attachments...\n");

    struct ebml_attachments VAR_3 = {0};
    struct ebml_parse_ctx VAR_4 = {VAR_1->log};
    if (FUNC_3(VAR_2, &VAR_4, &VAR_3,
                          &VAR_0) < 0)
        return -1;

    for (int VAR_5 = 0; VAR_5 < VAR_3.n_attached_file; VAR_5++) {
        struct ebml_attached_file *VAR_6 = &VAR_3.attached_file[VAR_5];
        if (!VAR_6->file_name || !VAR_6->file_mime_type
            || !VAR_6->n_file_data) {
            FUNC_1(VAR_1, "Malformed attachment\n");
            continue;
        }
        char *VAR_7 = VAR_6->file_name;
        char *VAR_8 = VAR_6->file_mime_type;
        FUNC_2(VAR_1, VAR_7, VAR_8, VAR_6->file_data.start,
                               VAR_6->file_data.len);
        FUNC_0(VAR_1, "Attachment: %s, %s, %zu bytes\n",
               VAR_7, VAR_8, VAR_6->file_data.len);
    }

    FUNC_4(VAR_4.talloc_ctx);
    return 0;
}
