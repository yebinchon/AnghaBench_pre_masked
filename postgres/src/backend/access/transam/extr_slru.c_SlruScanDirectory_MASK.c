
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dirent {int d_name; } ;
struct TYPE_5__ {int Dir; } ;
typedef int (* SlruScanCallback ) (TYPE_1__*,int ,int,void*) ;
typedef TYPE_1__* SlruCtl ;
typedef int DIR ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct dirent* FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ,int ) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,int *,int) ;

bool
FUNC_7(SlruCtl VAR_2, SlruScanCallback VAR_3, void *VAR_4)
{
 bool VAR_5 = 0;
 DIR *VAR_6;
 struct dirent *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_2->Dir);
 while ((VAR_7 = FUNC_2(VAR_6, VAR_2->Dir)) != ((void*)0))
 {
  size_t VAR_10;

  VAR_10 = FUNC_4(VAR_7->d_name);

  if ((VAR_10 == 4 || VAR_10 == 5 || VAR_10 == 6) &&
   FUNC_5(VAR_7->d_name, "0123456789ABCDEF") == VAR_10)
  {
   VAR_8 = (int) FUNC_6(VAR_7->d_name, ((void*)0), 16);
   VAR_9 = VAR_8 * VAR_1;

   FUNC_3(VAR_0, "SlruScanDirectory invoking callback on %s/%s",
     VAR_2->Dir, VAR_7->d_name);
   VAR_5 = VAR_3(VAR_2, VAR_7->d_name, VAR_9, VAR_4);
   if (VAR_5)
    break;
  }
 }
 FUNC_1(VAR_6);

 return VAR_5;
}
