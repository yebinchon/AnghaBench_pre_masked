
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_4__ {char* data; int len; struct TYPE_4__* next; } ;
typedef TYPE_1__ XLogRecData ;
typedef TYPE_2__* XLogPageHeader ;
struct TYPE_5__ {int xlp_rem_len; int xlp_info; } ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,char*,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_8(int VAR_7, bool VAR_8, XLogRecData *VAR_9,
     XLogRecPtr VAR_10, XLogRecPtr VAR_11)
{
 char *VAR_12;
 int VAR_13;
 int VAR_14;
 XLogRecPtr VAR_15;
 XLogPageHeader VAR_16;





 VAR_15 = VAR_10;
 VAR_12 = FUNC_1(VAR_15);
 VAR_13 = FUNC_2(VAR_15);





 FUNC_0(VAR_13 >= sizeof(uint32));


 VAR_14 = 0;
 while (VAR_9 != ((void*)0))
 {
  char *VAR_17 = VAR_9->data;
  int VAR_18 = VAR_9->len;

  while (VAR_18 > VAR_13)
  {



   FUNC_0(VAR_15 % VAR_4 >= VAR_3 || VAR_13 == 0);
   FUNC_7(VAR_12, VAR_17, VAR_13);
   VAR_17 += VAR_13;
   VAR_18 -= VAR_13;
   VAR_14 += VAR_13;
   VAR_15 += VAR_13;
   VAR_12 = FUNC_1(VAR_15);
   VAR_16 = (XLogPageHeader) VAR_12;
   VAR_16->xlp_rem_len = VAR_7 - VAR_14;
   VAR_16->xlp_info |= VAR_5;


   if (FUNC_5(VAR_15, VAR_6) == 0)
   {
    VAR_15 += VAR_1;
    VAR_12 += VAR_1;
   }
   else
   {
    VAR_15 += VAR_3;
    VAR_12 += VAR_3;
   }
   VAR_13 = FUNC_2(VAR_15);
  }

  FUNC_0(VAR_15 % VAR_4 >= VAR_3 || VAR_18 == 0);
  FUNC_7(VAR_12, VAR_17, VAR_18);
  VAR_12 += VAR_18;
  VAR_15 += VAR_18;
  VAR_13 -= VAR_18;
  VAR_14 += VAR_18;

  VAR_9 = VAR_9->next;
 }
 FUNC_0(VAR_14 == VAR_7);






 if (VAR_8 && FUNC_5(VAR_15, VAR_6) != 0)
 {

  FUNC_0(VAR_7 == VAR_2);


  FUNC_0(FUNC_5(VAR_11, VAR_6) == 0);


  VAR_15 += VAR_13;







  while (VAR_15 < VAR_11)
  {
   VAR_12 = FUNC_1(VAR_15);
   FUNC_4(VAR_12, 0, VAR_3);

   VAR_15 += VAR_4;
  }
 }
 else
 {

  VAR_15 = FUNC_3(VAR_15);
 }

 if (VAR_15 != VAR_11)
  FUNC_6(VAR_0, "space reserved for WAL record does not match what was written");
}
