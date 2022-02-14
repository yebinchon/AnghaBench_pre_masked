
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ FILETIME ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int ,int *,int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ,int *,int ,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(const FILETIME* VAR_5, WCHAR* VAR_6, int VAR_7)
{
 SYSTEMTIME VAR_8;
 FILETIME VAR_9;
 int VAR_10 = 0;

 *VAR_6 = '\0';

 if (!VAR_5->dwLowDateTime && !VAR_5->dwHighDateTime)
  return;

 if (!FUNC_0(VAR_5, &VAR_9))
  {err: FUNC_4(VAR_6,VAR_4); return;}

 if (!FUNC_1(&VAR_9, &VAR_8))
  goto err;

 if (VAR_7 & VAR_1) {
  VAR_10 = FUNC_2(VAR_3, 0, &VAR_8, 0, VAR_6, VAR_0);
  if (!VAR_10)
   goto err;
 }

 if (VAR_7 & VAR_2) {
  if (VAR_10)
   VAR_6[VAR_10-1] = ' ';

  VAR_6[VAR_10++] = ' ';

  if (!FUNC_3(VAR_3, 0, &VAR_8, 0, VAR_6+VAR_10, VAR_0-VAR_10))
   VAR_6[VAR_10] = '\0';
 }
}
