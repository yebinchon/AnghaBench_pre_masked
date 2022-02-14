
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {char const* d_name; } ;
typedef TYPE_1__* XLogLongPageHeader ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int xlp_seg_size; } ;
typedef int Size ;
typedef TYPE_2__ PGAlignedXLogBlock ;
typedef int DIR ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,char const*,int,...) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char const*,char const*) ;
 int * FUNC_7 (char const*) ;
 int FUNC_8 (int,int ,int) ;
 struct dirent* FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_11(const char *VAR_3, const char *VAR_4)
{
 int VAR_5 = -1;
 DIR *VAR_6;


 if (VAR_4 != ((void*)0))
  VAR_5 = FUNC_6(VAR_3, VAR_4);






 else if ((VAR_6 = FUNC_7(VAR_3)) != ((void*)0))
 {
  struct dirent *VAR_7;

  while ((VAR_7 = FUNC_9(VAR_6)) != ((void*)0))
  {
   if (FUNC_1(VAR_7->d_name))
   {
    VAR_5 = FUNC_6(VAR_3, VAR_7->d_name);
    VAR_4 = VAR_7->d_name;
    break;
   }
  }

  FUNC_3(VAR_6);
 }


 if (VAR_5 >= 0)
 {
  PGAlignedXLogBlock VAR_8;
  int VAR_9;

  VAR_9 = FUNC_8(VAR_5, VAR_8.data, VAR_1);
  if (VAR_9 == VAR_1)
  {
   XLogLongPageHeader VAR_10 = (XLogLongPageHeader) VAR_8.data;

   VAR_0 = VAR_10->xlp_seg_size;

   if (!FUNC_0(VAR_0))
    FUNC_4(FUNC_5("WAL segment size must be a power of two between 1 MB and 1 GB, but the WAL file \"%s\" header specifies %d byte",
          "WAL segment size must be a power of two between 1 MB and 1 GB, but the WAL file \"%s\" header specifies %d bytes",
          VAR_0),
       VAR_4, VAR_0);
  }
  else
  {
   if (VAR_2 != 0)
    FUNC_4("could not read file \"%s\": %s",
       VAR_4, FUNC_10(VAR_2));
   else
    FUNC_4("could not read file \"%s\": read %d of %zu",
       VAR_4, VAR_9, (Size) VAR_1);
  }
  FUNC_2(VAR_5);
  return 1;
 }

 return 0;
}
