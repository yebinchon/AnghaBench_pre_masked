
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_image {int hwdec_mapped; int mpi; scalar_t__ id; int planes; } ;
struct gl_video {scalar_t__ hwdec_mapper; scalar_t__ hwdec_active; struct video_image image; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gl_video*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct gl_video *VAR_0)
{
    struct video_image *VAR_1 = &VAR_0->image;

    if (VAR_1->hwdec_mapped) {
        FUNC_0(VAR_0->hwdec_active && VAR_0->hwdec_mapper);
        FUNC_4(VAR_0->hwdec_mapper);
        FUNC_2(VAR_1->planes, 0, sizeof(VAR_1->planes));
        VAR_1->hwdec_mapped = 0;
    }

    VAR_1->id = 0;

    FUNC_3(&VAR_1->mpi);



    FUNC_1(VAR_0, 0);
}
