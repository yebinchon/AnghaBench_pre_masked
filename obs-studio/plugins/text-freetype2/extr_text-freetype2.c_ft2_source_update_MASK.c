
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ft2_source {int custom_width; int word_wrap; int* color; int log_lines; int log_mode; scalar_t__ font_size; int from_file; int file_load_failed; char const* font_name; char const* font_style; int font_flags; char* texbuf; char* text; char const* text_file; int * font_face; int last_checked; scalar_t__ max_h; int * draw_effect; void* outline_text; void* drop_shadow; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 void* FUNC_4 (char const*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (struct ft2_source*,char*) ;
 int FUNC_7 (struct ft2_source*) ;
 int * VAR_2 ;
 int * FUNC_8 (char*,char**) ;
 int FUNC_9 (struct ft2_source*) ;
 int FUNC_10 (struct ft2_source*,char const*) ;
 void* FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int * FUNC_13 (int *,char*) ;
 char* FUNC_14 (int *,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 char* FUNC_18 (char*) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 () ;
 int FUNC_21 (char const*,int ,char**) ;
 int FUNC_22 (struct ft2_source*,char const*) ;
 int FUNC_23 (struct ft2_source*) ;
 scalar_t__ FUNC_24 (char const*,char const*) ;
 int FUNC_25 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_26(void *VAR_5, obs_data_t *VAR_6)
{
 struct ft2_source *VAR_7 = VAR_5;
 obs_data_t *VAR_8 = FUNC_13(VAR_6, "font");
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 uint32_t VAR_11[2];
 uint32_t VAR_12 = 0;

 const char *VAR_13 = FUNC_14(VAR_8, "face");
 const char *VAR_14 = FUNC_14(VAR_8, "style");
 uint16_t VAR_15 = (uint16_t)FUNC_12(VAR_8, "size");
 uint32_t VAR_16 = (uint32_t)FUNC_12(VAR_8, "flags");

 if (!VAR_8)
  return;

 VAR_7->drop_shadow = FUNC_11(VAR_6, "drop_shadow");
 VAR_7->outline_text = FUNC_11(VAR_6, "outline");
 VAR_10 = FUNC_11(VAR_6, "word_wrap");

 VAR_11[0] = (uint32_t)FUNC_12(VAR_6, "color1");
 VAR_11[1] = (uint32_t)FUNC_12(VAR_6, "color2");

 VAR_12 = (uint32_t)FUNC_12(VAR_6, "custom_width");
 if (VAR_12 >= 100) {
  if (VAR_12 != VAR_7->custom_width) {
   VAR_7->custom_width = VAR_12;
   VAR_9 = 1;
  }
 } else {
  if (VAR_7->custom_width >= 100)
   VAR_9 = 1;
  VAR_7->custom_width = 0;
 }

 if (VAR_10 != VAR_7->word_wrap) {
  VAR_7->word_wrap = VAR_10;
  VAR_9 = 1;
 }

 if (VAR_11[0] != VAR_7->color[0] || VAR_11[1] != VAR_7->color[1]) {
  VAR_7->color[0] = VAR_11[0];
  VAR_7->color[1] = VAR_11[1];
  VAR_9 = 1;
 }

 bool VAR_17 = FUNC_11(VAR_6, "from_file");
 bool VAR_18 = FUNC_11(VAR_6, "log_mode");
 uint32_t VAR_19 = (uint32_t)FUNC_12(VAR_6, "log_lines");

 if (VAR_7->log_lines != VAR_19) {
  VAR_7->log_lines = VAR_19;
  VAR_9 = 1;
 }
 VAR_7->log_mode = VAR_18;

 if (VAR_2 == ((void*)0))
  goto error;

 if (VAR_7->draw_effect == ((void*)0)) {
  char *VAR_20 = ((void*)0);
  char *VAR_21 = ((void*)0);

  VAR_20 = FUNC_18("text_default.effect");

  if (VAR_20) {
   FUNC_16();
   VAR_7->draw_effect = FUNC_8(
    VAR_20, &VAR_21);
   FUNC_17();

   FUNC_2(VAR_20);
   if (VAR_21 != ((void*)0))
    FUNC_2(VAR_21);
  }
 }

 if (VAR_7->font_size != VAR_15 || VAR_7->from_file != VAR_17)
  VAR_9 = 1;

 VAR_7->file_load_failed = 0;
 VAR_7->from_file = VAR_17;

 if (VAR_7->font_name != ((void*)0)) {
  if (FUNC_24(VAR_13, VAR_7->font_name) == 0 &&
      FUNC_24(VAR_14, VAR_7->font_style) == 0 &&
      VAR_16 == VAR_7->font_flags &&
      VAR_15 == VAR_7->font_size)
   goto skip_font_load;

  FUNC_2(VAR_7->font_name);
  FUNC_2(VAR_7->font_style);
  VAR_7->font_name = ((void*)0);
  VAR_7->font_style = ((void*)0);
  VAR_7->max_h = 0;
  VAR_9 = 1;
 }

 VAR_7->font_name = FUNC_4(VAR_13);
 VAR_7->font_style = FUNC_4(VAR_14);
 VAR_7->font_size = VAR_15;
 VAR_7->font_flags = VAR_16;

 if (!FUNC_9(VAR_7) || VAR_7->font_face == ((void*)0)) {
  FUNC_3(VAR_1, "FT2-text: Failed to load font %s",
       VAR_7->font_name);
  goto error;
 } else {
  FUNC_1(VAR_7->font_face, 0, VAR_7->font_size);
  FUNC_0(VAR_7->font_face, VAR_0);
 }

 if (VAR_7->texbuf != ((void*)0)) {
  FUNC_2(VAR_7->texbuf);
  VAR_7->texbuf = ((void*)0);
 }
 VAR_7->texbuf = FUNC_5(VAR_4 * VAR_3);

 if (VAR_7->font_face)
  FUNC_7(VAR_7);

skip_font_load:
 if (VAR_17) {
  const char *VAR_22 = FUNC_14(VAR_6, "text_file");

  if (!VAR_22 || !*VAR_22 || !FUNC_19(VAR_22)) {
   const char *VAR_23 = " ";

   FUNC_2(VAR_7->text);
   VAR_7->text = ((void*)0);

   FUNC_21(VAR_23, FUNC_25(VAR_23),
        &VAR_7->text);
   FUNC_3(VAR_1,
        "FT2-text: Failed to open %s for "
        "reading",
        VAR_22);
  } else {
   if (VAR_7->text_file != ((void*)0) &&
       FUNC_24(VAR_7->text_file, VAR_22) == 0 &&
       !VAR_9)
    goto error;

   FUNC_2(VAR_7->text_file);

   VAR_7->text_file = FUNC_4(VAR_22);
   if (VAR_18)
    FUNC_22(VAR_7, VAR_22);
   else
    FUNC_10(VAR_7, VAR_22);
   VAR_7->last_checked = FUNC_20();
  }
 } else {
  const char *VAR_24 = FUNC_14(VAR_6, "text");
  if (!VAR_24 || !*VAR_24)
   goto error;

  if (VAR_7->text != ((void*)0)) {
   FUNC_2(VAR_7->text);
   VAR_7->text = ((void*)0);
  }

  FUNC_21(VAR_24, FUNC_25(VAR_24), &VAR_7->text);
 }

 if (VAR_7->font_face) {
  FUNC_6(VAR_7, VAR_7->text);
  FUNC_23(VAR_7);
 }

error:
 FUNC_15(VAR_8);
}
