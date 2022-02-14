
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct tm {int tm_isdst; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_13__ {int remoteVersionStr; } ;
struct TYPE_14__ {TYPE_1__ public; int connection; int createDate; int compression; int format; int (* WriteBytePtr ) (TYPE_2__*,int ) ;int offSize; int intSize; int version; int (* WriteBufPtr ) (TYPE_2__*,char*,int) ;} ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 struct tm* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*,int ) ;

void
FUNC_14(ArchiveHandle *VAR_1)
{
 struct tm VAR_2;

 VAR_1->WriteBufPtr(VAR_1, "PGDMP", 5);
 VAR_1->WriteBytePtr(VAR_1, FUNC_0(VAR_1->version));
 VAR_1->WriteBytePtr(VAR_1, FUNC_1(VAR_1->version));
 VAR_1->WriteBytePtr(VAR_1, FUNC_2(VAR_1->version));
 VAR_1->WriteBytePtr(VAR_1, VAR_1->intSize);
 VAR_1->WriteBytePtr(VAR_1, VAR_1->offSize);
 VAR_1->WriteBytePtr(VAR_1, VAR_1->format);
 FUNC_4(VAR_1, VAR_1->compression);
 VAR_2 = *FUNC_6(&VAR_1->createDate);
 FUNC_4(VAR_1, VAR_2.tm_sec);
 FUNC_4(VAR_1, VAR_2.tm_min);
 FUNC_4(VAR_1, VAR_2.tm_hour);
 FUNC_4(VAR_1, VAR_2.tm_mday);
 FUNC_4(VAR_1, VAR_2.tm_mon);
 FUNC_4(VAR_1, VAR_2.tm_year);
 FUNC_4(VAR_1, VAR_2.tm_isdst);
 FUNC_5(VAR_1, FUNC_3(VAR_1->connection));
 FUNC_5(VAR_1, VAR_1->public.remoteVersionStr);
 FUNC_5(VAR_1, VAR_0);
}
