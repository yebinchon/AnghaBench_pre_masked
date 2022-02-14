
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int atts; scalar_t__ ads; } ;
typedef TYPE_4__ fcb ;
struct TYPE_15__ {TYPE_3__* fileref; } ;
typedef TYPE_5__ ccb ;
struct TYPE_16__ {int FileAttributes; scalar_t__ ReparseTag; } ;
struct TYPE_13__ {TYPE_2__* parent; } ;
struct TYPE_12__ {TYPE_1__* fcb; } ;
struct TYPE_11__ {int atts; } ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_6__ FILE_ATTRIBUTE_TAG_INFORMATION ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static NTSTATUS FUNC_2(FILE_ATTRIBUTE_TAG_INFORMATION* VAR_3, fcb* VAR_4, ccb* VAR_5, LONG* VAR_6) {
    *VAR_6 -= sizeof(FILE_ATTRIBUTE_TAG_INFORMATION);

    if (VAR_4->ads) {
        if (!VAR_5->fileref || !VAR_5->fileref->parent) {
            FUNC_0("no fileref for stream\n");
            return VAR_1;
        }

        VAR_3->FileAttributes = VAR_5->fileref->parent->fcb->atts;
    } else
        VAR_3->FileAttributes = VAR_4->atts;

    if (!(VAR_3->FileAttributes & VAR_0))
        VAR_3->ReparseTag = 0;
    else
        VAR_3->ReparseTag = FUNC_1(VAR_4);

    return VAR_2;
}
