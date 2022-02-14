
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_6__ {char* dir; int lfn_idx; int* lfn; scalar_t__ sect; } ;
struct TYPE_5__ {char* fname; char fattrib; char* lfname; int lfsize; void* ftime; void* fdate; int fsize; } ;
typedef char TCHAR ;
typedef TYPE_1__ FILINFO ;
typedef TYPE_2__ DIR ;
typedef char BYTE ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_5 (int,int) ;

__attribute__((used)) static
void FUNC_6 (
 DIR* VAR_10,
 FILINFO* VAR_11
)
{
 UINT VAR_12;
 TCHAR *VAR_13, VAR_14;
 BYTE *VAR_15;




 VAR_13 = VAR_11->fname;
 if (VAR_10->sect) {
  VAR_15 = VAR_10->dir;
  VAR_12 = 0;
  while (VAR_12 < 11) {
   VAR_14 = (TCHAR)VAR_15[VAR_12++];
   if (VAR_14 == ' ') continue;
   if (VAR_14 == VAR_8) VAR_14 = (TCHAR)VAR_0;
   if (VAR_12 == 9) *VAR_13++ = '.';
   *VAR_13++ = VAR_14;
  }
  VAR_11->fattrib = VAR_15[VAR_1];
  VAR_11->fsize = FUNC_3(VAR_15 + VAR_2);
  VAR_11->fdate = FUNC_4(VAR_15 + VAR_4);
  VAR_11->ftime = FUNC_4(VAR_15 + VAR_5);
 }
 *VAR_13 = 0;
}
