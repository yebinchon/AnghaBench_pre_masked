
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* d_name; } ;
struct TYPE_8__ {TYPE_1__ entry; int * dirp; scalar_t__ index; } ;
struct TYPE_9__ {TYPE_2__ dir; } ;
struct TYPE_10__ {int _path_len; TYPE_3__ u; void* _path; int type; int flags; } ;
typedef TYPE_4__ spl_filesystem_object ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 void* FUNC_4 (char*,int) ;
 int VAR_4 ;
 int * FUNC_5 (char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ,char*,char*) ;

__attribute__((used)) static void FUNC_10(spl_filesystem_object* VAR_6, char *VAR_7)
{
 int VAR_8 = FUNC_3(VAR_6->flags, VAR_1);

 VAR_6->type = VAR_2;
 VAR_6->_path_len = FUNC_8(VAR_7);
 VAR_6->u.dir.dirp = FUNC_5(VAR_7, VAR_0, FUNC_1(VAR_3));

 if (VAR_6->_path_len > 1 && FUNC_2(VAR_7, VAR_6->_path_len-1)) {
  VAR_6->_path = FUNC_4(VAR_7, --VAR_6->_path_len);
 } else {
  VAR_6->_path = FUNC_4(VAR_7, VAR_6->_path_len);
 }
 VAR_6->u.dir.index = 0;

 if (FUNC_0(VAR_4) || VAR_6->u.dir.dirp == ((void*)0)) {
  VAR_6->u.dir.entry.d_name[0] = '\0';
  if (!FUNC_0(VAR_4)) {

   FUNC_9(VAR_5, 0,
    "Failed to open directory \"%s\"", VAR_7);
  }
 } else {
  do {
   FUNC_6(VAR_6);
  } while (VAR_8 && FUNC_7(VAR_6->u.dir.entry.d_name));
 }
}
