
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ffmpeg_image {scalar_t__ format; int cy; int file; int cx; } ;
struct SwsContext {int dummy; } ;
struct TYPE_3__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (struct SwsContext*) ;
 struct SwsContext* FUNC_4 (int ,int,scalar_t__,int ,int,scalar_t__,int ,int *,int *,int *) ;
 int FUNC_5 (struct SwsContext*,int const* const*,int*,int ,int,int **,int*) ;

__attribute__((used)) static bool FUNC_6(struct ffmpeg_image *VAR_5,
     AVFrame *VAR_6, uint8_t *VAR_7,
     int VAR_8)
{
 struct SwsContext *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 if (VAR_5->format == VAR_2 ||
     VAR_5->format == VAR_1 ||
     VAR_5->format == VAR_0) {

  if (VAR_8 != VAR_6->linesize[0]) {
   int VAR_11 = VAR_8 < VAR_6->linesize[0]
            ? VAR_8
            : VAR_6->linesize[0];

   for (int VAR_12 = 0; VAR_12 < VAR_5->cy; VAR_12++)
    FUNC_2(VAR_7 + VAR_12 * VAR_8,
           VAR_6->data[0] + VAR_12 * VAR_6->linesize[0],
           VAR_11);
  } else {
   FUNC_2(VAR_7, VAR_6->data[0], VAR_8 * VAR_5->cy);
  }

 } else {
  VAR_9 = FUNC_4(VAR_5->cx, VAR_5->cy, VAR_5->format,
      VAR_5->cx, VAR_5->cy, VAR_1,
      VAR_4, ((void*)0), ((void*)0), ((void*)0));
  if (!VAR_9) {
   FUNC_1(VAR_3,
        "Failed to create scale context "
        "for '%s'",
        VAR_5->file);
   return 0;
  }

  VAR_10 = FUNC_5(VAR_9, (const uint8_t *const *)VAR_6->data,
    VAR_6->linesize, 0, VAR_5->cy, &VAR_7, &VAR_8);
  FUNC_3(VAR_9);

  if (VAR_10 < 0) {
   FUNC_1(VAR_3, "sws_scale failed for '%s': %s",
        VAR_5->file, FUNC_0(VAR_10));
   return 0;
  }

  VAR_5->format = VAR_1;
 }

 return 1;
}
