
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ uint32 ;
typedef int fline ;
typedef void* XLogRecPtr ;
typedef int TimeLineID ;
struct TYPE_4__ {int tli; int begin; int end; } ;
typedef TYPE_1__ TimeLineHistoryEntry ;
typedef int List ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 void* VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (char*,char*,char*,int ,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ VAR_7 ;
 int * FUNC_10 (char*,int,int *) ;
 int FUNC_11 (unsigned char) ;
 int * FUNC_12 (TYPE_1__*,int *) ;
 int * FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (char*,char*,int*,scalar_t__*,scalar_t__*) ;

List *
FUNC_16(TimeLineID VAR_8)
{
 List *VAR_9;
 char VAR_10[VAR_5];
 char VAR_11[VAR_4];
 char VAR_12[VAR_5];
 FILE *VAR_13;
 TimeLineHistoryEntry *VAR_14;
 TimeLineID VAR_15 = 0;
 XLogRecPtr VAR_16;
 bool VAR_17 = 0;


 if (VAR_8 == 1)
 {
  VAR_14 = (TimeLineHistoryEntry *) FUNC_14(sizeof(TimeLineHistoryEntry));
  VAR_14->tli = VAR_8;
  VAR_14->begin = VAR_14->end = VAR_3;
  return FUNC_13(VAR_14);
 }

 if (VAR_0)
 {
  FUNC_4(VAR_11, VAR_8);
  VAR_17 =
   FUNC_3(VAR_10, VAR_11, "RECOVERYHISTORY", 0, 0);
 }
 else
  FUNC_5(VAR_10, VAR_8);

 VAR_13 = FUNC_0(VAR_10, "r");
 if (VAR_13 == ((void*)0))
 {
  if (VAR_7 != VAR_1)
   FUNC_6(VAR_2,
     (FUNC_7(),
      FUNC_9("could not open file \"%s\": %m", VAR_10)));

  VAR_14 = (TimeLineHistoryEntry *) FUNC_14(sizeof(TimeLineHistoryEntry));
  VAR_14->tli = VAR_8;
  VAR_14->begin = VAR_14->end = VAR_3;
  return FUNC_13(VAR_14);
 }

 VAR_9 = VAR_6;




 VAR_16 = VAR_3;
 while (FUNC_10(VAR_12, sizeof(VAR_12), VAR_13) != ((void*)0))
 {

  char *VAR_18;
  TimeLineID VAR_19;
  uint32 VAR_20;
  uint32 VAR_21;
  int VAR_22;

  for (VAR_18 = VAR_12; *VAR_18; VAR_18++)
  {
   if (!FUNC_11((unsigned char) *VAR_18))
    break;
  }
  if (*VAR_18 == '\0' || *VAR_18 == '#')
   continue;

  VAR_22 = FUNC_15(VAR_12, "%u\t%X/%X", &VAR_19, &VAR_20, &VAR_21);

  if (VAR_22 < 1)
  {

   FUNC_6(VAR_2,
     (FUNC_9("syntax error in history file: %s", VAR_12),
      FUNC_8("Expected a numeric timeline ID.")));
  }
  if (VAR_22 != 3)
   FUNC_6(VAR_2,
     (FUNC_9("syntax error in history file: %s", VAR_12),
      FUNC_8("Expected a write-ahead log switchpoint location.")));

  if (VAR_9 && VAR_19 <= VAR_15)
   FUNC_6(VAR_2,
     (FUNC_9("invalid data in history file: %s", VAR_12),
      FUNC_8("Timeline IDs must be in increasing sequence.")));

  VAR_15 = VAR_19;

  VAR_14 = (TimeLineHistoryEntry *) FUNC_14(sizeof(TimeLineHistoryEntry));
  VAR_14->tli = VAR_19;
  VAR_14->begin = VAR_16;
  VAR_14->end = ((uint64) (VAR_20)) << 32 | (uint64) VAR_21;
  VAR_16 = VAR_14->end;


  VAR_9 = FUNC_12(VAR_14, VAR_9);


 }

 FUNC_1(VAR_13);

 if (VAR_9 && VAR_8 <= VAR_15)
  FUNC_6(VAR_2,
    (FUNC_9("invalid data in history file \"%s\"", VAR_10),
     FUNC_8("Timeline IDs must be less than child timeline's ID.")));





 VAR_14 = (TimeLineHistoryEntry *) FUNC_14(sizeof(TimeLineHistoryEntry));
 VAR_14->tli = VAR_8;
 VAR_14->begin = VAR_16;
 VAR_14->end = VAR_3;

 VAR_9 = FUNC_12(VAR_14, VAR_9);





 if (VAR_17)
  FUNC_2(VAR_10, VAR_11);

 return VAR_9;
}
