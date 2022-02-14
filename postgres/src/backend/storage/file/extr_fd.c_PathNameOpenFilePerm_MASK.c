
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_3__ {char* fileName; int fileFlags; int fdstate; int * resowner; scalar_t__ fileSize; int fileMode; int fd; } ;
typedef TYPE_1__ Vfd ;
typedef size_t File ;


 size_t FUNC_0 () ;
 int FUNC_1 (char const*,int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_6 (int ,char*,char const*,...) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int VAR_7 ;
 int FUNC_10 (char*) ;
 int VAR_8 ;
 char* FUNC_11 (char const*) ;

File
FUNC_12(const char *VAR_9, int VAR_10, mode_t VAR_11)
{
 char *VAR_12;
 File VAR_13;
 Vfd *VAR_14;

 FUNC_2(FUNC_6(VAR_2, "PathNameOpenFilePerm: %s %x %o",
      VAR_9, VAR_10, VAR_11));




 VAR_12 = FUNC_11(VAR_9);
 if (VAR_12 == ((void*)0))
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_9("out of memory")));

 VAR_13 = FUNC_0();
 VAR_14 = &VAR_6[VAR_13];


 FUNC_5();

 VAR_14->fd = FUNC_1(VAR_9, VAR_10, VAR_11);

 if (VAR_14->fd < 0)
 {
  int VAR_15 = VAR_7;

  FUNC_3(VAR_13);
  FUNC_10(VAR_12);
  VAR_7 = VAR_15;
  return -1;
 }
 ++VAR_8;
 FUNC_2(FUNC_6(VAR_2, "PathNameOpenFile: success %d",
      VAR_14->fd));

 FUNC_4(VAR_13);

 VAR_14->fileName = VAR_12;

 VAR_14->fileFlags = VAR_10 & ~(VAR_3 | VAR_5 | VAR_4);
 VAR_14->fileMode = VAR_11;
 VAR_14->fileSize = 0;
 VAR_14->fdstate = 0x0;
 VAR_14->resowner = ((void*)0);

 return VAR_13;
}
