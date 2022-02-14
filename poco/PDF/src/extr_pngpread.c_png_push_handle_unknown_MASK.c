
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
struct TYPE_15__ {int* chunk_name; int (* read_user_chunk_fn ) (TYPE_1__*,TYPE_3__*) ;int flags; TYPE_3__ unknown_chunk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ,TYPE_3__*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,TYPE_3__*) ;

void
FUNC_12(png_structp VAR_2, png_infop VAR_3, png_uint_32
   VAR_4)
{
   png_uint_32 VAR_5=0;
   FUNC_0(VAR_2, VAR_2->chunk_name);

   if (!(VAR_2->chunk_name[0] & 0x20))
   {
        FUNC_1(VAR_2, "unknown critical chunk");

     VAR_3 = VAR_3;
   }
      VAR_5=VAR_4;
   FUNC_7(VAR_2, VAR_5);
}
