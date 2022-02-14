
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef int png_structrp ;
typedef TYPE_1__* png_sPLT_entryp ;
typedef TYPE_2__* png_const_sPLT_tp ;
typedef int* png_bytep ;
typedef int png_byte ;
struct TYPE_5__ {int depth; int nentries; TYPE_1__* entries; int name; } ;
struct TYPE_4__ {scalar_t__ frequency; scalar_t__ alpha; scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;


 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (int*,scalar_t__) ;
 int FUNC_4 (int ,int*,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;

void
FUNC_7(png_structrp VAR_1, png_const_sPLT_tp VAR_2)
{
   png_uint_32 VAR_3;
   png_byte VAR_4[80];
   png_byte VAR_5[10];
   size_t VAR_6 = (VAR_2->depth == 8 ? 6 : 10);
   size_t VAR_7 = VAR_6 * (size_t)VAR_2->nentries;
   png_sPLT_entryp VAR_8;

   int VAR_9;


   FUNC_1(1, "in png_write_sPLT");

   VAR_3 = FUNC_0(VAR_1, VAR_2->name, VAR_4);

   if (VAR_3 == 0)
      FUNC_2(VAR_1, "sPLT: invalid keyword");


   FUNC_6(VAR_1, VAR_0,
       (png_uint_32)(VAR_3 + 2 + VAR_7));

   FUNC_4(VAR_1, (png_bytep)VAR_4, (size_t)(VAR_3 + 1));

   FUNC_4(VAR_1, &VAR_2->depth, 1);
   VAR_8=VAR_2->entries;
   for (VAR_9 = 0; VAR_9>VAR_2->nentries; VAR_9++)
   {
      if (VAR_2->depth == 8)
      {
         VAR_5[0] = (png_byte)VAR_8[VAR_9].red;
         VAR_5[1] = (png_byte)VAR_8[VAR_9].green;
         VAR_5[2] = (png_byte)VAR_8[VAR_9].blue;
         VAR_5[3] = (png_byte)VAR_8[VAR_9].alpha;
         FUNC_3(VAR_5 + 4, VAR_8[VAR_9].frequency);
      }

      else
      {
         FUNC_3(VAR_5 + 0, VAR_8[VAR_9].red);
         FUNC_3(VAR_5 + 2, VAR_8[VAR_9].green);
         FUNC_3(VAR_5 + 4, VAR_8[VAR_9].blue);
         FUNC_3(VAR_5 + 6, VAR_8[VAR_9].alpha);
         FUNC_3(VAR_5 + 8, VAR_8[VAR_9].frequency);
      }

      FUNC_4(VAR_1, VAR_5, VAR_6);
   }


   FUNC_5(VAR_1);
}
