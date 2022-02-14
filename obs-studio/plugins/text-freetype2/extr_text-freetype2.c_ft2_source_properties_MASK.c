
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ,int,int,int) ;
 int FUNC_6 (int *,char*,int ,int ,int ,int *) ;
 int FUNC_7 (int *,char*,int ,int ) ;
 int * FUNC_8 () ;

__attribute__((used)) static obs_properties_t *FUNC_9(void *VAR_2)
{
 FUNC_0(VAR_2);

 obs_properties_t *VAR_3 = FUNC_8();
 FUNC_4(VAR_3, "font", FUNC_1("Font"));

 FUNC_7(VAR_3, "text", FUNC_1("Text"),
    VAR_1);

 FUNC_2(VAR_3, "from_file",
    FUNC_1("ReadFromFile"));

 FUNC_2(VAR_3, "log_mode",
    FUNC_1("ChatLogMode"));

 FUNC_5(VAR_3, "log_lines",
          FUNC_1("ChatLogLines"), 1, 1000, 1);

 FUNC_6(VAR_3, "text_file", FUNC_1("TextFile"),
    VAR_0,
    FUNC_1("TextFileFilter"), ((void*)0));

 FUNC_3(VAR_3, "color1", FUNC_1("Color1"));

 FUNC_3(VAR_3, "color2", FUNC_1("Color2"));

 FUNC_2(VAR_3, "outline", FUNC_1("Outline"));

 FUNC_2(VAR_3, "drop_shadow",
    FUNC_1("DropShadow"));

 FUNC_5(VAR_3, "custom_width",
          FUNC_1("CustomWidth"), 0, 4096, 1);

 FUNC_2(VAR_3, "word_wrap",
    FUNC_1("WordWrap"));

 return VAR_3;
}
