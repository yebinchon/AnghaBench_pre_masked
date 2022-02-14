
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structrp ;
struct TYPE_12__ {scalar_t__ avail_out; int * next_out; scalar_t__ avail_in; int * next_in; } ;
struct TYPE_11__ {scalar_t__ zowner; int options; int zstream_start; int flags; TYPE_6__ zstream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (char*,int,int,char*) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_10(png_structrp VAR_5, png_uint_32 VAR_6)
{
   if (VAR_5->zowner != 0)
   {
      char VAR_7[64];

      FUNC_0(VAR_7, VAR_5->zowner);




      (void)FUNC_8(VAR_7, (sizeof VAR_7), 4, " using zstream");




      FUNC_6(VAR_5, VAR_7);

   }
   {
      int VAR_8;
      VAR_5->zstream.next_in = ((void*)0);
      VAR_5->zstream.avail_in = 0;
      VAR_5->zstream.next_out = ((void*)0);
      VAR_5->zstream.avail_out = 0;

      if ((VAR_5->flags & VAR_0) != 0)
      {



         VAR_8 = FUNC_3(&VAR_5->zstream);

      }

      else
      {



         VAR_8 = FUNC_1(&VAR_5->zstream);


         if (VAR_8 == VAR_4)
            VAR_5->flags |= VAR_0;
      }
      if (VAR_8 == VAR_4)
         VAR_5->zowner = VAR_6;

      else
         FUNC_9(VAR_5, VAR_8);

      return VAR_8;
   }




}
