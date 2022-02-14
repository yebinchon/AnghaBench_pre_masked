
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum video_range_type { ____Placeholder_video_range_type } video_range_type ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline const char *FUNC_1(enum video_format VAR_1,
            enum video_range_type VAR_2)
{
 VAR_2 = FUNC_0(VAR_1, VAR_2);
 return VAR_2 == VAR_0 ? "Full" : "Partial";
}
