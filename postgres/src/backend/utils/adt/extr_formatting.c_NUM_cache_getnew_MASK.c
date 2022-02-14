
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valid; scalar_t__ age; int str; } ;
typedef TYPE_1__ NUMCacheEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 TYPE_1__** VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char const*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,int,...) ;
 int VAR_6 ;

__attribute__((used)) static NUMCacheEntry *
FUNC_5(const char *VAR_7)
{
 NUMCacheEntry *VAR_8;


 FUNC_2();




 if (VAR_6 >= VAR_3)
 {
  NUMCacheEntry *VAR_9 = VAR_1[0];




  if (VAR_9->valid)
  {
   for (int VAR_10 = 1; VAR_10 < VAR_3; VAR_10++)
   {
    VAR_8 = VAR_1[VAR_10];
    if (!VAR_8->valid)
    {
     VAR_9 = VAR_8;
     break;
    }
    if (VAR_8->age < VAR_9->age)
     VAR_9 = VAR_8;
   }
  }



  VAR_9->valid = 0;
  FUNC_3(VAR_9->str, VAR_7, VAR_4 + 1);
  VAR_9->age = (++VAR_2);

  return VAR_9;
 }
 else
 {



  FUNC_0(VAR_1[VAR_6] == ((void*)0));
  VAR_1[VAR_6] = VAR_8 = (NUMCacheEntry *)
   FUNC_1(VAR_5, sizeof(NUMCacheEntry));
  VAR_8->valid = 0;
  FUNC_3(VAR_8->str, VAR_7, VAR_4 + 1);
  VAR_8->age = (++VAR_2);

  ++VAR_6;
  return VAR_8;
 }
}
