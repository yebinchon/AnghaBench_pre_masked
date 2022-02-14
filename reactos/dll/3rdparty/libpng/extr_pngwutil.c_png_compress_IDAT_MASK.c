
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ uInt ;
typedef TYPE_1__* png_structrp ;
typedef int png_const_bytep ;
typedef int * png_bytep ;
typedef scalar_t__ png_alloc_size_t ;
struct TYPE_15__ {int * output; int * next; } ;
struct TYPE_13__ {char* msg; scalar_t__ avail_out; scalar_t__ avail_in; int * next_out; int next_in; } ;
struct TYPE_14__ {scalar_t__ zowner; scalar_t__ zbuffer_size; int mode; scalar_t__ compression_type; TYPE_11__ zstream; TYPE_4__* zbuffer_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_11__*,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int **) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 TYPE_4__* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,int *,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,int) ;

void
FUNC_12(png_structrp VAR_10, png_const_bytep VAR_11,
    png_alloc_size_t VAR_12, int VAR_13)
{
   if (VAR_10->zowner != VAR_8)
   {





      if (VAR_10->zbuffer_list == ((void*)0))
      {
         VAR_10->zbuffer_list = FUNC_9(VAR_9,
             FUNC_8(VAR_10, FUNC_1(VAR_10)));
         VAR_10->zbuffer_list->next = ((void*)0);
      }

      else
         FUNC_6(VAR_10, &VAR_10->zbuffer_list->next);


      if (FUNC_4(VAR_10, VAR_8, FUNC_7(VAR_10)) != VAR_6)
         FUNC_5(VAR_10, VAR_10->zstream.msg);




      VAR_10->zstream.next_out = VAR_10->zbuffer_list->output;
      VAR_10->zstream.avail_out = VAR_10->zbuffer_size;
   }





   VAR_10->zstream.next_in = FUNC_0(VAR_11);
   VAR_10->zstream.avail_in = 0;
   for (;;)
   {
      int VAR_14;


      uInt VAR_15 = VAR_3;

      if (VAR_15 > VAR_12)
         VAR_15 = (uInt)VAR_12;

      VAR_10->zstream.avail_in = VAR_15;
      VAR_12 -= VAR_15;

      VAR_14 = FUNC_2(&VAR_10->zstream, VAR_12 > 0 ? VAR_5 : VAR_13);


      VAR_12 += VAR_10->zstream.avail_in;
      VAR_10->zstream.avail_in = 0;





      if (VAR_10->zstream.avail_out == 0)
      {
         png_bytep VAR_16 = VAR_10->zbuffer_list->output;
         uInt VAR_17 = VAR_10->zbuffer_size;
         if (VAR_17 > 0)
            FUNC_10(VAR_10, VAR_8, VAR_16, VAR_17);
         VAR_10->mode |= VAR_2;

         VAR_10->zstream.next_out = VAR_16;
         VAR_10->zstream.avail_out = VAR_17;





         if (VAR_14 == VAR_6 && VAR_13 != VAR_5)
            continue;
      }




      if (VAR_14 == VAR_6)
      {




         if (VAR_12 == 0)
         {
            if (VAR_13 == VAR_4)
               FUNC_5(VAR_10, "Z_OK on Z_FINISH with output space");

            return;
         }
      }

      else if (VAR_14 == VAR_7 && VAR_13 == VAR_4)
      {



         png_bytep VAR_18 = VAR_10->zbuffer_list->output;
         uInt VAR_19 = VAR_10->zbuffer_size - VAR_10->zstream.avail_out;







         if (VAR_19 > 0)
            FUNC_10(VAR_10, VAR_8, VAR_18, VAR_19);
         VAR_10->zstream.avail_out = 0;
         VAR_10->zstream.next_out = ((void*)0);
         VAR_10->mode |= VAR_2 | VAR_0;

         VAR_10->zowner = 0;
         return;
      }

      else
      {

         FUNC_11(VAR_10, VAR_14);
         FUNC_5(VAR_10, VAR_10->zstream.msg);
      }
   }
}
