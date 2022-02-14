
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* readBuf; struct TYPE_6__* readRecordBuf; struct TYPE_6__* errormsg_buf; struct TYPE_6__* main_data; TYPE_1__* blocks; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_5__ {TYPE_2__* data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(XLogReaderState *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++)
 {
  if (VAR_1->blocks[VAR_2].data)
   FUNC_0(VAR_1->blocks[VAR_2].data);
 }
 if (VAR_1->main_data)
  FUNC_0(VAR_1->main_data);

 FUNC_0(VAR_1->errormsg_buf);
 if (VAR_1->readRecordBuf)
  FUNC_0(VAR_1->readRecordBuf);
 FUNC_0(VAR_1->readBuf);
 FUNC_0(VAR_1);
}
