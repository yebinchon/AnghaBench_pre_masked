
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_2__* png_structrp ;
typedef scalar_t__ png_byte ;
typedef scalar_t__ png_alloc_size_t ;
struct TYPE_9__ {size_t size; int * data; scalar_t__ location; int name; } ;
struct TYPE_10__ {scalar_t__ user_chunk_malloc_max; TYPE_1__ unknown_chunk; scalar_t__ mode; int chunk_name; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int * FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(png_structrp VAR_3, png_uint_32 VAR_4)
{
   png_alloc_size_t VAR_5 = VAR_0;

   if (VAR_3->unknown_chunk.data != ((void*)0))
   {
      FUNC_4(VAR_3, VAR_3->unknown_chunk.data);
      VAR_3->unknown_chunk.data = ((void*)0);
   }
   if (VAR_4 <= VAR_5)
   {
      FUNC_0(VAR_3->unknown_chunk.name, VAR_3->chunk_name);

      VAR_3->unknown_chunk.size = (size_t)VAR_4 ;

      VAR_3->unknown_chunk.location = (png_byte)VAR_3->mode ;

      if (VAR_4 == 0)
         VAR_3->unknown_chunk.data = ((void*)0);

      else
      {

         VAR_3->unknown_chunk.data = FUNC_6(VAR_2,
             FUNC_5(VAR_3, VAR_4));
      }
   }

   if (VAR_3->unknown_chunk.data == ((void*)0) && VAR_4 > 0)
   {

      FUNC_2(VAR_3, VAR_4);
      FUNC_1(VAR_3, "unknown chunk exceeds memory limits");
      return 0;
   }

   else
   {
      if (VAR_4 > 0)
         FUNC_3(VAR_3, VAR_3->unknown_chunk.data, VAR_4);
      FUNC_2(VAR_3, 0);
      return 1;
   }
}
