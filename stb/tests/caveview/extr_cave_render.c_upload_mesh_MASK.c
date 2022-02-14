
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_3__ {int num_quads; int fbuf; int fbuf_tex; int vbuf; } ;
typedef TYPE_1__ chunk_mesh ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(chunk_mesh *VAR_4, uint8 *VAR_5, uint8 *VAR_6)
{
   FUNC_3(1, &VAR_4->vbuf);
   FUNC_0(VAR_0, VAR_4->vbuf);
   FUNC_2(VAR_0, VAR_4->num_quads*4*sizeof(uint32), VAR_5, VAR_2);
   FUNC_0(VAR_0, 0);

   FUNC_3(1, &VAR_4->fbuf);
   FUNC_0(VAR_3, VAR_4->fbuf);
   FUNC_2(VAR_3, VAR_4->num_quads*sizeof(uint32), VAR_6 , VAR_2);
   FUNC_0(VAR_3, 0);

   FUNC_4(1, &VAR_4->fbuf_tex);
   FUNC_1(VAR_3, VAR_4->fbuf_tex);
   FUNC_5(VAR_3, VAR_1, VAR_4->fbuf);
   FUNC_1(VAR_3, 0);
}
