
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct video_frame {int dummy; } ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct video_frame*,int,int ,int ) ;

__attribute__((used)) static inline struct video_frame *
FUNC_2(enum video_format VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 struct video_frame *VAR_3;

 VAR_3 = (struct video_frame *)FUNC_0(sizeof(struct video_frame));
 FUNC_1(VAR_3, VAR_0, VAR_1, VAR_2);
 return VAR_3;
}
