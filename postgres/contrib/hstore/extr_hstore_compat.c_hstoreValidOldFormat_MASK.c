
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pos; scalar_t__ keylen; scalar_t__ vallen; scalar_t__ valisnull; } ;
struct TYPE_6__ {int size_; } ;
typedef TYPE_1__ HStore ;
typedef TYPE_2__ HOldEntry ;
typedef int HEntry ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(HStore *VAR_1)
{
 int VAR_2 = VAR_1->size_;
 HOldEntry *VAR_3 = (HOldEntry *) FUNC_0(VAR_1);
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 if (VAR_1->size_ & VAR_0)
  return 0;


 FUNC_2(sizeof(HOldEntry) == 2 * sizeof(HEntry),
      "old hstore format is not upward-compatible");

 if (VAR_2 == 0)
  return 2;

 if (VAR_2 > 0xFFFFFFF)
  return 0;

 if (FUNC_1(VAR_2, 0) > FUNC_3(VAR_1))
  return 0;

 if (VAR_3[0].pos != 0)
  return 0;



 for (VAR_6 = 1; VAR_6 < VAR_2; ++VAR_6)
 {
  if (VAR_3[VAR_6].keylen < VAR_3[VAR_6 - 1].keylen)
   return 0;
 }







 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
 {
  if (VAR_3[VAR_6].pos != VAR_5)
   return 0;
  VAR_5 += (VAR_3[VAR_6].keylen
     + ((VAR_3[VAR_6].valisnull) ? 0 : VAR_3[VAR_6].vallen));
 }

 VAR_4 = FUNC_1(VAR_2, VAR_5);

 if (VAR_4 > FUNC_3(VAR_1))
  return 0;

 if (VAR_4 != FUNC_3(VAR_1))
  return 1;

 return 2;
}
