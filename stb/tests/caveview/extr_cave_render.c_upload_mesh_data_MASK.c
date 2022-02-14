
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int cx; int cy; int num_quads; int transform; int bounds; int face_buffer; int build_buffer; } ;
typedef TYPE_1__ raw_mesh ;
struct TYPE_7__ {int num_quads; int vbuf_size; int fbuf_size; int priority; int chunk_x; int chunk_y; int state; int transform; int bounds; } ;
typedef TYPE_2__ chunk_mesh ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(raw_mesh *VAR_4)
{
   int VAR_5 = VAR_4->cx;
   int VAR_6 = VAR_4->cy;
   int VAR_7 = (VAR_5 >> 1) & (VAR_0-1);
   int VAR_8 = (VAR_6 >> 1) & (VAR_1-1);
   chunk_mesh *VAR_9;

   FUNC_0(VAR_7, VAR_8);

   VAR_9 = &VAR_3[VAR_8][VAR_7];
   VAR_9->num_quads = VAR_4->num_quads;

   FUNC_2(VAR_9, VAR_4->build_buffer, VAR_4->face_buffer);
   VAR_9->vbuf_size = VAR_4->num_quads*4*sizeof(uint32);
   VAR_9->fbuf_size = VAR_4->num_quads*sizeof(uint32);
   VAR_9->priority = 100000;
   VAR_9->chunk_x = VAR_5;
   VAR_9->chunk_y = VAR_6;

   FUNC_1(VAR_9->bounds, VAR_4->bounds, sizeof(VAR_9->bounds));
   FUNC_1(VAR_9->transform, VAR_4->transform, sizeof(VAR_9->transform));


   VAR_9->state = VAR_2;
}
