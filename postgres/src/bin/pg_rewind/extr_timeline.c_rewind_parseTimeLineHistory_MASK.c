
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ uint32 ;
typedef void* XLogRecPtr ;
typedef scalar_t__ TimeLineID ;
struct TYPE_6__ {int end; void* begin; scalar_t__ tli; } ;
typedef TYPE_1__ TimeLineHistoryEntry ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char*,char*,scalar_t__*,scalar_t__*,scalar_t__*) ;

TimeLineHistoryEntry *
FUNC_6(char *VAR_1, TimeLineID VAR_2, int *VAR_3)
{
 char *VAR_4;
 TimeLineHistoryEntry *VAR_5;
 TimeLineHistoryEntry *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 TimeLineID VAR_8 = 0;
 XLogRecPtr VAR_9;
 char *VAR_10;
 bool VAR_11 = 0;




 VAR_9 = VAR_0;
 VAR_10 = VAR_1;
 while (!VAR_11)
 {
  char *VAR_12;
  TimeLineID VAR_13;
  uint32 VAR_14;
  uint32 VAR_15;
  int VAR_16;

  VAR_4 = VAR_10;
  while (*VAR_10 && *VAR_10 != '\n')
   VAR_10++;
  if (!(*VAR_10))
   VAR_11 = 1;
  else
   *VAR_10++ = '\0';


  for (VAR_12 = VAR_4; *VAR_12; VAR_12++)
  {
   if (!FUNC_1((unsigned char) *VAR_12))
    break;
  }
  if (*VAR_12 == '\0' || *VAR_12 == '#')
   continue;

  VAR_16 = FUNC_5(VAR_4, "%u\t%X/%X", &VAR_13, &VAR_14, &VAR_15);

  if (VAR_16 < 1)
  {

   FUNC_2("syntax error in history file: %s", VAR_4);
   FUNC_2("Expected a numeric timeline ID.");
   FUNC_0(1);
  }
  if (VAR_16 != 3)
  {
   FUNC_2("syntax error in history file: %s", VAR_4);
   FUNC_2("Expected a write-ahead log switchpoint location.");
   FUNC_0(1);
  }
  if (VAR_6 && VAR_13 <= VAR_8)
  {
   FUNC_2("invalid data in history file: %s", VAR_4);
   FUNC_2("Timeline IDs must be in increasing sequence.");
   FUNC_0(1);
  }

  VAR_8 = VAR_13;

  VAR_7++;
  VAR_6 = FUNC_4(VAR_6, VAR_7 * sizeof(TimeLineHistoryEntry));

  VAR_5 = &VAR_6[VAR_7 - 1];
  VAR_5->tli = VAR_13;
  VAR_5->begin = VAR_9;
  VAR_5->end = ((uint64) (VAR_14)) << 32 | (uint64) VAR_15;
  VAR_9 = VAR_5->end;


 }

 if (VAR_6 && VAR_2 <= VAR_8)
 {
  FUNC_2("invalid data in history file");
  FUNC_2("Timeline IDs must be less than child timeline's ID.");
  FUNC_0(1);
 }





 VAR_7++;
 if (VAR_6)
  VAR_6 = FUNC_4(VAR_6, VAR_7 * sizeof(TimeLineHistoryEntry));
 else
  VAR_6 = FUNC_3(1 * sizeof(TimeLineHistoryEntry));

 VAR_5 = &VAR_6[VAR_7 - 1];
 VAR_5->tli = VAR_2;
 VAR_5->begin = VAR_9;
 VAR_5->end = VAR_0;

 *VAR_3 = VAR_7;
 return VAR_6;
}
