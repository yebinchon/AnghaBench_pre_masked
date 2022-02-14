
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* html; } ;
typedef TYPE_1__ html_document ;
typedef int fz_location ;
typedef int fz_document ;
typedef int fz_context ;
struct TYPE_4__ {float page_h; } ;


 float FUNC_0 (int *,TYPE_2__*,char const*) ;
 int FUNC_1 (int,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static fz_location
FUNC_3(fz_context *VAR_0, fz_document *VAR_1, const char *VAR_2, float *VAR_3, float *VAR_4)
{
 html_document *VAR_5 = (html_document*)VAR_1;
 const char *VAR_6 = FUNC_2(VAR_2, '#');
 if (VAR_6 && VAR_6[1] != 0)
 {
  float VAR_7 = FUNC_0(VAR_0, VAR_5->html, VAR_6+1);
  if (VAR_7 >= 0)
  {
   int VAR_8 = VAR_7 / VAR_5->html->page_h;
   if (VAR_4) *VAR_4 = VAR_7 - VAR_8 * VAR_5->html->page_h;
   return FUNC_1(0, VAR_8);
  }
 }

 return FUNC_1(-1, -1);
}
