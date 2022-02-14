
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int time_t ;
struct tm {void* tm_isdst; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct TYPE_13__ {char (* ReadBytePtr ) (TYPE_1__*) ;scalar_t__ version; char intSize; char offSize; int format; int compression; void* archiveDumpVersion; void* archiveRemoteVersion; int createDate; void* archdbname; int (* ReadBufPtr ) (TYPE_1__*,char*,int) ;int readHeader; } ;
typedef TYPE_1__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char,char,char) ;
 void* FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct tm*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 char FUNC_8 (TYPE_1__*) ;
 char FUNC_9 (TYPE_1__*) ;
 char FUNC_10 (TYPE_1__*) ;
 char FUNC_11 (TYPE_1__*) ;
 char FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

void
FUNC_15(ArchiveHandle *VAR_7)
{
 char VAR_8[7];
 int VAR_9;
 struct tm VAR_10;







 if (!VAR_7->readHeader)
 {
  char VAR_11,
     VAR_12,
     VAR_13;

  VAR_7->ReadBufPtr(VAR_7, VAR_8, 5);

  if (FUNC_6(VAR_8, "PGDMP", 5) != 0)
   FUNC_3("did not find magic string in file header");

  VAR_11 = VAR_7->ReadBytePtr(VAR_7);
  VAR_12 = VAR_7->ReadBytePtr(VAR_7);

  if (VAR_11 > 1 || (VAR_11 == 1 && VAR_12 > 0))
   VAR_13 = VAR_7->ReadBytePtr(VAR_7);
  else
   VAR_13 = 0;

  VAR_7->version = FUNC_0(VAR_11, VAR_12, VAR_13);

  if (VAR_7->version < VAR_0 || VAR_7->version > VAR_5)
   FUNC_3("unsupported version (%d.%d) in file header",
      VAR_11, VAR_12);

  VAR_7->intSize = VAR_7->ReadBytePtr(VAR_7);
  if (VAR_7->intSize > 32)
   FUNC_3("sanity check on integer size (%lu) failed",
      (unsigned long) VAR_7->intSize);

  if (VAR_7->intSize > sizeof(int))
   FUNC_5("archive was made on a machine with larger integers, some operations might fail");

  if (VAR_7->version >= VAR_4)
   VAR_7->offSize = VAR_7->ReadBytePtr(VAR_7);
  else
   VAR_7->offSize = VAR_7->intSize;

  VAR_9 = VAR_7->ReadBytePtr(VAR_7);

  if (VAR_7->format != VAR_9)
   FUNC_3("expected format (%d) differs from format found in file (%d)",
      VAR_7->format, VAR_9);
 }

 if (VAR_7->version >= VAR_2)
 {
  if (VAR_7->version < VAR_3)
   VAR_7->compression = VAR_7->ReadBytePtr(VAR_7);
  else
   VAR_7->compression = FUNC_1(VAR_7);
 }
 else
  VAR_7->compression = VAR_6;


 if (VAR_7->compression != 0)
  FUNC_5("archive is compressed, but this installation does not support compression -- no data will be available");


 if (VAR_7->version >= VAR_3)
 {
  VAR_10.tm_sec = FUNC_1(VAR_7);
  VAR_10.tm_min = FUNC_1(VAR_7);
  VAR_10.tm_hour = FUNC_1(VAR_7);
  VAR_10.tm_mday = FUNC_1(VAR_7);
  VAR_10.tm_mon = FUNC_1(VAR_7);
  VAR_10.tm_year = FUNC_1(VAR_7);
  VAR_10.tm_isdst = FUNC_1(VAR_7);

  VAR_7->archdbname = FUNC_2(VAR_7);

  VAR_7->createDate = FUNC_4(&VAR_10);

  if (VAR_7->createDate == (time_t) -1)
   FUNC_5("invalid creation date in header");
 }

 if (VAR_7->version >= VAR_1)
 {
  VAR_7->archiveRemoteVersion = FUNC_2(VAR_7);
  VAR_7->archiveDumpVersion = FUNC_2(VAR_7);
 }
}
