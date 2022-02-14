
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* parent; TYPE_4__* dc; TYPE_2__* fcb; } ;
typedef TYPE_5__ file_ref ;
typedef int WCHAR ;
typedef int USHORT ;
typedef int ULONG ;
struct TYPE_14__ {int MaximumLength; char* Buffer; int Length; } ;
struct TYPE_11__ {int Length; int Buffer; } ;
struct TYPE_12__ {TYPE_3__ name; } ;
struct TYPE_10__ {scalar_t__ ads; TYPE_1__* Vcb; } ;
struct TYPE_9__ {TYPE_5__* root_fileref; } ;
typedef TYPE_6__* PUNICODE_STRING ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;

NTSTATUS FUNC_3(file_ref* VAR_3, PUNICODE_STRING VAR_4, USHORT* VAR_5, ULONG* VAR_6) {
    file_ref* VAR_7;
    NTSTATUS VAR_8;
    ULONG VAR_9 = 0;
    USHORT VAR_10;
    bool VAR_11 = 0;



    if (VAR_3 == VAR_3->fcb->Vcb->root_fileref) {
        if (VAR_4->MaximumLength >= sizeof(WCHAR)) {
            VAR_4->Buffer[0] = '\\';
            VAR_4->Length = sizeof(WCHAR);

            if (VAR_5)
                *VAR_5 = 0;

            return VAR_2;
        } else {
            if (VAR_6)
                *VAR_6 = sizeof(WCHAR);
            VAR_4->Length = 0;

            return VAR_0;
        }
    }

    VAR_7 = VAR_3;
    VAR_10 = 0;

    while (VAR_7->parent) {
        USHORT VAR_12;

        if (!VAR_7->dc)
            return VAR_1;

        if (!VAR_11) {
            if (VAR_7->dc->name.Length + sizeof(WCHAR) + VAR_4->Length > VAR_4->MaximumLength)
                VAR_11 = 1;
        }

        if (VAR_11)
            VAR_12 = VAR_4->MaximumLength - VAR_7->dc->name.Length - sizeof(WCHAR);
        else
            VAR_12 = VAR_4->Length;

        if ((!VAR_11 || VAR_4->MaximumLength > VAR_7->dc->name.Length + sizeof(WCHAR)) && VAR_12 > 0) {
            FUNC_1(&VAR_4->Buffer[(VAR_7->dc->name.Length / sizeof(WCHAR)) + 1], VAR_4->Buffer, VAR_12);
            VAR_10 += VAR_7->dc->name.Length + sizeof(WCHAR);
        }

        if (VAR_4->MaximumLength >= sizeof(WCHAR)) {
            VAR_4->Buffer[0] = VAR_7->fcb->ads ? ':' : '\\';
            VAR_4->Length += sizeof(WCHAR);

            if (VAR_4->MaximumLength > sizeof(WCHAR)) {
                FUNC_0(&VAR_4->Buffer[1], VAR_7->dc->name.Buffer, FUNC_2(VAR_7->dc->name.Length, VAR_4->MaximumLength - sizeof(WCHAR)));
                VAR_4->Length += VAR_7->dc->name.Length;
            }

            if (VAR_4->Length > VAR_4->MaximumLength) {
                VAR_4->Length = VAR_4->MaximumLength;
                VAR_11 = 1;
            }
        }

        VAR_9 += sizeof(WCHAR) + VAR_7->dc->name.Length;

        VAR_7 = VAR_7->parent;
    }

    VAR_10 += sizeof(WCHAR);

    if (VAR_11) {
        if (VAR_6)
            *VAR_6 = VAR_9;
        VAR_8 = VAR_0;
    } else {
        if (VAR_5)
            *VAR_5 = VAR_10;

        VAR_8 = VAR_2;
    }

    return VAR_8;
}
