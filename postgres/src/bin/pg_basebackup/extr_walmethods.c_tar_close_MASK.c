
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ssize_t ;
typedef int * Walfile ;
typedef scalar_t__ WalCloseMethod ;
struct TYPE_8__ {scalar_t__ ofs_start; size_t pad_to_size; size_t currpos; struct TYPE_8__* pathname; int * header; } ;
typedef TYPE_2__ TarMethodFile ;
struct TYPE_9__ {TYPE_1__* currentfile; int fd; scalar_t__ compression; int zp; } ;
struct TYPE_7__ {int * header; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,TYPE_2__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 TYPE_4__* VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (int *,int,int) ;
 int FUNC_16 (TYPE_2__*,size_t) ;
 int FUNC_17 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_18(Walfile VAR_9, WalCloseMethod VAR_10)
{
 ssize_t VAR_11;
 int VAR_12;
 TarMethodFile *VAR_13 = (TarMethodFile *) VAR_9;

 FUNC_0(VAR_9 != ((void*)0));
 FUNC_10();

 if (VAR_10 == VAR_1)
 {
  if (VAR_8->compression)
  {
   FUNC_12("unlink not supported with compression");
   return -1;
  }






  if (FUNC_4(VAR_8->fd, VAR_13->ofs_start) != 0)
   return -1;

  FUNC_6(VAR_13->pathname);
  FUNC_6(VAR_13);
  VAR_8->currentfile = ((void*)0);

  return 0;
 }






 if (VAR_13->pad_to_size)
 {
  if (VAR_8->compression)
  {




   size_t VAR_14 = VAR_13->pad_to_size - VAR_13->currpos;

   if (VAR_14)
   {
    if (!FUNC_16(VAR_13, VAR_14))
     return -1;
   }
  }
  else
  {




   VAR_13->currpos = VAR_13->pad_to_size;
  }
 }





 VAR_11 = FUNC_11(VAR_9);
 VAR_12 = ((VAR_11 + 511) & ~511) - VAR_11;
 if (VAR_12)
 {
  char VAR_15[512];

  FUNC_1(VAR_15, 0, VAR_12);
  if (FUNC_14(VAR_9, VAR_15, VAR_12) != VAR_12)
   return -1;
 }
 FUNC_7(&(VAR_13->header[124]), 12, VAR_11);

 if (VAR_10 == VAR_0)





  FUNC_8(&(VAR_13->header[0]), VAR_13->pathname, 100);

 FUNC_7(&(VAR_13->header[148]), 8, FUNC_9(((TarMethodFile *) VAR_9)->header));
 if (FUNC_5(VAR_8->fd, VAR_13->ofs_start, VAR_5) != ((TarMethodFile *) VAR_9)->ofs_start)
  return -1;
 if (!VAR_8->compression)
 {
  VAR_7 = 0;
  if (FUNC_17(VAR_8->fd, VAR_13->header, 512) != 512)
  {

   if (VAR_7 == 0)
    VAR_7 = VAR_3;
   return -1;
  }
 }
 if (FUNC_5(VAR_8->fd, 0, VAR_4) < 0)
  return -1;


 if (FUNC_13(VAR_9) < 0)
  FUNC_3(1);


 FUNC_6(VAR_13->pathname);
 FUNC_6(VAR_13);
 VAR_8->currentfile = ((void*)0);

 return 0;
}
