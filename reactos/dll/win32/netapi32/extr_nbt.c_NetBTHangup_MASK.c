
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_8__ {TYPE_1__* DebugInfo; } ;
struct TYPE_7__ {TYPE_5__ cs; scalar_t__ bytesPending; int fd; } ;
struct TYPE_6__ {scalar_t__* Spare; } ;
typedef TYPE_2__ NetBTSession ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,void*,TYPE_2__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static UCHAR FUNC_5(void *VAR_3, void *VAR_4)
{
    NetBTSession *VAR_5 = VAR_4;

    FUNC_3("adapt %p, session %p\n", VAR_3, VAR_5);

    if (!VAR_5) return VAR_2;




    FUNC_4(VAR_5->fd);
    VAR_5->fd = VAR_0;
    VAR_5->bytesPending = 0;
    VAR_5->cs.DebugInfo->Spare[0] = 0;
    FUNC_0(&VAR_5->cs);
    FUNC_2(FUNC_1(), 0, VAR_5);

    return VAR_1;
}
