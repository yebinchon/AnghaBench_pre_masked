
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_view {char* title_format; } ;


 size_t FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (struct sway_view*) ;
 int FUNC_8 (struct sway_view*) ;
 int FUNC_9 (struct sway_view*) ;
 int FUNC_10 (struct sway_view*) ;
 int FUNC_11 (struct sway_view*) ;

__attribute__((used)) static size_t FUNC_12(struct sway_view *VAR_0, char *VAR_1) {
 if (!VAR_0->title_format || FUNC_4(VAR_0->title_format, "%title") == 0) {
  return FUNC_0(VAR_1, FUNC_11(VAR_0));
 }

 size_t VAR_2 = 0;
 char *VAR_3 = VAR_0->title_format;
 char *VAR_4 = FUNC_3(VAR_3, '%');
 while (VAR_4) {

  FUNC_2(VAR_1, VAR_3, VAR_4 - VAR_3);
  VAR_2 += VAR_4 - VAR_3;
  VAR_3 = VAR_4;

  if (FUNC_6(VAR_4, "%title", 6) == 0) {
   VAR_2 += FUNC_0(VAR_1, FUNC_11(VAR_0));
   VAR_3 += 6;
  } else if (FUNC_6(VAR_4, "%app_id", 7) == 0) {
   VAR_2 += FUNC_0(VAR_1, FUNC_7(VAR_0));
   VAR_3 += 7;
  } else if (FUNC_6(VAR_4, "%class", 6) == 0) {
   VAR_2 += FUNC_0(VAR_1, FUNC_8(VAR_0));
   VAR_3 += 6;
  } else if (FUNC_6(VAR_4, "%instance", 9) == 0) {
   VAR_2 += FUNC_0(VAR_1, FUNC_9(VAR_0));
   VAR_3 += 9;
  } else if (FUNC_6(VAR_4, "%shell", 6) == 0) {
   VAR_2 += FUNC_0(VAR_1, FUNC_10(VAR_0));
   VAR_3 += 6;
  } else {
   FUNC_1(VAR_1, "%");
   ++VAR_3;
   ++VAR_2;
  }
  VAR_4 = FUNC_3(VAR_3, '%');
 }
 FUNC_1(VAR_1, VAR_3);
 VAR_2 += FUNC_5(VAR_3);

 return VAR_2;
}
