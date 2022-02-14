
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lcase; int attr; struct TYPE_6__* name; } ;
struct TYPE_5__ {TYPE_3__ dir_ent; int offset; int lfn_offset; scalar_t__ lfn; } ;
typedef TYPE_1__ DOS_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int,int ) ;
 scalar_t__ FUNC_3 (unsigned char*,TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__,TYPE_3__*) ;
 int FUNC_5 (int ,int ,char const*) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char const*,char) ;
 scalar_t__ FUNC_8 (char const*,int ) ;

__attribute__((used)) static void FUNC_9(DOS_FILE * VAR_6)
{

    unsigned char VAR_7[46];
    unsigned char *VAR_8, *VAR_9;


    if (!VAR_6->offset) {

 FUNC_6("Cannot rename FAT32 root dir\n");



 return;
    }
    while (1) {

 FUNC_6("New name: ");
 FUNC_1(VAR_5);
 if (FUNC_2((char *)VAR_7, 45, VAR_4)) {
     if ((VAR_9 = (unsigned char *)FUNC_7((const char *)VAR_7, '\n')))
  *VAR_9 = 0;
     for (VAR_8 = (unsigned char *)FUNC_8((const char *)VAR_7, 0);
   VAR_8 >= VAR_7 && (*VAR_8 == ' ' || *VAR_8 == '\t'); VAR_8--) ;
     VAR_8[1] = 0;
     for (VAR_8 = VAR_7; *VAR_8 == ' ' || *VAR_8 == '\t'; VAR_8++) ;
     if (FUNC_3(VAR_8, VAR_6->dir_ent.name)) {
  if (VAR_6->dir_ent.lcase & VAR_2) {


      VAR_6->dir_ent.lcase &= ~VAR_2;

      VAR_6->dir_ent.attr &= ~(VAR_0 | VAR_1);
      FUNC_4(VAR_6->offset, VAR_3 + 2, &VAR_6->dir_ent);
  } else {
      FUNC_4(VAR_6->offset, VAR_3, VAR_6->dir_ent.name);
  }
  if (VAR_6->lfn)
      FUNC_5(VAR_6->lfn_offset, VAR_6->offset,
         (const char *)VAR_6->dir_ent.name);
  return;
     }
 }



    }
}
