
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogRecPtr ;
typedef int TimestampTz ;
struct TYPE_7__ {int Write; int Flush; } ;
struct TYPE_6__ {int len; int data; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(bool VAR_5, bool VAR_6)
{
 static XLogRecPtr VAR_7 = 0;
 static XLogRecPtr VAR_8 = 0;
 XLogRecPtr VAR_9;
 static TimestampTz VAR_10 = 0;
 TimestampTz VAR_11;





 if (!VAR_5 && VAR_3 <= 0)
  return;


 VAR_11 = FUNC_0();
 if (!VAR_5
  && VAR_7 == VAR_1.Write
  && VAR_8 == VAR_1.Flush
  && !FUNC_2(VAR_10, VAR_11,
            VAR_3 * 1000))
  return;
 VAR_10 = VAR_11;


 VAR_7 = VAR_1.Write;
 VAR_8 = VAR_1.Flush;
 VAR_9 = FUNC_1(((void*)0));

 FUNC_6(&VAR_2);
 FUNC_4(&VAR_2, 'r');
 FUNC_5(&VAR_2, VAR_7);
 FUNC_5(&VAR_2, VAR_8);
 FUNC_5(&VAR_2, VAR_9);
 FUNC_5(&VAR_2, FUNC_0());
 FUNC_4(&VAR_2, VAR_6 ? 1 : 0);


 FUNC_3(VAR_0, "sending write %X/%X flush %X/%X apply %X/%X%s",
   (uint32) (VAR_7 >> 32), (uint32) VAR_7,
   (uint32) (VAR_8 >> 32), (uint32) VAR_8,
   (uint32) (VAR_9 >> 32), (uint32) VAR_9,
   VAR_6 ? " (reply requested)" : "");

 FUNC_7(VAR_4, VAR_2.data, VAR_2.len);
}
