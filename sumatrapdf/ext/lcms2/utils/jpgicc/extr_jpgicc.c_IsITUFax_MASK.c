
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* jpeg_saved_marker_ptr ;
typedef int cmsBool ;
struct TYPE_3__ {scalar_t__ marker; int data_length; struct TYPE_3__* next; scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static
cmsBool FUNC_1(jpeg_saved_marker_ptr VAR_3)
{
    while (VAR_3)
    {
        if (VAR_3 -> marker == (VAR_1 + 1) && VAR_3 -> data_length > 5) {

            const char* VAR_4 = (const char*) VAR_3 -> data;

            if (FUNC_0(VAR_4, "G3FAX") == 0) return VAR_2;
        }

        VAR_3 = VAR_3 -> next;
    }

    return VAR_0;
}
