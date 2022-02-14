
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int fbuf; int vbuf; int fbuf_tex; } ;
typedef TYPE_1__ chunk_mesh ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(int VAR_3, int VAR_4)
{
   chunk_mesh *VAR_5 = &VAR_2[VAR_4][VAR_3];
   if (VAR_5->state == VAR_1) {
      FUNC_1(1, &VAR_5->fbuf_tex);
      FUNC_0(1, &VAR_5->vbuf);
      FUNC_0(1, &VAR_5->fbuf);
      VAR_2[VAR_4][VAR_3].state = VAR_0;
   }
}
