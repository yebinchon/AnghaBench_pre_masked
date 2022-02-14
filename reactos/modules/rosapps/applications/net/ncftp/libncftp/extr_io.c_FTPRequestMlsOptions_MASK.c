
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int usedMLS; int mlsFeatures; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(const FTPCIPtr VAR_11)
{
 int VAR_12;
 char VAR_13[128];
 size_t VAR_14;

 if (VAR_11->usedMLS == 0) {

  VAR_11->usedMLS = 1;

  VAR_12 = VAR_11->mlsFeatures & VAR_10;
  VAR_13[0] = '\0';


  if ((VAR_12 & VAR_3) != 0) {
   FUNC_1(VAR_13, "type;");
  }


  if ((VAR_12 & VAR_2) != 0) {
   FUNC_1(VAR_13, "size;");
  }


  if ((VAR_12 & VAR_0) != 0) {
   FUNC_1(VAR_13, "modify;");
  }


  if ((VAR_12 & VAR_6) != 0) {
   FUNC_1(VAR_13, "UNIX.mode;");
  }


  if ((VAR_12 & VAR_1) != 0) {
   FUNC_1(VAR_13, "perm;");
  }


  if ((VAR_12 & VAR_7) != 0) {
   FUNC_1(VAR_13, "UNIX.owner;");
  }


  if ((VAR_12 & VAR_8) != 0) {
   FUNC_1(VAR_13, "UNIX.uid;");
  }


  if ((VAR_12 & VAR_5) != 0) {
   FUNC_1(VAR_13, "UNIX.group;");
  }


  if ((VAR_12 & VAR_4) != 0) {
   FUNC_1(VAR_13, "UNIX.gid;");
  }


  if ((VAR_12 & VAR_9) != 0) {
   FUNC_1(VAR_13, "unique;");
  }


  VAR_14 = FUNC_2(VAR_13);
  if (VAR_14 > 0) {
   if (VAR_13[VAR_14 - 1] == ';')
    VAR_13[VAR_14 - 1] = '\0';
   (void) FUNC_0(VAR_11, "OPTS MLST %s", VAR_13);
  }
 }
}
