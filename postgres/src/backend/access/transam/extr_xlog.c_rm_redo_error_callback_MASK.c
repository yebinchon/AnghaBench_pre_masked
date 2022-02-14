
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int ReadRecPtr; } ;
typedef TYPE_1__ XLogReaderState ;
struct TYPE_7__ {int data; } ;
typedef TYPE_2__ StringInfoData ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 XLogReaderState *VAR_1 = (XLogReaderState *) VAR_0;
 StringInfoData VAR_2;

 FUNC_1(&VAR_2);
 FUNC_3(&VAR_2, VAR_1);


 FUNC_0("WAL redo at %X/%X for %s",
      (uint32) (VAR_1->ReadRecPtr >> 32),
      (uint32) VAR_1->ReadRecPtr,
      VAR_2.data);

 FUNC_2(VAR_2.data);
}
