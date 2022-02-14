
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {unsigned short d_reclen; int d_ino; scalar_t__ d_off; int d_name; } ;
struct TYPE_5__ {int cFileName; } ;
struct TYPE_4__ {int finished; scalar_t__ offset; struct dirent dent; TYPE_3__ fileinfo; int handle; } ;
typedef TYPE_1__ DIR ;


 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,size_t) ;
 char* FUNC_3 (int ,int ,size_t*) ;

struct dirent *FUNC_4(DIR *VAR_1)
{
 char *VAR_2;
 size_t VAR_3;

 if (!VAR_1 || VAR_1->finished)
  return ((void*)0);

 if (VAR_1->offset != 0) {
  if (FUNC_0(VAR_1->handle, &(VAR_1->fileinfo)) == 0) {
   VAR_1->finished = 1;
   return ((void*)0);
  }
 }

 VAR_2 = FUNC_3(VAR_1->fileinfo.cFileName, VAR_0, &VAR_3);
 if (!VAR_2) {

  return ((void*)0);
 }
 FUNC_2(VAR_1->dent.d_name, VAR_2, VAR_3 + 1);
 FUNC_1(VAR_2);
 VAR_1->dent.d_reclen = (unsigned short)VAR_3;

 VAR_1->offset++;

 VAR_1->dent.d_ino = 1;
 VAR_1->dent.d_off = VAR_1->offset;

 return &(VAR_1->dent);
}
