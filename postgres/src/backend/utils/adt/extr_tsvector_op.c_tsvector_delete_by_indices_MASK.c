
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16 ;
typedef int WordEntryPos ;
struct TYPE_12__ {int pos; int len; scalar_t__ haspos; } ;
typedef TYPE_1__ WordEntry ;
struct TYPE_13__ {int size; } ;
typedef TYPE_2__* TSVector ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int*,int,int,int ) ;
 int FUNC_11 (int*,int,int,int ) ;

__attribute__((used)) static TSVector
FUNC_12(TSVector VAR_1, int *VAR_2,
         int VAR_3)
{
 TSVector VAR_4;
 WordEntry *VAR_5 = FUNC_0(VAR_1),
      *VAR_6;
 char *VAR_7 = FUNC_6(VAR_1),
      *VAR_8;
 int VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;






 if (VAR_3 > 1)
 {
  FUNC_10(VAR_2, VAR_3, sizeof(int), VAR_0);
  VAR_3 = FUNC_11(VAR_2, VAR_3, sizeof(int),
        VAR_0);
 }





 VAR_4 = (TSVector) FUNC_9(FUNC_7(VAR_1));


 VAR_4->size = VAR_1->size - VAR_3;




 VAR_6 = FUNC_0(VAR_4);
 VAR_8 = FUNC_6(VAR_4);
 VAR_12 = 0;
 for (VAR_9 = VAR_10 = VAR_11 = 0; VAR_9 < VAR_1->size; VAR_9++)
 {





  if (VAR_11 < VAR_3 && VAR_9 == VAR_2[VAR_11])
  {
   VAR_11++;
   continue;
  }


  FUNC_8(VAR_8 + VAR_12, VAR_7 + VAR_5[VAR_9].pos, VAR_5[VAR_9].len);
  VAR_6[VAR_10].haspos = VAR_5[VAR_9].haspos;
  VAR_6[VAR_10].len = VAR_5[VAR_9].len;
  VAR_6[VAR_10].pos = VAR_12;
  VAR_12 += VAR_5[VAR_9].len;
  if (VAR_5[VAR_9].haspos)
  {
   int VAR_13 = FUNC_3(VAR_1, VAR_5 + VAR_9) * sizeof(WordEntryPos)
   + sizeof(uint16);

   VAR_12 = FUNC_5(VAR_12);
   FUNC_8(VAR_8 + VAR_12,
       FUNC_6(VAR_1) + FUNC_5(VAR_5[VAR_9].pos + VAR_5[VAR_9].len),
       VAR_13);
   VAR_12 += VAR_13;
  }

  VAR_10++;
 }






 FUNC_1(VAR_11 == VAR_3);

 FUNC_4(VAR_4, FUNC_2(VAR_4->size, VAR_12));
 return VAR_4;
}
