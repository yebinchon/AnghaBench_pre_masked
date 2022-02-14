
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct color_key_filter_data {float similarity; float smoothness; int key_color; } ;
typedef int obs_data_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline void FUNC_4(struct color_key_filter_data *VAR_4,
           obs_data_t *VAR_5)
{
 int64_t VAR_6 = FUNC_0(VAR_5, VAR_2);
 int64_t VAR_7 = FUNC_0(VAR_5, VAR_3);
 uint32_t VAR_8 =
  (uint32_t)FUNC_0(VAR_5, VAR_1);
 const char *VAR_9 =
  FUNC_1(VAR_5, VAR_0);

 if (FUNC_2(VAR_9, "green") == 0)
  VAR_8 = 0x00FF00;
 else if (FUNC_2(VAR_9, "blue") == 0)
  VAR_8 = 0xFF0000;
 else if (FUNC_2(VAR_9, "red") == 0)
  VAR_8 = 0x0000FF;
 else if (FUNC_2(VAR_9, "magenta") == 0)
  VAR_8 = 0xFF00FF;

 FUNC_3(&VAR_4->key_color, VAR_8 | 0xFF000000);

 VAR_4->similarity = (float)VAR_6 / 1000.0f;
 VAR_4->smoothness = (float)VAR_7 / 1000.0f;
}
