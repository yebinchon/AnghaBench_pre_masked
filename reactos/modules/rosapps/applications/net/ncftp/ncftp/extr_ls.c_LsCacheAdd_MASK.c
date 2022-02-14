
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* itempath; scalar_t__ hits; int expiration; int fil; } ;
struct TYPE_5__ {scalar_t__ nFileInfos; } ;
typedef TYPE_1__* FileInfoListPtr ;
typedef int FileInfoList ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const* const) ;
 char* FUNC_2 (char const* const) ;
 int FUNC_3 (int,char*,char const* const) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(const char *const VAR_4, FileInfoListPtr VAR_5)
{
 char *VAR_6;
 int VAR_7;


 if (VAR_5->nFileInfos == 0)
  return;

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 >= 0) {




  FUNC_0(VAR_7);
 }

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 == ((void*)0))
  return;

 VAR_7 = VAR_2;
 (void) FUNC_4(&VAR_0[VAR_7].fil, VAR_5, sizeof(FileInfoList));
 (void) FUNC_5(&VAR_0[VAR_7].expiration);
 VAR_0[VAR_7].expiration += VAR_1;
 VAR_0[VAR_7].hits = 0;
 VAR_0[VAR_7].itempath = VAR_6;
 FUNC_3(1, "ls cache add: %s\n", VAR_4);




 VAR_2++;
 if (VAR_2 >= VAR_3)
  VAR_2 = 0;
}
