
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* phar; } ;
typedef TYPE_1__ phar_entry_data ;
struct TYPE_8__ {int fname_len; int fname; } ;
typedef TYPE_2__ phar_archive_data ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,char**) ;
 TYPE_1__* FUNC_3 (int ,int ,char*,size_t,char*,int,char**,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,char*,char*,...) ;

__attribute__((used)) static void FUNC_5(phar_archive_data **VAR_2, char *VAR_3, size_t VAR_4)
{
 char *VAR_5;
 phar_entry_data *VAR_6;

 if (!(VAR_6 = FUNC_3((*VAR_2)->fname, (*VAR_2)->fname_len, VAR_3, VAR_4, "w+b", 2, &VAR_5, 1))) {
  if (VAR_5) {
   FUNC_4(VAR_1, 0, "Directory %s does not exist and cannot be created: %s", VAR_3, VAR_5);
   FUNC_0(VAR_5);
  } else {
   FUNC_4(VAR_1, 0, "Directory %s does not exist and cannot be created", VAR_3);
  }

  return;
 } else {
  if (VAR_5) {
   FUNC_0(VAR_5);
  }


  if (VAR_6->phar != *VAR_2) {
   *VAR_2 = VAR_6->phar;
  }
  FUNC_1(VAR_6);
  FUNC_2(*VAR_2, 0, 0, 0, &VAR_5);

  if (VAR_5) {
   FUNC_4(VAR_0, 0, "%s", VAR_5);
   FUNC_0(VAR_5);
  }
 }
}
