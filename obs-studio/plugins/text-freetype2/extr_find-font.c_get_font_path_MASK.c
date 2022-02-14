
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct font_path_info {double face_len; size_t num_sizes; int bold; int italic; char* path; int index; scalar_t__* sizes; scalar_t__ is_bitmap; } ;
struct dstr {int member_0; } ;
struct TYPE_2__ {size_t num; struct font_path_info* array; } ;
typedef int FT_Long ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dstr*,char*) ;
 int FUNC_2 (struct dstr*,struct dstr*) ;
 int FUNC_3 (struct dstr*,char const*) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*) ;
 int FUNC_7 (struct dstr*,char*,char*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_8 (struct font_path_info*,struct dstr*) ;

const char *FUNC_9(const char *VAR_3, uint16_t VAR_4, const char *VAR_5,
     uint32_t VAR_6, FT_Long *VAR_7)
{
 const char *VAR_8 = ((void*)0);
 double VAR_9 = 0.0;
 struct dstr VAR_10 = {0};
 struct dstr VAR_11 = {0};
 bool VAR_12 = !!(VAR_6 & VAR_0);
 bool VAR_13 = !!(VAR_6 & VAR_1);

 if (!VAR_3 || !*VAR_3)
  return ((void*)0);

 if (VAR_5) {
  FUNC_3(&VAR_11, VAR_5);
  FUNC_7(&VAR_11, "Bold", "");
  FUNC_7(&VAR_11, "Italic", "");
  FUNC_7(&VAR_11, "  ", " ");
  FUNC_4(&VAR_11);
 }

 FUNC_3(&VAR_10, VAR_3);
 if (!FUNC_6(&VAR_11)) {
  FUNC_1(&VAR_10, " ");
  FUNC_2(&VAR_10, &VAR_11);
 }

 for (size_t VAR_14 = 0; VAR_14 < VAR_2.num; VAR_14++) {
  struct font_path_info *VAR_15 = VAR_2.array + VAR_14;

  double VAR_16 = (double)FUNC_8(VAR_15, &VAR_10);
  if (VAR_16 < VAR_15->face_len)
   continue;

  if (VAR_15->is_bitmap) {
   int VAR_17 = 1000;
   for (uint32_t VAR_18 = 0; VAR_18 < VAR_15->num_sizes; VAR_18++) {
    int VAR_19 = FUNC_0(VAR_15->sizes[VAR_18] - VAR_4);
    if (VAR_19 < VAR_17)
     VAR_17 = VAR_19;
   }

   VAR_16 /= (double)(VAR_17 + 1.0);
  }

  if (VAR_15->bold == VAR_12)
   VAR_16 += 1.0;
  if (VAR_15->italic == VAR_13)
   VAR_16 += 1.0;

  if (VAR_16 > VAR_9) {
   VAR_8 = VAR_15->path;
   *VAR_7 = VAR_15->index;
   VAR_9 = VAR_16;
  }
 }

 FUNC_5(&VAR_11);
 FUNC_5(&VAR_10);
 return VAR_8;
}
