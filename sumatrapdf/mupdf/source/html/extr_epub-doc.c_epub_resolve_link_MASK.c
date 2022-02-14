
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int fz_location ;
struct TYPE_9__ {int page_h; } ;
typedef TYPE_1__ fz_html ;
typedef int fz_document ;
typedef int fz_context ;
struct TYPE_10__ {TYPE_3__* spine; } ;
typedef TYPE_2__ epub_document ;
struct TYPE_11__ {scalar_t__* path; struct TYPE_11__* next; } ;
typedef TYPE_3__ epub_chapter ;


 TYPE_1__* FUNC_0 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 float FUNC_2 (int *,TYPE_1__*,char const*) ;
 int FUNC_3 (int,int) ;
 char* FUNC_4 (char const*,char) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (scalar_t__*,char const*,size_t) ;

__attribute__((used)) static fz_location
FUNC_7(fz_context *VAR_0, fz_document *VAR_1, const char *VAR_2, float *VAR_3, float *VAR_4)
{
 epub_document *VAR_5 = (epub_document*)VAR_1;
 epub_chapter *VAR_6;
 int VAR_7;

 const char *VAR_8 = FUNC_4(VAR_2, '#');
 size_t VAR_9 = VAR_8 ? (size_t)(VAR_8 - VAR_2) : FUNC_5(VAR_2);
 if (VAR_8 && VAR_8[1] == 0)
  VAR_8 = ((void*)0);

 for (VAR_7 = 0, VAR_6 = VAR_5->spine; VAR_6; ++VAR_7, VAR_6 = VAR_6->next)
 {
  if (!FUNC_6(VAR_6->path, VAR_2, VAR_9) && VAR_6->path[VAR_9] == 0)
  {
   if (VAR_8)
   {
    float VAR_10;
    fz_html *VAR_11 = FUNC_0(VAR_0, VAR_5, VAR_6);
    int VAR_12 = VAR_11->page_h;


    VAR_10 = FUNC_2(VAR_0, VAR_11, VAR_8+1);
    FUNC_1(VAR_0, VAR_11);
    if (VAR_10 >= 0)
    {
     int VAR_13 = VAR_10 / VAR_12;
     if (VAR_4) *VAR_4 = VAR_10 - VAR_13 * VAR_12;
     return FUNC_3(VAR_7, VAR_13);
    }
    return FUNC_3(-1, -1);
   }
   return FUNC_3(VAR_7, 0);
  }
 }

 return FUNC_3(-1, -1);
}
