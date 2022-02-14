
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct obs_video_info {int fps_den; int fps_num; int base_width; int base_height; int output_width; int output_height; int output_format; } ;
struct dstr {size_t len; char* array; int member_0; } ;
typedef int convert ;


 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*,char) ;
 int FUNC_3 (struct dstr*,char*) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*,char const*) ;
 int FUNC_6 (struct dstr*,struct dstr*,int ,int) ;
 int FUNC_7 (struct dstr*,char*,char*) ;
 int FUNC_8 (struct dstr*,size_t) ;
 int FUNC_9 (int ) ;
 struct tm* FUNC_10 (int *) ;
 int FUNC_11 (struct obs_video_info*) ;
 int FUNC_12 (struct dstr*,size_t,int,char*) ;
 int FUNC_13 (char*,char*,double const,...) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char*,int,char const*,struct tm*) ;
 size_t FUNC_16 (char const*) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (char*) ;

char *FUNC_19(const char *VAR_0, bool VAR_1,
         const char *VAR_2)
{
 time_t VAR_3 = FUNC_17(0);
 struct tm *VAR_4;
 VAR_4 = FUNC_10(&VAR_3);
 struct obs_video_info VAR_5;
 FUNC_11(&VAR_5);

 const size_t VAR_6 = 23;
 static const char *VAR_7[][2] = {
  {"%CCYY", "%Y"}, {"%YY", "%y"}, {"%MM", "%m"}, {"%DD", "%d"},
  {"%hh", "%H"}, {"%mm", "%M"}, {"%ss", "%S"}, {"%%", "%%"},

  {"%a", ""}, {"%A", ""}, {"%b", ""}, {"%B", ""},
  {"%d", ""}, {"%H", ""}, {"%I", ""}, {"%m", ""},
  {"%M", ""}, {"%p", ""}, {"%S", ""}, {"%y", ""},
  {"%Y", ""}, {"%z", ""}, {"%Z", ""},
 };

 char VAR_8[128] = {0};
 struct dstr VAR_9;
 struct dstr VAR_10 = {0};
 size_t VAR_11 = 0;

 FUNC_5(&VAR_9, VAR_2);

 while (VAR_11 < VAR_9.len) {
  const char *VAR_12 = VAR_9.array + VAR_11;
  for (size_t VAR_13 = 0; VAR_13 < VAR_6 && !VAR_8[0]; VAR_13++) {
   size_t VAR_14 = FUNC_16(VAR_7[VAR_13][0]);

   if (FUNC_0(VAR_12, VAR_7[VAR_13][0], VAR_14) == 0) {
    if (FUNC_16(VAR_7[VAR_13][1]))
     FUNC_15(VAR_8, sizeof(VAR_8),
       VAR_7[VAR_13][1], VAR_4);
    else
     FUNC_15(VAR_8, sizeof(VAR_8),
       VAR_7[VAR_13][0], VAR_4);

    FUNC_3(&VAR_10, VAR_8);
    if (VAR_10.len && FUNC_18(VAR_10.array))
     FUNC_12(&VAR_9, VAR_11, VAR_14, VAR_8);
   }
  }

  if (!VAR_8[0]) {
   if (FUNC_0(VAR_12, "%FPS", 4) == 0) {
    if (VAR_5.fps_den <= 1) {
     FUNC_13(VAR_8, "%u", VAR_5.fps_num);
    } else {
     const double VAR_15 =
      (double)VAR_5.fps_num /
      (double)VAR_5.fps_den;
     FUNC_13(VAR_8, "%.2f", VAR_15);
    }
    FUNC_12(&VAR_9, VAR_11, 4, VAR_8);

   } else if (FUNC_0(VAR_12, "%CRES", 5) == 0) {
    FUNC_13(VAR_8, "%ux%u", VAR_5.base_width,
     VAR_5.base_height);
    FUNC_12(&VAR_9, VAR_11, 5, VAR_8);

   } else if (FUNC_0(VAR_12, "%ORES", 5) == 0) {
    FUNC_13(VAR_8, "%ux%u", VAR_5.output_width,
     VAR_5.output_height);
    FUNC_12(&VAR_9, VAR_11, 5, VAR_8);

   } else if (FUNC_0(VAR_12, "%VF", 3) == 0) {
    FUNC_14(VAR_8, FUNC_9(
       VAR_5.output_format));
    FUNC_12(&VAR_9, VAR_11, 3, VAR_8);
   }
  }

  if (VAR_8[0]) {
   VAR_11 += FUNC_16(VAR_8);
   VAR_8[0] = 0;
  } else if (!VAR_8[0] && VAR_9.array[VAR_11] == '%') {
   FUNC_8(&VAR_9, VAR_11);
  } else {
   VAR_11++;
  }
 }

 if (!VAR_1)
  FUNC_7(&VAR_9, " ", "_");

 FUNC_2(&VAR_9, '.');
 FUNC_1(&VAR_9, VAR_0);
 FUNC_4(&VAR_10);

 if (VAR_9.len > 255)
  FUNC_6(&VAR_9, &VAR_9, 0, 255);

 return VAR_9.array;
}
