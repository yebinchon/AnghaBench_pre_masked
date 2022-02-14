
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int cx; int cy; int loaded; int texture_data; int format; } ;
typedef TYPE_1__ gs_image_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const*,int *,int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(gs_image_file_t *VAR_1,
     const char *VAR_2, uint64_t *VAR_3)
{
 size_t VAR_4;

 if (!VAR_1)
  return;

 FUNC_5(VAR_1, 0, sizeof(*VAR_1));

 if (!VAR_2)
  return;

 VAR_4 = FUNC_7(VAR_2);

 if (VAR_4 > 4 && FUNC_6(VAR_2 + VAR_4 - 4, ".gif") == 0) {
  if (FUNC_4(VAR_1, VAR_2, VAR_3))
   return;
 }

 VAR_1->texture_data = FUNC_1(
  VAR_2, &VAR_1->format, &VAR_1->cx, &VAR_1->cy);

 if (VAR_3) {
  *VAR_3 += VAR_1->cx * VAR_1->cy *
         FUNC_2(VAR_1->format) / 8;
 }

 VAR_1->loaded = !!VAR_1->texture_data;
 if (!VAR_1->loaded) {
  FUNC_0(VAR_0, "Failed to load file '%s'", VAR_2);
  FUNC_3(VAR_1);
 }
}
