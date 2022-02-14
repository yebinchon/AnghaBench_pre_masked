
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; void* lo_buf; int lo_buf_size; int * DeClonePtr; int * ClonePtr; int EndBlobsPtr; int EndBlobPtr; int StartBlobPtr; int StartBlobsPtr; int PrintTocDataPtr; int * ReopenPtr; int ClosePtr; int WriteBufPtr; int WriteBytePtr; int EndDataPtr; int WriteDataPtr; } ;
typedef TYPE_1__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(ArchiveHandle *VAR_12)
{

 VAR_12->WriteDataPtr = VAR_10;
 VAR_12->EndDataPtr = VAR_4;
 VAR_12->WriteBytePtr = VAR_9;
 VAR_12->WriteBufPtr = VAR_8;
 VAR_12->ClosePtr = VAR_1;
 VAR_12->ReopenPtr = ((void*)0);
 VAR_12->PrintTocDataPtr = VAR_5;

 VAR_12->StartBlobsPtr = VAR_7;
 VAR_12->StartBlobPtr = VAR_6;
 VAR_12->EndBlobPtr = VAR_2;
 VAR_12->EndBlobsPtr = VAR_3;
 VAR_12->ClonePtr = ((void*)0);
 VAR_12->DeClonePtr = ((void*)0);


 VAR_12->lo_buf_size = VAR_0;
 VAR_12->lo_buf = (void *) FUNC_1(VAR_0);




 if (VAR_12->mode == VAR_11)
  FUNC_0("this format cannot be read");
}
