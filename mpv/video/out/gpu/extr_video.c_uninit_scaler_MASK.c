
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scaler {int initialized; int * kernel; int lut; int sep_fbo; } ;
struct gl_video {int ra; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct gl_video *VAR_0, struct scaler *VAR_1)
{
    FUNC_0(VAR_0->ra, &VAR_1->sep_fbo);
    FUNC_0(VAR_0->ra, &VAR_1->lut);
    VAR_1->kernel = ((void*)0);
    VAR_1->initialized = 0;
}
