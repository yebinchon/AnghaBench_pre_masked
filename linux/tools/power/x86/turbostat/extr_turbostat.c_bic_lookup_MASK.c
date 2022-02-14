
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum show_hide_mode { ____Placeholder_show_hide_mode } show_hide_mode ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char** VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int VAR_7 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;

unsigned long long FUNC_5(char *VAR_8, enum show_hide_mode VAR_9)
{
 int VAR_10;
 unsigned long long VAR_11 = 0;

 while (VAR_8) {
  char *VAR_12;

  VAR_12 = FUNC_3(VAR_8, ',');

  if (VAR_12)
   *VAR_12 = '\0';

  if (!FUNC_4(VAR_8, "all"))
   return ~0;

  for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
   if (!FUNC_4(VAR_8, VAR_3[VAR_10].name)) {
    VAR_11 |= (1ULL << VAR_10);
    break;
   }
  }
  if (VAR_10 == VAR_0) {
   if (VAR_9 == VAR_2) {
    FUNC_1(VAR_7, "Invalid counter name: %s\n", VAR_8);
    FUNC_0(-1);
   }
   VAR_6[VAR_5++] = VAR_8;
   if (VAR_4)
    FUNC_1(VAR_7, "deferred \"%s\"\n", VAR_8);
   if (VAR_5 >= VAR_1) {
    FUNC_1(VAR_7, "More than max %d un-recognized --skip options '%s'\n",
     VAR_1, VAR_8);
    FUNC_2();
    FUNC_0(1);
   }
  }

  VAR_8 = VAR_12;
  if (VAR_8)
   VAR_8++;

 }
 return VAR_11;
}
