
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_video {int ra; void* osd_timer; void* blit_timer; void* upload_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct gl_video*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gl_video *VAR_1)
{
    FUNC_0(VAR_1, "before init_gl");

    VAR_1->upload_timer = FUNC_3(VAR_1->ra);
    VAR_1->blit_timer = FUNC_3(VAR_1->ra);
    VAR_1->osd_timer = FUNC_3(VAR_1->ra);

    FUNC_0(VAR_1, "after init_gl");

    FUNC_2(VAR_1->ra, VAR_0);
    FUNC_1(VAR_1->ra, VAR_0);
}
