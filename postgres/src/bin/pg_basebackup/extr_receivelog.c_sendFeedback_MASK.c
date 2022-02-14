
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int TimestampTz ;
typedef int PGconn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_5(PGconn *VAR_3, XLogRecPtr VAR_4, TimestampTz VAR_5, bool VAR_6)
{
 char VAR_7[1 + 8 + 8 + 8 + 8 + 1];
 int VAR_8 = 0;

 VAR_7[VAR_8] = 'r';
 VAR_8 += 1;
 FUNC_3(VAR_4, &VAR_7[VAR_8]);
 VAR_8 += 8;
 if (VAR_2)
  FUNC_3(VAR_1, &VAR_7[VAR_8]);
 else
  FUNC_3(VAR_0, &VAR_7[VAR_8]);
 VAR_8 += 8;
 FUNC_3(VAR_0, &VAR_7[VAR_8]);
 VAR_8 += 8;
 FUNC_3(VAR_5, &VAR_7[VAR_8]);
 VAR_8 += 8;
 VAR_7[VAR_8] = VAR_6 ? 1 : 0;
 VAR_8 += 1;

 if (FUNC_2(VAR_3, VAR_7, VAR_8) <= 0 || FUNC_1(VAR_3))
 {
  FUNC_4("could not send feedback packet: %s",
      FUNC_0(VAR_3));
  return 0;
 }

 return 1;
}
