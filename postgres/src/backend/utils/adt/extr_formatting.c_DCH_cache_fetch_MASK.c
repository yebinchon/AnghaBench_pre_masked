
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int valid; int format; } ;
typedef TYPE_1__ DCHCacheEntry ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*,int) ;
 TYPE_1__* FUNC_1 (char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char const*,int ,int ,int ,int,int *) ;

__attribute__((used)) static DCHCacheEntry *
FUNC_3(const char *VAR_5, bool VAR_6)
{
 DCHCacheEntry *VAR_7;

 if ((VAR_7 = FUNC_1(VAR_5, VAR_6)) == ((void*)0))
 {





  VAR_7 = FUNC_0(VAR_5, VAR_6);

  FUNC_2(VAR_7->format, VAR_5, VAR_2, VAR_3, VAR_1,
      VAR_0 | (VAR_6 ? VAR_4 : 0), ((void*)0));

  VAR_7->valid = 1;
 }
 return VAR_7;
}
