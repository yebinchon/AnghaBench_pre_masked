
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_3__ {int fdstate; scalar_t__ resowner; int fileName; scalar_t__ fileSize; int fd; } ;
typedef TYPE_1__ Vfd ;
typedef size_t File ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__,size_t) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,size_t,...) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int ,struct stat*) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (int ) ;

void
FUNC_13(File VAR_8)
{
 Vfd *VAR_9;

 FUNC_0(FUNC_4(VAR_8));

 FUNC_1(FUNC_10(VAR_2, "FileClose: %d (%s)",
      VAR_8, VAR_4[VAR_8].fileName));

 VAR_9 = &VAR_4[VAR_8];

 if (!FUNC_3(VAR_8))
 {

  if (FUNC_8(VAR_9->fd) != 0)
  {




   FUNC_10(VAR_9->fdstate & VAR_1 ? VAR_2 : FUNC_9(VAR_2),
     "could not close file \"%s\": %m", VAR_9->fileName);
  }

  --VAR_6;
  VAR_9->fd = VAR_3;


  FUNC_2(VAR_8);
 }

 if (VAR_9->fdstate & VAR_1)
 {

  VAR_7 -= VAR_9->fileSize;
  VAR_9->fileSize = 0;
 }




 if (VAR_9->fdstate & VAR_0)
 {
  struct stat VAR_10;
  int VAR_11;
  VAR_9->fdstate &= ~VAR_0;



  if (FUNC_11(VAR_9->fileName, &VAR_10))
   VAR_11 = VAR_5;
  else
   VAR_11 = 0;


  if (FUNC_12(VAR_9->fileName))
   FUNC_10(VAR_2, "could not unlink file \"%s\": %m", VAR_9->fileName);


  if (VAR_11 == 0)
   FUNC_6(VAR_9->fileName, VAR_10.st_size);
  else
  {
   VAR_5 = VAR_11;
   FUNC_10(VAR_2, "could not stat file \"%s\": %m", VAR_9->fileName);
  }
 }


 if (VAR_9->resowner)
  FUNC_7(VAR_9->resowner, VAR_8);




 FUNC_5(VAR_8);
}
