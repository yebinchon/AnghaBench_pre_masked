
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pa_stream_flags_t ;
typedef int pa_stream ;
typedef int pa_buffer_attr ;
typedef int int_fast32_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (int *,char*,int const*,int ,int *,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char const*) ;

int_fast32_t FUNC_8(pa_stream *VAR_0, const char *VAR_1,
      const pa_buffer_attr *VAR_2,
      pa_stream_flags_t VAR_3)
{
 if (FUNC_4() < 0)
  return -1;

 size_t VAR_4 = FUNC_7(VAR_1) - 8;
 char *VAR_5 = FUNC_1(VAR_4 + 1);
 FUNC_2(VAR_5, VAR_1, VAR_4);

 FUNC_5();
 int_fast32_t VAR_6 =
  FUNC_3(VAR_0, VAR_5, VAR_2, VAR_3, ((void*)0), ((void*)0));
 FUNC_6();

 FUNC_0(VAR_5);
 return VAR_6;
}
