
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct serializer {int dummy; } ;
struct font_path_info {int full_len; int face_len; int is_bitmap; int num_sizes; int bold; int italic; int index; int path; int sizes; int face_and_style; } ;
struct TYPE_2__ {size_t num; struct font_path_info* array; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct serializer*) ;
 int FUNC_3 (struct serializer*,char*,char*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 () ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (struct serializer*,int ,int) ;
 int FUNC_7 (struct serializer*,int ) ;
 int FUNC_8 (struct serializer*,int) ;

void FUNC_9(void)
{
 char *VAR_2 = FUNC_5("font_data.bin");
 uint32_t VAR_3 = FUNC_4();
 int VAR_4 = (int)VAR_1.num;
 struct serializer VAR_5;
 bool VAR_6 = 0;

 if (VAR_3)
  VAR_6 =
   FUNC_3(&VAR_5, VAR_2, "tmp");
 FUNC_0(VAR_2);

 if (!VAR_6)
  return;

 VAR_6 = FUNC_8(&VAR_5, VAR_0);
 if (!VAR_6)
  return;
 VAR_6 = FUNC_8(&VAR_5, VAR_3);
 if (!VAR_6)
  return;
 VAR_6 = FUNC_8(&VAR_5, VAR_4);
 if (!VAR_6)
  return;






 for (size_t VAR_7 = 0; VAR_7 < VAR_1.num; VAR_7++) {
  struct font_path_info *VAR_8 = &VAR_1.array[VAR_7];

  VAR_6 = FUNC_7(&VAR_5, VAR_8->face_and_style);
  if (!VAR_6)
   break;

  VAR_6 = FUNC_8(&VAR_5, VAR_8->full_len); if (!VAR_6) break;
  VAR_6 = FUNC_8(&VAR_5, VAR_8->face_len); if (!VAR_6) break;
  VAR_6 = FUNC_8(&VAR_5, VAR_8->is_bitmap); if (!VAR_6) break;
  VAR_6 = FUNC_8(&VAR_5, VAR_8->num_sizes); if (!VAR_6) break;

  VAR_6 = FUNC_6(&VAR_5, VAR_8->sizes,
         sizeof(int) * VAR_8->num_sizes);
  if (!VAR_6)
   break;

  VAR_6 = FUNC_8(&VAR_5, VAR_8->bold); if (!VAR_6) break;

  VAR_6 = FUNC_7(&VAR_5, VAR_8->path);
  if (!VAR_6)
   break;

  VAR_6 = FUNC_8(&VAR_5, VAR_8->italic); if (!VAR_6) break;
  VAR_6 = FUNC_8(&VAR_5, VAR_8->index); if (!VAR_6) break;
 }



 FUNC_2(&VAR_5);
}
