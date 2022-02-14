
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int * png_bytep ;
struct TYPE_6__ {scalar_t__ flush_rows; scalar_t__ flush_dist; int * row_buf; int * prev_row; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,size_t,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(png_structrp VAR_1, png_bytep VAR_2,
    size_t VAR_3 )
{
   FUNC_1(1, "in png_write_filtered_row");

   FUNC_2(2, "filter = %d", VAR_2[0]);

   FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
   FUNC_3(VAR_1);
}
