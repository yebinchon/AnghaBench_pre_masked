
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef void* XLogRecPtr ;
typedef void* TimestampTz ;
typedef int Size ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,void*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(unsigned char VAR_3, char *VAR_4, Size VAR_5)
{
 int VAR_6;
 XLogRecPtr VAR_7;
 XLogRecPtr VAR_8;
 TimestampTz VAR_9;
 bool VAR_10;

 FUNC_9(&VAR_2);

 switch (VAR_3)
 {
  case 'w':
   {

    VAR_6 = sizeof(int64) + sizeof(int64) + sizeof(int64);
    if (VAR_5 < VAR_6)
     FUNC_4(VAR_1,
       (FUNC_5(VAR_0),
        FUNC_6("invalid WAL message received from primary")));
    FUNC_3(&VAR_2, VAR_4, VAR_6);


    VAR_7 = FUNC_8(&VAR_2);
    VAR_8 = FUNC_8(&VAR_2);
    VAR_9 = FUNC_8(&VAR_2);
    FUNC_0(VAR_8, VAR_9);

    VAR_4 += VAR_6;
    VAR_5 -= VAR_6;
    FUNC_2(VAR_4, VAR_5, VAR_7);
    break;
   }
  case 'k':
   {

    VAR_6 = sizeof(int64) + sizeof(int64) + sizeof(char);
    if (VAR_5 != VAR_6)
     FUNC_4(VAR_1,
       (FUNC_5(VAR_0),
        FUNC_6("invalid keepalive message received from primary")));
    FUNC_3(&VAR_2, VAR_4, VAR_6);


    VAR_8 = FUNC_8(&VAR_2);
    VAR_9 = FUNC_8(&VAR_2);
    VAR_10 = FUNC_7(&VAR_2);

    FUNC_0(VAR_8, VAR_9);


    if (VAR_10)
     FUNC_1(1, 0);
    break;
   }
  default:
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("invalid replication message type %d",
          VAR_3)));
 }
}
