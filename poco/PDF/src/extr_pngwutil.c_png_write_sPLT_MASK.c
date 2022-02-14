
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_structp ;
typedef int png_size_t ;
typedef TYPE_1__* png_sPLT_tp ;
typedef TYPE_2__* png_sPLT_entryp ;
typedef scalar_t__ png_charp ;
typedef scalar_t__* png_bytep ;
typedef scalar_t__ png_byte ;
struct TYPE_5__ {scalar_t__ frequency; scalar_t__ alpha; scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
struct TYPE_4__ {int depth; int nentries; TYPE_2__* entries; int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,scalar_t__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;

void
FUNC_8(png_structp VAR_2, png_sPLT_tp VAR_3)
{



   png_size_t VAR_4;
   png_charp VAR_5;
   png_byte VAR_6[10];
   int VAR_7 = (VAR_3->depth == 8 ? 6 : 10);
   int VAR_8 = VAR_7 * VAR_3->nentries;
   png_sPLT_entryp VAR_9;




   FUNC_1(1, "in png_write_sPLT\n");
   if (VAR_3->name == ((void*)0) || (VAR_4 = FUNC_0(VAR_2,
      VAR_3->name, &VAR_5))==0)
   {
      FUNC_4(VAR_2, "Empty keyword in sPLT chunk");
      return;
   }


   FUNC_7(VAR_2, VAR_1,
          (png_uint_32)(VAR_4 + 2 + VAR_8));
   FUNC_5(VAR_2, (png_bytep)VAR_5, VAR_4 + 1);
   FUNC_5(VAR_2, (png_bytep)&VAR_3->depth, 1);



   for (VAR_9 = VAR_3->entries; VAR_9<VAR_3->entries+VAR_3->nentries; VAR_9++)
   {
       if (VAR_3->depth == 8)
       {
           VAR_6[0] = (png_byte)VAR_9->red;
           VAR_6[1] = (png_byte)VAR_9->green;
           VAR_6[2] = (png_byte)VAR_9->blue;
           VAR_6[3] = (png_byte)VAR_9->alpha;
           FUNC_3(VAR_6 + 4, VAR_9->frequency);
       }
       else
       {
           FUNC_3(VAR_6 + 0, VAR_9->red);
           FUNC_3(VAR_6 + 2, VAR_9->green);
           FUNC_3(VAR_6 + 4, VAR_9->blue);
           FUNC_3(VAR_6 + 6, VAR_9->alpha);
           FUNC_3(VAR_6 + 8, VAR_9->frequency);
       }
       FUNC_5(VAR_2, VAR_6, (png_size_t)VAR_7);
   }
   FUNC_6(VAR_2);
   FUNC_2(VAR_2, VAR_5);
}
