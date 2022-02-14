
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icons {int movie_file; int img_file; int font_file; int music_file; int text_file; int default_file; } ;
struct media {void** files; void** group; struct icons icons; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_0 (size_t,char*,size_t) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_1 (size_t,char*,int *) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;

__attribute__((used)) static void
FUNC_2(struct media *VAR_22)
{

    struct icons *VAR_23 = &VAR_22->icons;
    VAR_22->group[VAR_6] = FUNC_1(VAR_6,"default",&VAR_23->default_file);
    VAR_22->group[VAR_11] = FUNC_1(VAR_11, "textual", &VAR_23->text_file);
    VAR_22->group[VAR_10] = FUNC_1(VAR_10, "music", &VAR_23->music_file);
    VAR_22->group[VAR_7] = FUNC_1(VAR_7, "font", &VAR_23->font_file);
    VAR_22->group[VAR_8] = FUNC_1(VAR_8, "image", &VAR_23->img_file);
    VAR_22->group[VAR_9] = FUNC_1(VAR_9, "movie", &VAR_23->movie_file);


    VAR_22->files[VAR_4] = FUNC_0(VAR_4, ((void*)0), VAR_6);
    VAR_22->files[VAR_18] = FUNC_0(VAR_18, "txt", VAR_11);
    VAR_22->files[VAR_3] = FUNC_0(VAR_3, "c", VAR_11);
    VAR_22->files[VAR_2] = FUNC_0(VAR_2, "cpp", VAR_11);
    VAR_22->files[VAR_12] = FUNC_0(VAR_12, "h", VAR_11);
    VAR_22->files[VAR_1] = FUNC_0(VAR_12, "hpp", VAR_11);
    VAR_22->files[VAR_14] = FUNC_0(VAR_14, "mp3", VAR_10);
    VAR_22->files[VAR_21] = FUNC_0(VAR_21, "wav", VAR_10);
    VAR_22->files[VAR_15] = FUNC_0(VAR_15, "ogg", VAR_10);
    VAR_22->files[VAR_20] = FUNC_0(VAR_20, "ttf", VAR_7);
    VAR_22->files[VAR_0] = FUNC_0(VAR_0, "bmp", VAR_8);
    VAR_22->files[VAR_17] = FUNC_0(VAR_17, "png", VAR_8);
    VAR_22->files[VAR_13] = FUNC_0(VAR_13, "jpg", VAR_8);
    VAR_22->files[VAR_16] = FUNC_0(VAR_16, "pcx", VAR_8);
    VAR_22->files[VAR_19] = FUNC_0(VAR_19, "tga", VAR_8);
    VAR_22->files[VAR_5] = FUNC_0(VAR_5, "gif", VAR_8);
}
