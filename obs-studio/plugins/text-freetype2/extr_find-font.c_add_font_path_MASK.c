
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct font_path_info {int is_bitmap; int bold; int italic; int path; int index; void* face_len; void* full_len; int face_and_style; } ;
struct dstr {scalar_t__ len; int array; int member_0; } ;
struct TYPE_4__ {int face_flags; int style_flags; scalar_t__ style_name; } ;
typedef int FT_Long ;
typedef TYPE_1__* FT_Face ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct font_path_info*,TYPE_1__*) ;
 int FUNC_2 (int ,struct font_path_info*) ;
 int FUNC_3 (struct dstr*,char*) ;
 int FUNC_4 (struct dstr*,struct dstr*) ;
 int FUNC_5 (struct dstr*,char const*) ;
 int FUNC_6 (struct dstr*) ;
 int FUNC_7 (struct dstr*) ;
 int FUNC_8 (struct dstr*) ;
 int FUNC_9 (struct dstr*,char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static void FUNC_11(FT_Face VAR_4, FT_Long VAR_5, const char *VAR_6,
     const char *VAR_7, const char *VAR_8)
{
 struct dstr VAR_9 = {0};
 struct font_path_info VAR_10;

 if (!VAR_6 || !VAR_8)
  return;

 FUNC_5(&VAR_9, VAR_6);
 if (VAR_4->style_name) {
  struct dstr VAR_11 = {0};

  FUNC_5(&VAR_11, VAR_7);
  FUNC_9(&VAR_11, "Bold", "");
  FUNC_9(&VAR_11, "Italic", "");
  FUNC_9(&VAR_11, "  ", " ");
  FUNC_6(&VAR_11);

  if (!FUNC_8(&VAR_11)) {
   FUNC_3(&VAR_9, " ");
   FUNC_4(&VAR_9, &VAR_11);
  }

  FUNC_7(&VAR_11);
 }

 VAR_10.face_and_style = VAR_9.array;
 VAR_10.full_len = (uint32_t)VAR_9.len;
 VAR_10.face_len = (uint32_t)FUNC_10(VAR_6);

 VAR_10.is_bitmap = !!(VAR_4->face_flags & VAR_0);
 VAR_10.bold = !!(VAR_4->style_flags & VAR_1);
 VAR_10.italic = !!(VAR_4->style_flags & VAR_2);
 VAR_10.index = VAR_5;

 VAR_10.path = FUNC_0(VAR_8);

 FUNC_1(&VAR_10, VAR_4);
 FUNC_2(VAR_3, &VAR_10);





}
