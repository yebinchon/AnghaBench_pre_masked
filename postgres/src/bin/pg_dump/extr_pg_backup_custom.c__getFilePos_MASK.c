
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ pgoff_t ;
struct TYPE_5__ {scalar_t__ filePos; scalar_t__ hasSeek; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_6__ {int FH; } ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static pgoff_t
FUNC_3(ArchiveHandle *VAR_0, lclContext *VAR_1)
{
 pgoff_t VAR_2;

 if (VAR_1->hasSeek)
 {







  VAR_2 = FUNC_1(VAR_0->FH);
  if (VAR_2 < 0)
   FUNC_0("could not determine seek position in archive file: %m");

  if (VAR_2 != VAR_1->filePos)
   FUNC_2("ftell mismatch with expected position -- ftell used");
 }
 else
  VAR_2 = VAR_1->filePos;
 return VAR_2;
}
