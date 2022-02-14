
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uInt ;
typedef scalar_t__* png_uint_32p ;
typedef TYPE_2__* png_structrp ;
typedef void* png_bytep ;
typedef scalar_t__ png_alloc_size_t ;
struct TYPE_7__ {scalar_t__ avail_out; scalar_t__ avail_in; int msg; void* next_in; void* next_out; } ;
struct TYPE_8__ {scalar_t__ zowner; scalar_t__ chunk_name; TYPE_1__ zstream; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,void*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_4(png_structrp VAR_6, png_bytep VAR_7, uInt VAR_8,
    png_uint_32p VAR_9, png_bytep VAR_10, png_alloc_size_t *VAR_11,
    int VAR_12)
{
   if (VAR_6->zowner == VAR_6->chunk_name)
   {
      int VAR_13;


      VAR_6->zstream.next_out = VAR_10;
      VAR_6->zstream.avail_out = 0;

      do
      {
         if (VAR_6->zstream.avail_in == 0)
         {
            if (VAR_8 > *VAR_9)
               VAR_8 = (uInt)*VAR_9;
            *VAR_9 -= VAR_8;

            if (VAR_8 > 0)
               FUNC_2(VAR_6, VAR_7, VAR_8);

            VAR_6->zstream.next_in = VAR_7;
            VAR_6->zstream.avail_in = VAR_8;
         }

         if (VAR_6->zstream.avail_out == 0)
         {
            uInt VAR_14 = VAR_0;
            if (VAR_14 > *VAR_11)
               VAR_14 = (uInt)*VAR_11;
            *VAR_11 -= VAR_14;

            VAR_6->zstream.avail_out = VAR_14;
         }





         VAR_13 = FUNC_1(VAR_6, *VAR_9 > 0 ?
             VAR_2 : (VAR_12 ? VAR_1 : VAR_5));
      }
      while (VAR_13 == VAR_3 && (*VAR_11 > 0 || VAR_6->zstream.avail_out > 0));

      *VAR_11 += VAR_6->zstream.avail_out;
      VAR_6->zstream.avail_out = 0;


      FUNC_3(VAR_6, VAR_13);
      return VAR_13;
   }

   else
   {
      VAR_6->zstream.msg = FUNC_0("zstream unclaimed");
      return VAR_4;
   }
}
