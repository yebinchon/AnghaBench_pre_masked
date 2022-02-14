
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum video_range_type { ____Placeholder_video_range_type } video_range_type ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline enum video_range_type
FUNC_1(enum video_format VAR_3, enum video_range_type VAR_4)
{
 if (VAR_4 == VAR_0) {
  VAR_4 = FUNC_0(VAR_3) ? VAR_2
           : VAR_1;
 }

 return VAR_4;
}
