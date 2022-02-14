
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_const_unknown_chunkp ;
typedef TYPE_3__* png_const_inforp ;
struct TYPE_11__ {scalar_t__ unknown_chunks_num; TYPE_2__* unknown_chunks; } ;
struct TYPE_10__ {unsigned int location; int* name; scalar_t__ size; int data; } ;
struct TYPE_9__ {int unknown_default; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(png_structrp VAR_3, png_const_inforp VAR_4,
    unsigned int VAR_5)
{
   if (VAR_4->unknown_chunks_num != 0)
   {
      png_const_unknown_chunkp VAR_6;

      FUNC_0(5, "writing extra chunks");

      for (VAR_6 = VAR_4->unknown_chunks;
           VAR_6 < VAR_4->unknown_chunks + VAR_4->unknown_chunks_num;
           ++VAR_6)
         if ((VAR_6->location & VAR_5) != 0)
      {
         {

            if (VAR_6->size == 0)
               FUNC_2(VAR_3, "Writing zero-length unknown chunk");

            FUNC_3(VAR_3, VAR_6->name, VAR_6->data, VAR_6->size);
         }
      }
   }
}
