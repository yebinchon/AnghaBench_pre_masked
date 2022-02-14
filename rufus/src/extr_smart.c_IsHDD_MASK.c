
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {char const* name; scalar_t__ vid; scalar_t__ pid; scalar_t__ score; } ;
typedef int DWORD ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,char*,size_t) ;
 int FUNC_4 (char*,int) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t FUNC_5 (char const*) ;
 int * FUNC_6 (char const*,char*) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;

int FUNC_7(DWORD VAR_6, uint16_t VAR_7, uint16_t VAR_8, const char* VAR_9)
{
 int VAR_10 = 0;
 size_t VAR_11, VAR_12, VAR_13;
 BOOL VAR_14;
 uint64_t VAR_15;



 if (FUNC_2(VAR_6) == VAR_0)
  VAR_10 += 3;


 VAR_15 = FUNC_1(VAR_6);
 if (VAR_15 > 512*VAR_1)
  VAR_10 += 10;
 else if (VAR_15 < 8*VAR_1)
  VAR_10 -= 10;


 if (VAR_9 != ((void*)0)) {
  VAR_13 = FUNC_5(VAR_9);
  for (VAR_11=0; VAR_11<FUNC_0(VAR_3); VAR_11++) {
   VAR_12 = FUNC_5(VAR_3[VAR_11].name);
   if (VAR_12 > VAR_13)
    break;
   VAR_14 = (VAR_3[VAR_11].name[VAR_12-1] == '#');
   if ( (FUNC_3(VAR_9, VAR_3[VAR_11].name, VAR_12-((VAR_14)?1:0)) == 0)
     && ((!VAR_14) || ((VAR_9[VAR_12] >= '0') && (VAR_9[VAR_12] <= '9'))) ) {
    VAR_10 += VAR_3[VAR_11].score;
    break;
   }
  }
 }


 if (VAR_9 != ((void*)0)) {
  for (VAR_11=0; VAR_11<FUNC_0(VAR_2); VAR_11++)
   if (FUNC_6(VAR_9, VAR_2[VAR_11].name) != ((void*)0))
    VAR_10 += VAR_2[VAR_11].score;
 }


 for (VAR_11=0; VAR_11<FUNC_0(VAR_4); VAR_11++) {
  if (VAR_7 == VAR_4[VAR_11].vid) {
   VAR_10 += VAR_4[VAR_11].score;
   break;
  }
 }


 for (VAR_11=0; VAR_11<FUNC_0(VAR_5); VAR_11++) {
  if ((VAR_7 == VAR_5[VAR_11].vid) && (VAR_8 == VAR_5[VAR_11].pid)) {
   VAR_10 += VAR_5[VAR_11].score;
   break;
  }
 }

 FUNC_4("  Score: %d\n", VAR_10);
 return VAR_10;
}
