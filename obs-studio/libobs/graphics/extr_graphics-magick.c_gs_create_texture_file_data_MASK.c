
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;
struct TYPE_16__ {scalar_t__ severity; int reason; } ;
struct TYPE_15__ {size_t magick_columns; size_t magick_rows; } ;
struct TYPE_14__ {int filename; } ;
typedef TYPE_1__ ImageInfo ;
typedef TYPE_2__ Image ;
typedef TYPE_3__ ExceptionInfo ;


 TYPE_3__* FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,size_t,size_t,char*,int ,int *,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_6 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,char const*,int ) ;
 int * FUNC_9 (size_t) ;
 int FUNC_10 (int ,char const*) ;

uint8_t *FUNC_11(const char *VAR_4,
         enum gs_color_format *VAR_5,
         uint32_t *VAR_6, uint32_t *VAR_7)
{
 uint8_t *VAR_8 = ((void*)0);
 ImageInfo *VAR_9;
 ExceptionInfo *VAR_10;
 Image *VAR_11;

 if (!VAR_4 || !*VAR_4)
  return ((void*)0);

 VAR_9 = FUNC_1(((void*)0));
 VAR_10 = FUNC_0();

 FUNC_10(VAR_9->filename, VAR_4);
 VAR_11 = FUNC_6(VAR_9, VAR_10);
 if (VAR_11) {
  size_t VAR_12 = VAR_11->magick_columns;
  size_t VAR_13 = VAR_11->magick_rows;
  VAR_8 = FUNC_9(VAR_12 * VAR_13 * 4);

  FUNC_5(VAR_11, 0, 0, VAR_12, VAR_13, "BGRA", VAR_0, VAR_8,
      VAR_10);
  if (VAR_10->severity != VAR_3) {
   FUNC_8(VAR_2,
        "magickcore warning/error getting "
        "pixels from file '%s': %s",
        VAR_4, VAR_10->reason);
   FUNC_7(VAR_8);
   VAR_8 = ((void*)0);
  }

  *VAR_5 = VAR_1;
  *VAR_6 = (uint32_t)VAR_12;
  *VAR_7 = (uint32_t)VAR_13;
  FUNC_3(VAR_11);

 } else if (VAR_10->severity != VAR_3) {
  FUNC_8(VAR_2,
       "magickcore warning/error reading file "
       "'%s': %s",
       VAR_4, VAR_10->reason);
 }

 FUNC_4(VAR_9);
 FUNC_2(VAR_10);

 return VAR_8;
}
