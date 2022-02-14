
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {int metadata; int priv; int is_streaming; int is_network; int duration; int start_time; int fully_read; int ts_resets_possible; int filetype; int partially_seekable; int seekable; int playlist; int matroska_data; int num_attachments; int attachments; int edition; int num_editions; int editions; int num_chapters; int chapters; } ;


 int FUNC_0 (struct demuxer*,int ) ;

__attribute__((used)) static void FUNC_1(struct demuxer *VAR_0, struct demuxer *VAR_1)
{



    VAR_0->chapters = VAR_1->chapters;
    VAR_0->num_chapters = VAR_1->num_chapters;
    VAR_0->editions = VAR_1->editions;
    VAR_0->num_editions = VAR_1->num_editions;
    VAR_0->edition = VAR_1->edition;
    VAR_0->attachments = VAR_1->attachments;
    VAR_0->num_attachments = VAR_1->num_attachments;
    VAR_0->matroska_data = VAR_1->matroska_data;
    VAR_0->playlist = VAR_1->playlist;
    VAR_0->seekable = VAR_1->seekable;
    VAR_0->partially_seekable = VAR_1->partially_seekable;
    VAR_0->filetype = VAR_1->filetype;
    VAR_0->ts_resets_possible = VAR_1->ts_resets_possible;
    VAR_0->fully_read = VAR_1->fully_read;
    VAR_0->start_time = VAR_1->start_time;
    VAR_0->duration = VAR_1->duration;
    VAR_0->is_network = VAR_1->is_network;
    VAR_0->is_streaming = VAR_1->is_streaming;
    VAR_0->priv = VAR_1->priv;
    VAR_0->metadata = FUNC_0(VAR_0, VAR_1->metadata);
}
