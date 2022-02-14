
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valid; scalar_t__ age; int std; int str; } ;
typedef TYPE_1__ DCHCacheEntry ;


 int FUNC_0 (int ) ;
 TYPE_1__** VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char const*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,int,...) ;
 int VAR_6 ;

__attribute__((used)) static DCHCacheEntry *
FUNC_5(const char *VAR_7, bool VAR_8)
{
 DCHCacheEntry *VAR_9;


 FUNC_1();




 if (VAR_6 >= VAR_2)
 {
  DCHCacheEntry *VAR_10 = VAR_0[0];




  if (VAR_10->valid)
  {
   for (int VAR_11 = 1; VAR_11 < VAR_2; VAR_11++)
   {
    VAR_9 = VAR_0[VAR_11];
    if (!VAR_9->valid)
    {
     VAR_10 = VAR_9;
     break;
    }
    if (VAR_9->age < VAR_10->age)
     VAR_10 = VAR_9;
   }
  }



  VAR_10->valid = 0;
  FUNC_3(VAR_10->str, VAR_7, VAR_3 + 1);
  VAR_10->age = (++VAR_1);

  return VAR_10;
 }
 else
 {



  FUNC_0(VAR_0[VAR_6] == ((void*)0));
  VAR_0[VAR_6] = VAR_9 = (DCHCacheEntry *)
   FUNC_2(VAR_5, sizeof(DCHCacheEntry));
  VAR_9->valid = 0;
  FUNC_3(VAR_9->str, VAR_7, VAR_3 + 1);
  VAR_9->std = VAR_8;
  VAR_9->age = (++VAR_1);

  ++VAR_6;
  return VAR_9;
 }
}
