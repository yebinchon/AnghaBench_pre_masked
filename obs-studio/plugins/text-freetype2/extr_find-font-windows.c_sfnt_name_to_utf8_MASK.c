
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_4__ {int string_len; scalar_t__ string; int language_id; int encoding_id; int platform_id; } ;
typedef TYPE_1__ FT_SfntName ;


 size_t FUNC_0 (unsigned int,int ,char*,int ,scalar_t__*,int) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;
 unsigned int FUNC_3 (int ,int ,int ) ;
 scalar_t__* FUNC_4 (size_t) ;
 char* FUNC_5 (scalar_t__*,size_t) ;

char *FUNC_6(FT_SfntName *VAR_0)
{
 unsigned int VAR_1 = FUNC_3(VAR_0->platform_id,
       VAR_0->encoding_id,
       VAR_0->language_id);

 char *VAR_2 = ((void*)0);
 wchar_t *VAR_3;
 size_t VAR_4;

 if (VAR_1 == 1201)
  return FUNC_1(VAR_0);
 else if (VAR_1 == 0)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_1, 0, (char *)VAR_0->string,
     VAR_0->string_len, ((void*)0), 0);
 if (VAR_4) {
  VAR_3 = FUNC_4((VAR_4 + 1) * sizeof(wchar_t));
  VAR_4 = FUNC_0(VAR_1, 0,
      (char *)VAR_0->string,
      VAR_0->string_len,
      VAR_3, (int)VAR_4);

  if (VAR_4) {
   VAR_3[VAR_4] = 0;
   VAR_2 = FUNC_5(VAR_3, VAR_4);
  }

  FUNC_2(VAR_3);
 }

 return VAR_2;
}
