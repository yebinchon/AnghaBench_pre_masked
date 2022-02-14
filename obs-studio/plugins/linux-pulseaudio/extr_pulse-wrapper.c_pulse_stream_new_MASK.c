
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pa_stream ;
typedef int pa_sample_spec ;
typedef int pa_proplist ;
typedef int pa_channel_map ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*,int const*,int const*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 int FUNC_5 () ;

pa_stream *FUNC_6(const char *VAR_1, const pa_sample_spec *VAR_2,
       const pa_channel_map *VAR_3)
{
 if (FUNC_2() < 0)
  return ((void*)0);

 FUNC_3();

 pa_proplist *VAR_4 = FUNC_4();
 pa_stream *VAR_5 =
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_4);

 FUNC_5();
 return VAR_5;
}
