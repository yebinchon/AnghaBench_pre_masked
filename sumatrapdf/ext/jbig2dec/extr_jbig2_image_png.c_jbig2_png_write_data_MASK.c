
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
typedef int png_bytep ;
typedef int png_FILE_p ;
struct TYPE_5__ {int io_ptr; } ;


 scalar_t__ FUNC_0 (int ,int,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(png_structp VAR_0, png_bytep VAR_1, png_size_t VAR_2)
{
    png_size_t VAR_3;




    png_FILE_p VAR_4 = (png_FILE_p) FUNC_2(VAR_0);


    VAR_3 = FUNC_0(VAR_1, 1, VAR_2, VAR_4);
    if (VAR_3 != VAR_2) {
        FUNC_1(VAR_0, "write error");
    }
}
