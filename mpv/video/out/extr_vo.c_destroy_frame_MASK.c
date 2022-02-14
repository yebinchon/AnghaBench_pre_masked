
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_frame {int num_frames; int * frames; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    struct vo_frame *VAR_1 = VAR_0;
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_frames; VAR_2++)
        FUNC_0(VAR_1->frames[VAR_2]);
}
