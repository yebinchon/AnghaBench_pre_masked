
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int QuadPart; } ;
struct TYPE_9__ {int QuadPart; } ;
struct TYPE_8__ {int QuadPart; } ;
struct TYPE_7__ {int QuadPart; } ;
struct TYPE_11__ {int FileAttributes; TYPE_4__ ChangeTime; TYPE_3__ LastWriteTime; TYPE_2__ LastAccessTime; TYPE_1__ CreationTime; } ;
typedef TYPE_5__* PFILE_BASIC_INFORMATION ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;

void FUNC_1(int VAR_0, PFILE_BASIC_INFORMATION VAR_1)
{
    if (!VAR_0) return;
    FUNC_0("BASIC_INFO: Create=%lx Access=%lx Write=%lx Change=%lx Attr=%x\n",
        VAR_1->CreationTime.QuadPart, VAR_1->LastAccessTime.QuadPart,
        VAR_1->LastWriteTime.QuadPart, VAR_1->ChangeTime.QuadPart,
        VAR_1->FileAttributes);
}
