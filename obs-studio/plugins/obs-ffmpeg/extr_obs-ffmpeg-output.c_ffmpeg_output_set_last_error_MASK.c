
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_data {scalar_t__ last_error; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(struct ffmpeg_data *VAR_0,
      const char *VAR_1)
{
 if (VAR_0->last_error)
  FUNC_0(VAR_0->last_error);

 VAR_0->last_error = FUNC_1(VAR_1);
}
