
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
typedef int png_infop ;
typedef int png_charp ;
typedef int * png_bytep ;
struct TYPE_16__ {char* name; int * data; scalar_t__ size; } ;
struct TYPE_15__ {int mode; int* chunk_name; int (* read_user_chunk_fn ) (TYPE_1__*,TYPE_3__*) ;int flags; TYPE_3__ unknown_chunk; } ;
typedef int PNG_CONST ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (TYPE_1__*,int ,TYPE_3__*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (TYPE_1__*,TYPE_3__*) ;

void
FUNC_14(png_structp VAR_5, png_infop VAR_6, png_uint_32 VAR_7)
{
   png_uint_32 VAR_8 = 0;

   FUNC_4(1, "in png_handle_unknown\n");

   if (VAR_5->mode & VAR_3)
   {



      if (FUNC_8(VAR_5->chunk_name, VAR_4, 4))
         VAR_5->mode |= VAR_0;
   }

   FUNC_0(VAR_5, VAR_5->chunk_name);

   if (!(VAR_5->chunk_name[0] & 0x20))
   {
          FUNC_1(VAR_5, "unknown critical chunk");
   }
      VAR_8 = VAR_7;

   FUNC_2(VAR_5, VAR_8);


   VAR_6 = VAR_6;

}
