
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (struct hda_codec*,int const,char const*,int) ;
 int FUNC_1 (char*,int,char*,char const*,char*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2, int VAR_3,
        const int *VAR_4, const char *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  const char *VAR_7;
  char VAR_8[VAR_0];
  int VAR_9, VAR_10 = 0;

  if (VAR_3 == 2 && VAR_6 == 1 && !FUNC_2(VAR_5, "Speaker"))
   VAR_7 = "Bass Speaker";
  else if (VAR_3 >= 3) {
   FUNC_1(VAR_8, sizeof(VAR_8), "%s %s",
     VAR_5, VAR_1[VAR_6]);
   VAR_7 = VAR_8;
  } else {
   VAR_7 = VAR_5;
   VAR_10 = VAR_6;
  }
  VAR_9 = FUNC_0(VAR_2, VAR_4[VAR_6], VAR_7, VAR_10);
  if (VAR_9 < 0)
   return VAR_9;
 }
 return 0;
}
