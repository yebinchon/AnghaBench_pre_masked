
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_byte ;
struct TYPE_6__ {void* io_state; scalar_t__ chunk_name; } ;


 int FUNC_0 (int *,scalar_t__) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (int ,char*,int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void
FUNC_6(png_structrp VAR_3, png_uint_32 VAR_4,
    png_uint_32 VAR_5)
{
   png_byte VAR_6[8];






   if (VAR_3 == ((void*)0))
      return;
   FUNC_4(VAR_6, VAR_5);
   FUNC_4(VAR_6 + 4, VAR_4);
   FUNC_5(VAR_3, VAR_6, 8);


   VAR_3->chunk_name = VAR_4;


   FUNC_3(VAR_3);

   FUNC_1(VAR_3, VAR_6 + 4, 4);







}
