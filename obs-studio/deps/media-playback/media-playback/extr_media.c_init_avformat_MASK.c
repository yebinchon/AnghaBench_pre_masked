
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int path; void* has_audio; void* has_video; int hw; TYPE_5__* fmt; int buffering; int is_local_file; scalar_t__* format_name; } ;
typedef TYPE_2__ mp_media_t ;
struct TYPE_8__ {TYPE_2__* opaque; int callback; } ;
struct TYPE_10__ {TYPE_1__ interrupt_callback; } ;
typedef int AVInputFormat ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,char*,int ,int ) ;
 int * FUNC_2 (scalar_t__*) ;
 TYPE_5__* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (TYPE_5__**,int ,int *,int **) ;
 int FUNC_6 (int ,char*,int ) ;
 int VAR_4 ;
 void* FUNC_7 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static bool FUNC_8(mp_media_t *VAR_5)
{
 AVInputFormat *VAR_6 = ((void*)0);

 if (VAR_5->format_name && *VAR_5->format_name) {
  VAR_6 = FUNC_2(VAR_5->format_name);
  if (!VAR_6)
   FUNC_6(VAR_2,
        "MP: Unable to find input format for "
        "'%s'",
        VAR_5->path);
 }

 AVDictionary *VAR_7 = ((void*)0);
 if (VAR_5->buffering && !VAR_5->is_local_file)
  FUNC_1(&VAR_7, "buffer_size", VAR_5->buffering, 0);

 VAR_5->fmt = FUNC_3();
 VAR_5->fmt->interrupt_callback.callback = VAR_4;
 VAR_5->fmt->interrupt_callback.opaque = VAR_5;

 int VAR_8 = FUNC_5(&VAR_5->fmt, VAR_5->path, VAR_6,
          VAR_7 ? &VAR_7 : ((void*)0));
 FUNC_0(&VAR_7);

 if (VAR_8 < 0) {
  FUNC_6(VAR_3, "MP: Failed to open media: '%s'", VAR_5->path);
  return 0;
 }

 if (FUNC_4(VAR_5->fmt, ((void*)0)) < 0) {
  FUNC_6(VAR_3, "MP: Failed to find stream info for '%s'",
       VAR_5->path);
  return 0;
 }

 VAR_5->has_video = FUNC_7(VAR_5, VAR_1, VAR_5->hw);
 VAR_5->has_audio = FUNC_7(VAR_5, VAR_0, VAR_5->hw);

 if (!VAR_5->has_video && !VAR_5->has_audio) {
  FUNC_6(VAR_3,
       "MP: Could not initialize audio or video: "
       "'%s'",
       VAR_5->path);
  return 0;
 }

 return 1;
}
