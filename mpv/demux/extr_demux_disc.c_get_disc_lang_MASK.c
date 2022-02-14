
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_lang_req {scalar_t__ type; int id; scalar_t__* name; } ;
struct stream {int dummy; } ;
struct sh_stream {scalar_t__ type; int demuxer_id; int lang; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct stream*,int ,struct stream_lang_req*) ;
 int FUNC_1 (struct sh_stream*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct stream *VAR_2, struct sh_stream *VAR_3, bool VAR_4)
{
    struct stream_lang_req VAR_5 = {.type = VAR_3->type, .id = VAR_3->demuxer_id};
    if (VAR_4 && VAR_3->type == VAR_1)
        VAR_5.id = VAR_5.id & 0x1F;
    FUNC_0(VAR_2, VAR_0, &VAR_5);
    if (VAR_5.name[0])
        VAR_3->lang = FUNC_1(VAR_3, VAR_5.name);
}
