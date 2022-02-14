
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int valid; int Num; int format; } ;
typedef TYPE_1__ NUMCacheEntry ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*,int ,int *,int ,int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static NUMCacheEntry *
FUNC_4(const char *VAR_3)
{
 NUMCacheEntry *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0))
 {





  VAR_4 = FUNC_0(VAR_3);

  FUNC_3(&VAR_4->Num);

  FUNC_2(VAR_4->format, VAR_3, VAR_2,
      ((void*)0), VAR_1, VAR_0, &VAR_4->Num);

  VAR_4->valid = 1;
 }
 return VAR_4;
}
