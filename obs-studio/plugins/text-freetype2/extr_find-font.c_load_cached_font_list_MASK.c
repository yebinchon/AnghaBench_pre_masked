
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct serializer {int dummy; } ;
struct font_path_info {int full_len; int face_len; int is_bitmap; int num_sizes; int bold; int italic; int index; int path; int sizes; int face_and_style; } ;
struct TYPE_4__ {struct font_path_info* array; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__,int) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (struct serializer*,int ,int) ;
 int FUNC_6 (struct serializer*,int *) ;
 int FUNC_7 (struct serializer*,int) ;

__attribute__((used)) static bool FUNC_8(struct serializer *VAR_1)
{
 bool VAR_2 = 1;
 int VAR_3;

 VAR_2 = FUNC_7(VAR_1, VAR_3);
 if (!VAR_2)
  return 0;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0, VAR_3);






 for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct font_path_info *VAR_5 = &VAR_0.array[VAR_4];

  VAR_2 = FUNC_6(VAR_1, &VAR_5->face_and_style);
  if (!VAR_2)
   break;

  VAR_2 = FUNC_7(VAR_1, VAR_5->full_len); if (!VAR_2) break;
  VAR_2 = FUNC_7(VAR_1, VAR_5->face_len); if (!VAR_2) break;
  VAR_2 = FUNC_7(VAR_1, VAR_5->is_bitmap); if (!VAR_2) break;
  VAR_2 = FUNC_7(VAR_1, VAR_5->num_sizes); if (!VAR_2) break;

  VAR_5->sizes = FUNC_0(sizeof(int) * VAR_5->num_sizes);
  VAR_2 = FUNC_5(VAR_1, VAR_5->sizes,
        sizeof(int) * VAR_5->num_sizes);
  if (!VAR_2)
   break;

  VAR_2 = FUNC_7(VAR_1, VAR_5->bold); if (!VAR_2) break;

  VAR_2 = FUNC_6(VAR_1, &VAR_5->path);
  if (!VAR_2)
   break;

  VAR_2 = FUNC_7(VAR_1, VAR_5->italic); if (!VAR_2) break;
  VAR_2 = FUNC_7(VAR_1, VAR_5->index); if (!VAR_2) break;
 }



 if (!VAR_2) {
  FUNC_4();
  return 0;
 }

 return 1;
}
