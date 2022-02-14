
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* jpeg_saved_marker_ptr ;
typedef TYPE_2__* j_decompress_ptr ;
typedef TYPE_3__* j_compress_ptr ;
struct TYPE_9__ {scalar_t__ write_Adobe_marker; scalar_t__ write_JFIF_header; } ;
struct TYPE_8__ {TYPE_1__* marker_list; } ;
struct TYPE_7__ {scalar_t__ marker; int data_length; int * data; struct TYPE_7__* next; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int *,int) ;

__attribute__((used)) static
void FUNC_2(j_decompress_ptr VAR_1, j_compress_ptr VAR_2)
{
  jpeg_saved_marker_ptr VAR_3;






  for (VAR_3 = VAR_1->marker_list; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {

    if (VAR_2->write_JFIF_header &&
        VAR_3->marker == VAR_0 &&
        VAR_3->data_length >= 5 &&
        FUNC_0(VAR_3->data[0]) == 0x4A &&
        FUNC_0(VAR_3->data[1]) == 0x46 &&
        FUNC_0(VAR_3->data[2]) == 0x49 &&
        FUNC_0(VAR_3->data[3]) == 0x46 &&
        FUNC_0(VAR_3->data[4]) == 0)
                          continue;

    if (VAR_2->write_Adobe_marker &&
        VAR_3->marker == VAR_0+14 &&
        VAR_3->data_length >= 5 &&
        FUNC_0(VAR_3->data[0]) == 0x41 &&
        FUNC_0(VAR_3->data[1]) == 0x64 &&
        FUNC_0(VAR_3->data[2]) == 0x6F &&
        FUNC_0(VAR_3->data[3]) == 0x62 &&
        FUNC_0(VAR_3->data[4]) == 0x65)
                         continue;

     FUNC_1(VAR_2, VAR_3->marker,
                       VAR_3->data, VAR_3->data_length);
  }
}
