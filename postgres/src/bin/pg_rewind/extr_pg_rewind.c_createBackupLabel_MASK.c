
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int time_t ;
struct tm {int dummy; } ;
typedef int strfbuf ;
typedef int buf ;
typedef int XLogSegNo ;
typedef int XLogRecPtr ;
typedef int TimeLineID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 () ;
 struct tm* FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*,int,int,char*,int,int,char*) ;
 int FUNC_7 (char*,int,char*,struct tm*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_10(XLogRecPtr VAR_2, TimeLineID VAR_3, XLogRecPtr VAR_4)
{
 XLogSegNo VAR_5;
 time_t VAR_6;
 char VAR_7[128];
 char VAR_8[VAR_0];
 struct tm *VAR_9;
 char VAR_10[1000];
 int VAR_11;

 FUNC_0(VAR_2, VAR_5, VAR_1);
 FUNC_1(VAR_8, VAR_3, VAR_5, VAR_1);




 VAR_6 = FUNC_8(((void*)0));
 VAR_9 = FUNC_3(&VAR_6);
 FUNC_7(VAR_7, sizeof(VAR_7), "%Y-%m-%d %H:%M:%S %Z", VAR_9);

 VAR_11 = FUNC_6(VAR_10, sizeof(VAR_10),
       "START WAL LOCATION: %X/%X (file %s)\n"
       "CHECKPOINT LOCATION: %X/%X\n"
       "BACKUP METHOD: pg_rewind\n"
       "BACKUP FROM: standby\n"
       "START TIME: %s\n",

       (uint32) (VAR_2 >> 32), (uint32) VAR_2, VAR_8,
       (uint32) (VAR_4 >> 32), (uint32) VAR_4,
       VAR_7);
 if (VAR_11 >= sizeof(VAR_10))
  FUNC_5("backup label buffer too small");


 FUNC_4("backup_label", 1);
 FUNC_9(VAR_10, 0, VAR_11);
 FUNC_2();
}
