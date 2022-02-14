
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_x264 {int dummy; } ;


 char* FUNC_0 (struct obs_x264*,char const*,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline const char *FUNC_1(struct obs_x264 *VAR_1,
       const char *VAR_2)
{
 const char *VAR_3 =
  FUNC_0(VAR_1, VAR_2, "preset", VAR_0);
 return VAR_3 ? VAR_3 : "veryfast";
}
