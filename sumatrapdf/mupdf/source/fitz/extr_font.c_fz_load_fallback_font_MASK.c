
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int fz_font ;
struct TYPE_9__ {TYPE_1__* font; } ;
typedef TYPE_2__ fz_context ;
struct TYPE_10__ {int * sans; int * serif; } ;
struct TYPE_8__ {TYPE_3__* fallback; } ;




 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_2__*,int,int,int,int,int) ;
 unsigned char* FUNC_1 (TYPE_2__*,int,int,int*,int*) ;
 int * FUNC_2 (TYPE_2__*,int *,unsigned char const*,int,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

fz_font *FUNC_4(fz_context *VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 fz_font **VAR_11;
 const unsigned char *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_6 < 0 || VAR_6 >= (int)FUNC_3(VAR_5->font->fallback))
  return ((void*)0);



 VAR_13 = VAR_6;
 if (VAR_6 == VAR_4)
 {
  switch (VAR_7)
  {
  case 131: VAR_13 = VAR_2 + 1; break;
  case 130: VAR_13 = VAR_2 + 2; break;
  case 129: VAR_13 = VAR_2 + 3; break;
  case 128: VAR_13 = VAR_2 + 4; break;
  }
 }
 if (VAR_6 == VAR_3)
 {
  if (VAR_7 == VAR_0 || VAR_7 == VAR_1)
   VAR_13 = VAR_2 + 5;
 }

 if (VAR_8)
  VAR_11 = &VAR_5->font->fallback[VAR_13].serif;
 else
  VAR_11 = &VAR_5->font->fallback[VAR_13].sans;

 if (!*VAR_11)
 {
  *VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
  if (!*VAR_11)
  {
   VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_7, &VAR_15, &VAR_14);
   if (VAR_12)
    *VAR_11 = FUNC_2(VAR_5, ((void*)0), VAR_12, VAR_15, VAR_14, 0);
  }
 }

 return *VAR_11;
}
