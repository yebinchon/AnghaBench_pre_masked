
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mlsFeatures; } ;
typedef TYPE_1__* FTPCIPtr ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char const*) ;
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
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(const FTPCIPtr VAR_10, const char *VAR_11)
{
 char VAR_12[256], *VAR_13;
 int VAR_14;

 VAR_14 = 0;
 FUNC_2(VAR_12, VAR_11);
 VAR_13 = FUNC_3(VAR_12, ";*");
 while (VAR_13 != ((void*)0)) {
  if (FUNC_1(VAR_13, "OS.", 3))
   VAR_13 += 3;
  if (FUNC_0(VAR_13, "type")) {
   VAR_14 |= VAR_3;
  } else if (FUNC_0(VAR_13, "size")) {
   VAR_14 |= VAR_2;
  } else if (FUNC_0(VAR_13, "modify")) {
   VAR_14 |= VAR_0;
  } else if (FUNC_0(VAR_13, "UNIX.mode")) {
   VAR_14 |= VAR_6;
  } else if (FUNC_0(VAR_13, "UNIX.owner")) {
   VAR_14 |= VAR_7;
  } else if (FUNC_0(VAR_13, "UNIX.group")) {
   VAR_14 |= VAR_5;
  } else if (FUNC_0(VAR_13, "perm")) {
   VAR_14 |= VAR_1;
  } else if (FUNC_0(VAR_13, "UNIX.uid")) {
   VAR_14 |= VAR_8;
  } else if (FUNC_0(VAR_13, "UNIX.gid")) {
   VAR_14 |= VAR_4;
  } else if (FUNC_0(VAR_13, "UNIX.gid")) {
   VAR_14 |= VAR_9;
  }
  VAR_13 = FUNC_3(((void*)0), ";*");
 }

 VAR_10->mlsFeatures = VAR_14;
}
